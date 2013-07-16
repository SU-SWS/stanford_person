<?php
/**
 * @file
 * stanford_person.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_person_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_person';
  $context->description = 'Context for all person content type pages';
  $context->tag = 'People';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_person' => 'stanford_person',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-8116868180a8a203a7d1a990228283dc' => array(
          'module' => 'views',
          'delta' => '8116868180a8a203a7d1a990228283dc',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for all person content type pages');
  t('People');
  $export['stanford_person'] = $context;

  return $export;
}
