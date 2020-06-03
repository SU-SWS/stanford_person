<?php

namespace Drupal\Tests\stanford_person_importer\Unit\Config;

use Drupal\config_pages\ConfigPagesLoaderServiceInterface;

use Drupal\Core\Cache\CacheBackendInterface;
use Drupal\Core\Config\Config;
use Drupal\Core\Config\ConfigFactoryInterface;
use Drupal\Core\Database\Connection;
use Drupal\Core\Entity\ContentEntityInterface;
use Drupal\Core\Entity\EntityStorageInterface;
use Drupal\Core\Entity\EntityTypeManagerInterface;
use Drupal\Core\Field\FieldItemListInterface;
use Drupal\Core\Logger\LoggerChannelFactoryInterface;
use Drupal\stanford_person_importer\Cap;
use Drupal\stanford_person_importer\CapInterface;
use Drupal\stanford_person_importer\Config\ConfigOverrides;
use Drupal\Tests\UnitTestCase;
use GuzzleHttp\ClientInterface;
use Psr\Http\Message\ResponseInterface;

/**
 * Class ConfigOverridesTest.
 *
 * @group stanford_person_importer
 */
class ConfigOverridesTest extends UnitTestCase {

  /**
   * @var \Drupal\config_pages_overrides\Config\ConfigOverrides
   */
  protected $configOverrides;

  /**
   * Mocked config pages loader service.
   *
   * @var \PHPUnit\Framework\MockObject\MockObject
   */
  protected $configPagesService;

  /**
   * {@inheritDoc}
   */
  protected function setUp() {
    parent::setUp();
    $this->configPagesService = $this->createMock(ConfigPagesLoaderServiceInterface::class);

    $field_items = $this->createMock(FieldItemListInterface::class);
    $field_items->method('getString')->willReturn('foo, bar');

    $entity = $this->createMock(ContentEntityInterface::class);
    $entity->method('get')->willReturn($field_items);

    $entity_storage = $this->createMock(EntityStorageInterface::class);
    $entity_storage->method('load')->willReturn($entity);

    $entity_type_manager = $this->createMock(EntityTypeManagerInterface::class);
    $entity_type_manager->method('getStorage')->willReturn($entity_storage);

    $cap = $this->getCapService();

    $config = $this->createMock(Config::class);
    $config->method('getOriginal')->willReturn(
      [['selector' => 'fooBar'], ['selector' => 'barFoo/baz']]
    );

    $config_factory = $this->createMock(ConfigFactoryInterface::class);
    $config_factory->method('getEditable')->willReturn($config);
    $this->configOverrides = new ConfigOverrides($this->configPagesService, $entity_type_manager, $cap, $config_factory);
  }

  protected function getCapService() {
    $cap = $this->createMock(CapInterface::class);
    $cap->method('getTotalProfileCount')
      ->will($this->returnCallback(function () {
        if (empty($this->count)) {
          $this->count = 0;
        }
        $this->count += 10;
        return $this->count;
      }));
    $cap->method('getOrganizationUrl')->willReturn('http://localhost.orgs');
    $cap->method('getWorkgroupUrl')->willReturn('http://localhost.workgroup');

    return $cap;
  }

  public function testBasicMethods() {
    $overrides = $this->configOverrides->loadOverrides(['foo.bar']);
    $this->assertEmpty($overrides);

    $this->assertNull($this->configOverrides->createConfigObject('foo'));
    $this->assertEquals('StanfordPersonImporterConfigOverride', $this->configOverrides->getCacheSuffix());
    $metadata = $this->configOverrides->getCacheableMetadata('foo');
    $this->assertEmpty($metadata->getCacheContexts());
    $this->assertEmpty($metadata->getCacheTags());
  }

  public function testEmptyConfigOverrides() {
    $overrides = $this->configOverrides->loadOverrides(['migrate_plus.migration.su_stanford_person']);
    $this->assertNull($overrides['migrate_plus.migration.su_stanford_person']['source']['authentication']['client_id']);
    $this->assertNull($overrides['migrate_plus.migration.su_stanford_person']['source']['authentication']['client_secret']);
    $this->assertEmpty($overrides['migrate_plus.migration.su_stanford_person']['source']['urls']);
  }

  public function testConfigOverrides() {
    $this->configPagesService->method('getValue')
      ->willReturnCallback(function ($type, $field_name) {
        switch ($field_name) {
          case 'su_person_cap_username':
            return ['foo'];
          case 'su_person_cap_password':
            return ['bar'];
          case 'su_person_orgs':
            return [1, 2];
          case 'su_person_workgroup':
            return ['foo:bar'];
        }
      });


    $overrides = $this->configOverrides->loadOverrides(['migrate_plus.migration.su_stanford_person']);

    $expected_urls = [
      'http://localhost.orgs&ps=15&whitelist=fooBar,barFoo',
      'http://localhost.workgroup&p=1&ps=15&whitelist=fooBar,barFoo',
      'http://localhost.workgroup&p=2&ps=15&whitelist=fooBar,barFoo',
    ];
    $this->assertArrayEquals($expected_urls, $overrides['migrate_plus.migration.su_stanford_person']['source']['urls']);
  }

}
