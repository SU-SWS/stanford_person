<?php

namespace Drupal\stanford_person_importer;

interface CapInterface {

  /**
   * API url used for organization data.
   */
  const API_URL = 'https://api.stanford.edu';

  /**
   * Authentication url.
   */
  const AUTH_URL = 'https://authz.stanford.edu/oauth/token';

  /**
   * The actual CAP API.
   */
  const CAP_URL = 'https://cap.stanford.edu/cap-api/api/profiles/v1';

  /**
   * Set the CAP Client ID.
   *
   * @param string $client_id
   *   Client ID.
   */
  public function setClientId($client_id);

  /**
   * Set the CAP Password.
   *
   * @param string $secret
   *   Password.
   */
  public function setClientSecret($secret);

  /**
   * Get the url for CAPx for the given organizations.
   *
   * @param string $organizations
   *   Comma separated organization codes.
   * @param bool $children
   *   Include all children of the organizations.
   *
   * @return string
   *   CAPx URLs.
   */
  public function getOrganizationUrl($organizations, $children = FALSE);

  /**
   * Get the url for CAPx for given workgroups.
   *
   * @param string $workgroups
   *   Commas separated list of workgroups.
   *
   * @return string
   *   CAPx URLs.
   */
  public function getWorkgroupUrl($workgroups);

  /**
   * Get the total number of profiles for the given cap url.
   *
   * @param string $url
   *   Cap API Url.
   *
   * @return int
   *   Total number of profiles.
   */
  public function getTotalProfileCount($url);

  /**
   * Test the connection with the username and passwords is valid.
   *
   * @return bool
   *   The connection was successful.
   */
  public function testConnection();

  /**
   * Sync the organization database with the api data from CAP.
   */
  public function updateOrganizations();

}
