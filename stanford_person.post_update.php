<?php

/**
 * @file
 * File description.
 *
 * Long description.
 */

use \Drupal\Core\File\FileSystemInterface;

/**
 * Install the default profile image to the media library and add the entities
 * to the DB.
 */
function stanford_person_post_update_8100() {

  // Save the file to public.
  $source = drupal_get_path("module", "stanford_person") . "/lib/assets/img/default-profile-image.png";
  $file_system = \Drupal::service('file_system');
  $file_system->copy($source, 'public://media/image', FileSystemInterface::EXISTS_REPLACE);

  // Save the file content entity.
  try {
    _stanford_person_import_default_content("file/4d5dde7e-f2c7-4d27-8ad1-99623b1308f8.json");
  }
  catch(\Exception $e) {
    \Drupal::logger('stanford_person')->error($e->message());
  }

  // Save the media content entity.
  try {
    _stanford_person_import_default_content("media/a4660e7f-d4bf-4a28-8030-9dc8576b1c9a.json");
  }
  catch(\Exception $e) {
    \Drupal::logger('stanford_person')->error($e->message());
  }

}

/**
 * Import a piece of content exported by default content module.
 *
 * Shamelessly borrowed from: https://www.drupal.org/project/default_content/issues/2803005
 *
 * @param string $path_to_content_json
 *   The path to the json file.
 */
function _stanford_person_import_default_content($path_to_content_json) {
  global $base_url;
  list($entity_type_id, $filename) = explode('/', $path_to_content_json);
  $p = drupal_get_path('module', 'stanford_person');
  $encoded_content = file_get_contents($p . '/content/' . $path_to_content_json);
  $serializer = \Drupal::service('serializer');
  $content = $serializer->decode($encoded_content, 'hal_json');
  $url = $base_url . base_path();
  $content['_links']['type']['href'] = str_replace('http://drupal.org/', $url, $content['_links']['type']['href']);
  $contents = $serializer->encode($content, 'hal_json');
  $class = 'Drupal\\' . $entity_type_id . '\Entity\\' . str_replace(' ', '', ucwords(str_replace('_', ' ', $entity_type_id)));
  $entity = $serializer->deserialize($contents, $class, 'hal_json', array('request_method' => 'POST'));
  $entity->enforceIsNew(TRUE);
  $entity->save();
}


stanford_person_post_update_8100();
