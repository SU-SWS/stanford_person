<?php

namespace Drupal\stanford_person_importer\Plugin\migrate\process;

use Drupal\Core\File\FileSystemInterface;
use Drupal\Core\StreamWrapper\StreamWrapperManagerInterface;
use Drupal\migrate\MigrateExecutableInterface;
use Drupal\migrate\MigrateSkipProcessException;
use Drupal\migrate\Plugin\MigrateProcessInterface;
use Drupal\migrate\Row;
use Drupal\migrate_file\Plugin\migrate\process\FileImport;
use GuzzleHttp\ClientInterface;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * @MigrateProcessPlugin(
 *   id = "cap_image_import"
 * )
 */
class CapImageImport extends FileImport {

  /**
   * Guzzle client.
   *
   * @var \GuzzleHttp\ClientInterface
   */
  protected $httpClient;

  public static function create(ContainerInterface $container, array $configuration, $plugin_id, $plugin_definition) {
    $configuration['guzzle_options']['headers']['Authorization'] = 'Bearer ' . self::getCapAccessToken();
    $configuration['guzzle_options']['query']['placeHolderImage'] = FALSE;
    return new static(
      $configuration,
      $plugin_id,
      $plugin_definition,
      $container->get('stream_wrapper_manager'),
      $container->get('file_system'),
      $container->get('plugin.manager.migrate.process')->createInstance('download', $configuration),
      $container->get('http_client')
    );
  }

  public function __construct(array $configuration, $plugin_id, array $plugin_definition, StreamWrapperManagerInterface $stream_wrappers, FileSystemInterface $file_system, MigrateProcessInterface $download_plugin, ClientInterface $httpClient) {
    parent::__construct($configuration, $plugin_id, $plugin_definition, $stream_wrappers, $file_system, $download_plugin);
    $this->httpClient = $httpClient;
  }

  public function transform($value, MigrateExecutableInterface $migrate_executable, Row $row, $destination_property) {
    try {
     $r = $this->httpClient->request('GET', $value, $this->configuration['guzzle_options']);
    }
    catch (\Throwable $e) {
      throw new MigrateSkipProcessException();
    }
    return parent::transform($value, $migrate_executable, $row, $destination_property);
  }

  protected static function getCapAccessToken() {
    /** @var \Drupal\config_pages\ConfigPagesLoaderServiceInterface $config_pages */
    $config_pages = \Drupal::service('config_pages.loader');
    $client_id = $config_pages->getValue('stanford_person_importer', 'su_person_cap_username', 0, 'value');
    $secret = $config_pages->getValue('stanford_person_importer', 'su_person_cap_password', 0, 'value');
    return \Drupal::service('stanford_person_importer.cap')
      ->setClientId($client_id)
      ->setClientSecret($secret)
      ->getAccessToken();
  }

}
