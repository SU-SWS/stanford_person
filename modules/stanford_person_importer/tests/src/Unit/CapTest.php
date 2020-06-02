<?php

namespace Drupal\Tests\stanford_person_importer\Unit;

use Drupal\Core\Cache\CacheBackendInterface;
use Drupal\Core\Database\Connection;
use Drupal\Core\DependencyInjection\ContainerBuilder;
use Drupal\Core\Form\FormState;
use Drupal\Core\Logger\LoggerChannelFactoryInterface;
use Drupal\Core\Logger\LoggerChannelInterface;
use Drupal\stanford_person_importer\Cap;
use Drupal\Tests\UnitTestCase;
use GuzzleHttp\ClientInterface;
use Psr\Http\Message\ResponseInterface;

/**
 * Class CapTest.
 *
 * @group stanford_person_importer
 * @coversDefaultClass \Drupal\stanford_person_importer\Cap
 */
class CapTest extends UnitTestCase {

  /**
   * Cap service.
   *
   * @var \Drupal\stanford_person_importer\Cap
   */
  protected $service;

  protected $guzzleStatusCode = 200;

  protected $guzzleBody = '';

  /**
   * {@inheritDoc}
   */
  protected function setUp() {
    parent::setUp();
    $guzzle = $this->createMock(ClientInterface::class);
    $guzzle->method('request')
      ->will($this->returnCallback([$this, 'guzzleRequestCallback']));
    $cache = $this->createMock(CacheBackendInterface::class);
    $database = $this->createMock(Connection::class);

    $logger = $this->createMock(LoggerChannelInterface::class);

    $logger_factory = $this->createMock(LoggerChannelFactoryInterface::class);
    $logger_factory->method('get')->wilLReturn($logger);

    $this->service = new Cap($guzzle, $cache, $database, $logger_factory);

    $container = new ContainerBuilder();
    $container->set('stanford_person_importer.cap', $this->service);
    \Drupal::setContainer($container);
  }

  public function testCredentials() {
    $this->guzzleBody = json_encode([
      'expires_in' => 100,
      'access_token' => 'foo-bar-baz',
    ]);
    $success = $this->service->setClientId('foo')
      ->setClientSecret('bar')
      ->testConnection();
    $this->assertTrue($success);

    $this->guzzleStatusCode = 403;
    $this->assertFalse($this->service->testConnection());

    $this->guzzleStatusCode = 'fail';
    $this->assertFalse($this->service->testConnection());
  }

  public function testValidateCredentials() {
    $element = ['#parents' => []];
    $form_state = new FormState();
    $form = [];

    $form_state->setValues([
      'su_person_cap_username' => [['value' => 'foo']],
      'su_person_cap_password' => [['value' => 'bar']],
    ]);
    $this->service::validateCredentials($element, $form_state, $form);
    $this->assertTrue($form_state::hasAnyErrors());
    $form_state->clearErrors();

    $this->guzzleBody = json_encode([
      'expires_in' => 100,
      'access_token' => 'foo-bar-baz',
    ]);
    $this->service::validateCredentials($element, $form_state, $form);
    $this->assertFalse($form_state::hasAnyErrors());
  }

  public function testUrls() {
    $url = $this->service->getOrganizationUrl('foo,bar');
    $this->assertEquals('https://cap.stanford.edu/cap-api/api/profiles/v1?orgCodes=FOO,BAR', $url);

    $url = $this->service->getOrganizationUrl('foo,bar', TRUE);
    $this->assertEquals('https://cap.stanford.edu/cap-api/api/profiles/v1?orgCodes=FOO,BAR&includeChildren=true', $url);

    $url = $this->service->getWorkgroupUrl('foo:bar_-baz');
    $this->assertEquals('https://cap.stanford.edu/cap-api/api/profiles/v1?privGroups=FOO:BAR_-BAZ', $url);
  }

  public function testProfileCount() {
    $this->assertEquals(0, $this->service->getTotalProfileCount('http://localhost'));

    $this->guzzleBody = json_encode([
      'totalCount' => 123,
      'expires_in' => 100,
      'access_token' => 'foo',
    ]);
    $this->assertEquals(123, $this->service->getTotalProfileCount('http://localhost'));
  }

  public function guzzleRequestCallback() {
    if ($this->guzzleStatusCode == 'fail') {
      throw new \Exception('It failed');
    }
    $response = $this->createMock(ResponseInterface::class);
    $response->method('getStatusCode')
      ->willReturnReference($this->guzzleStatusCode);
    $response->method('getBody')->willReturnReference($this->guzzleBody);
    return $response;
  }

}
