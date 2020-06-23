<?php

/**
 * @file
 * File description.
 *
 * Long description.
 */

use Drupal\Core\File\FileSystemInterface;
use Drupal\file\Entity\File;
use Drupal\media\Entity\Media;

/**
 * Install the default profile image.
 *
 * Add the image to the media library and add the entities to the DB.
 */
function stanford_person_post_update_8100() {

  // Save the file to public.
  $file_system = \Drupal::service('file_system');
  $destination = 'public://media/image';
  $source = $file_system->realpath(
    drupal_get_path("module", "stanford_person") .
    "/lib/assets/img/stanford-person-default-profile-image.png"
  );
  $file_system->prepareDirectory($destination, FileSystemInterface::CREATE_DIRECTORY);
  $saved = $file_system->copy($source, $destination, FileSystemInterface::EXISTS_REPLACE);

  // Save the file/media entities and ensure their UUIDs.
  // Create file entity.
  $image = File::create();
  $image->setFileUri($saved);
  $image->set('uuid', '4d5dde7e-f2c7-4d27-8ad1-99623b1308f8');
  $image->setOwnerId(\Drupal::currentUser()->id());
  $image->setMimeType('image/' . pathinfo($saved, PATHINFO_EXTENSION));
  $image->setFileName($file_system->basename($saved));
  $image->setPermanent();
  $image->save();

  // Create media entity with saved file.
  $image_media = Media::create([
    'bundle' => 'image',
    'uuid' => 'a4660e7f-d4bf-4a28-8030-9dc8576b1c9a',
    'uid' => \Drupal::currentUser()->id(),
    'langcode' => \Drupal::languageManager()->getDefaultLanguage()->getId(),
    'field_media_image' => [
      'target_id' => $image->id(),
      'alt' => t('Placeholder image'),
      'title' => t('Placeholder image'),
    ],
  ]);
  $image_media->save();

}
