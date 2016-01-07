<?php
/**
 * @file
 * stanford_person_cap.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_person_cap_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
