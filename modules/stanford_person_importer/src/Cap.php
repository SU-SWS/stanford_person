<?php

namespace Drupal\stanford_person_importer;

use Drupal\Core\Cache\CacheBackendInterface;
use Drupal\Core\Database\Connection;
use Drupal\Core\Logger\LoggerChannelFactoryInterface;
use Drupal\taxonomy\TermInterface;
use GuzzleHttp\ClientInterface;
use GuzzleHttp\Exception\GuzzleException;

/**
 * Class Cap
 *
 * @package Drupal\stanford_person_importer
 */
class Cap implements CapInterface {

  /**
   * CAPx API username.
   *
   * @var string
   */
  protected $clientId;

  /**
   * CAPx API password.
   *
   * @var string
   */
  protected $clientSecret;

  /**
   * Guzzle client service.
   *
   * @var \GuzzleHttp\ClientInterface
   */
  protected $client;

  /**
   * Cache service.
   *
   * @var \Drupal\Core\Cache\CacheBackendInterface
   */
  protected $cache;

  /**
   * Database connection service.
   *
   * @var \Drupal\Core\Database\Connection
   */
  protected $database;

  /**
   * Database logging service.
   *
   * @var \Drupal\Core\Logger\LoggerChannelInterface
   */
  protected $logger;

  /**
   * Capx constructor.
   *
   * @param \GuzzleHttp\ClientInterface $guzzle
   *   Guzzle http service.
   * @param \Drupal\Core\Cache\CacheBackendInterface $cache
   *   Cache service.
   * @param \Drupal\Core\Database\Connection $database
   *   Database connection service.
   * @param \Drupal\Core\Logger\LoggerChannelFactoryInterface $logger_factory
   *   Database logging service.
   */
  public function __construct(ClientInterface $guzzle, CacheBackendInterface $cache, Connection $database, LoggerChannelFactoryInterface $logger_factory) {
    $this->client = $guzzle;
    $this->cache = $cache;
    $this->database = $database;
    $this->logger = $logger_factory->get('stanford_person_importer');
  }


  /**
   * {@inheritDoc}
   */
  public function setClientId($client_id) {
    $this->clientId = $client_id;
    return $this;
  }

  /**
   * {@inheritDoc}
   */
  public function setClientSecret($secret) {
    $this->clientSecret = $secret;
    return $this;
  }

  /**
   * Call the API and return the response.
   *
   * @param string $url
   *   API Url.
   * @param array $options
   *   Guzzle request options.
   *
   * @return bool|string
   *   Response string or false if failed.
   */
  protected function getApiResponse($url, array $options = []) {
    try {
      $response = $this->client->request('GET', $url, $options);
    }
    catch (GuzzleException $e) {
      // Most errors originate from the API itself.
      $this->logger->error($e->getMessage());
      return FALSE;
    }
    return $response->getStatusCode() == 200 ? json_decode((string) $response->getBody(), TRUE) : FALSE;
  }

  /**
   * {@inheritDoc}
   */
  public function getOrganizationUrl($organizations, $children = FALSE) {
    $organizations = preg_replace('/[^A-Z,]/', '', strtoupper($organizations));
    $url = self::CAP_URL . "?orgCodes=$organizations";
    if ($children) {
      $url .= '&includeChildren=true';
    }
    return $url;
  }

  /**
   * {@inheritDoc}
   */
  public function getWorkgroupUrl($workgroups) {
    $workgroups = preg_replace('/[^A-Z,:\-_]/', '', strtoupper($workgroups));
    return self::CAP_URL . "?privGroups=$workgroups";
  }

  /**
   * {@inheritDoc}
   */
  public function getTotalProfileCount($url) {
    $token = $this->getAccessToken();
    $response = $this->getApiResponse("$url&ps=1&access_token=$token");
    if ($response) {
      $response = json_decode($response, TRUE);
      return $response['totalCount'] ?? 0;
    }
  }

  /**
   * {@inheritDoc}
   */
  public function testConnection() {
    $this->cache->invalidate('cap:access_token');
    return !empty($this->getAccessToken());
  }

  /**
   * {@inheritDoc}
   */
  public function updateOrganizations() {
    $this->insertOrgData($this->getOrgData());
  }

  /**
   * Insert the given organization data into the database.
   *
   * @param array $org_data
   *   Keyed array of organization data.
   * @param array $parent
   *   The organization parent if one exists.
   *
   * @throws \Exception
   */
  protected function insertOrgData(array $org_data, TermInterface $parent = NULL) {
    $term_storage = \Drupal::entityTypeManager()->getStorage('taxonomy_term');
    $tids = $term_storage->getQuery()
      ->condition('vid', 'cap_org_codes')
      ->condition('su_cap_org_code', $org_data['orgCodes'], 'IN')
      ->execute();

    if (empty($tids)) {
      /** @var \Drupal\taxonomy\TermInterface $term */
      $term = $term_storage->create([
        'name' => $org_data['name'],
        'vid' => 'cap_org_codes',
        'su_cap_org_code' => $org_data['orgCodes'],
      ]);
      if ($parent) {
        $term->set('parent', $parent->id());
      }
      $term->save();
      $parent = $term;
    }
    else {
      $parent = $term_storage->load(reset($tids));
    }

    if (!empty($org_data['children'])) {
      foreach ($org_data['children'] as $child) {
        $this->insertOrgData($child, $parent);
      }
    }
  }

  /**
   * Get the organization data array from the API.
   *
   * @return array
   *   Keyed array of all organization data.
   */
  protected function getOrgData() {
    if ($cache = $this->cache->get('cap:org_data')) {
      return $cache->data;
    }

    $options = ['query' => ['access_token' => $this->getAccessToken()]];
    // AA00 is the root level of all Stanford.
    $result = $this->getApiResponse(self::API_URL . '/cap/v1/orgs/AA00', $options);

    if ($result) {
      $this->cache->set('cap:org_data', $result, time() + 60 * 60 * 24 * 7, [
        'cap',
        'cap:org-data',
      ]);
      return $result;
    }
    return [];
  }

  /**
   * Get the API token for CAP.
   *
   * @return string
   *   API Token.
   */
  protected function getAccessToken() {
    if ($cache = $this->cache->get('cap:access_token')) {
      return $cache->data['access_token'];
    }

    $options = [
      'query' => ['grant_type' => 'client_credentials'],
      'auth' => [$this->clientId, $this->clientSecret],
    ];
    if ($result = $this->getApiResponse(self::AUTH_URL, $options)) {
      $this->cache->set('cap:access_token', $result, time() + $result['expires_in'], [
        'cap',
        'cap:token',
      ]);
      return $result['access_token'];
    }
  }


}
