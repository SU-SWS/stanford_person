<?php

namespace Drupal\stanford_person_importer\Config;

use Drupal\config_pages\ConfigPagesLoaderServiceInterface;
use Drupal\Core\Cache\Cache;
use Drupal\Core\Cache\CacheableMetadata;
use Drupal\Core\Config\ConfigFactoryOverrideInterface;
use Drupal\Core\Config\StorageInterface;
use Drupal\Core\Entity\EntityTypeManagerInterface;
use Drupal\Core\Site\Settings;
use Drupal\stanford_person_importer\CapInterface;

/**
 * Class ConfigOverrides
 *
 * @package Drupal\stanford_person_importer\Config
 */
class ConfigOverrides implements ConfigFactoryOverrideInterface {

  const URL_CHUNKS = 15;

  /**
   * @var \Drupal\config_pages\ConfigPagesLoaderServiceInterface
   */
  protected $configPages;

  /**
   * @var \Drupal\Core\Entity\EntityTypeManagerInterface
   */
  protected $entityTypeManager;

  /**
   * @var \Drupal\stanford_person_importer\CapInterface
   */
  protected $cap;

  public function __construct(ConfigPagesLoaderServiceInterface $config_pages, EntityTypeManagerInterface $entity_type_manager, CapInterface $cap) {
    $this->configPages = $config_pages;
    $this->entityTypeManager = $entity_type_manager;
    $this->cap = $cap;
  }

  protected function getCapClientId() {
    $field_value = $this->configPages->getValue('stanford_person_importer', 'su_person_cap_username');
    return $field_value[0]['value'] ?? NULL;
  }

  protected function getCapClientSecret() {
    $field_value = $this->configPages->getValue('stanford_person_importer', 'su_person_cap_password');
    return $field_value[0]['value'] ?? NULL;
  }

  /**
   * {@inheritDoc}
   */
  public function loadOverrides($names) {
    $overrides = [];
    if (in_array('migrate_plus.migration.su_stanford_person', $names)) {
      $this->cap->setClientId($this->getCapClientId());
      $this->cap->setClientSecret($this->getCapClientSecret());

      $urls = $this->getOrgsUrls();
      $urls = array_merge($urls, $this->getWorkgroupUrls());
      $overrides['migrate_plus.migration.su_stanford_person']['source']['urls'] = $urls;
      $overrides['migrate_plus.migration.su_stanford_person']['source']['authentication']['client_id'] = $this->getCapClientId();
      $overrides['migrate_plus.migration.su_stanford_person']['source']['authentication']['client_secret'] = $this->getCapClientSecret();
    }
    return $overrides;
  }

  protected function getOrgsUrls() {
    $orgs = $this->configPages->getValue('stanford_person_importer', 'su_person_orgs');
    if (empty($orgs)) {
      return [];
    }

    $term_storage = $this->entityTypeManager->getStorage('taxonomy_term');
    foreach ($orgs as &$value) {
      $value = $term_storage->load($value['target_id'])
        ->get('su_cap_org_code')
        ->getString();
      $value = str_replace(' ', '', $value);
    }
    $orgs = implode(',', $orgs);

    return $this->getUrlChunks($this->cap->getOrganizationUrl($orgs));
  }

  protected function getWorkgroupUrls() {
    $workgroups = $this->configPages->getValue('stanford_person_importer', 'su_person_workgroup');
    if (empty($workgroups)) {
      return [];
    }
    foreach ($workgroups as &$value) {
      $value = reset($value);
    }
    $workgroups = implode(',', $workgroups);

    return $this->getUrlChunks($this->cap->getWorkgroupUrl($workgroups));
  }

  /**
   * Break up the url into multiple urls based on the number of results.
   *
   * @param string $url
   *   Cap API Url.
   *
   * @return string[]
   *   Array of Cap API Urls.
   */
  protected function getUrlChunks($url) {
    $count = (int) $this->cap->getTotalProfileCount($url);
    $number_chunks = ceil($count / self::URL_CHUNKS);

    if ($number_chunks <= 1) {
      return ["$url&ps=" . self::URL_CHUNKS];
    }

    $urls = [];
    for ($i = 1; $i <= $number_chunks; $i++) {
      $urls[] = "$url&p=$i&ps=" . self::URL_CHUNKS;
    }
    return $urls;
  }

  /**
   * {@inheritDoc}
   */
  public function createConfigObject($name, $collection = StorageInterface::DEFAULT_COLLECTION) {
    return NULL;
  }

  /**
   * {@inheritDoc}
   */
  public function getCacheSuffix() {
    return 'StanfordPersonImporterConfigOverride';
  }

  /**
   * {@inheritDoc}
   */
  public function getCacheableMetadata($name) {
    return new CacheableMetadata();
  }

}
