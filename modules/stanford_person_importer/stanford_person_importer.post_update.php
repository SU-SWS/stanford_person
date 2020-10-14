<?php

/**
 * @file
 * stanford_person_importer.post_update.php
 */

/**
 * Invalidate all migration profiles that don't have a photo.
 */
function stanford_person_importer_post_update_8001(&$sandbox) {
  if (!\Drupal::database()
    ->schema()
    ->tableExists('migrate_map_su_stanford_person')) {
    return;
  }

  $nids = \Drupal::entityTypeManager()->getStorage('node')
    ->getQuery()
    ->accessCheck(FALSE)
    ->condition('type', 'stanford_person')
    ->condition('su_person_photo', NULL, 'IS NULL')
    ->execute();

  if ($nids) {
    \Drupal::database()->update('migrate_map_su_stanford_person')
      ->fields(['hash' => ''])
      ->condition('destid1', array_values($nids), 'IN')
      ->execute();
  }
}
