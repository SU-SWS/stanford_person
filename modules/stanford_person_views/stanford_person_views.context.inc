<?php
/**
 * @file
 * stanford_person_views.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_person_views_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publications_person_reference';
  $context->description = 'Publications View Page with Person References';
  $context->tag = 'Publications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'publications' => 'publications',
        'publications/search' => 'publications/search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-4066d038591af2b511f66557e5ac41e8' => array(
          'module' => 'views',
          'delta' => '4066d038591af2b511f66557e5ac41e8',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Publications');
  t('Publications View Page with Person References');
  $export['publications_person_reference'] = $context;

  return $export;
}
