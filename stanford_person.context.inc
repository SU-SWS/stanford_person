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
  $context->name = 'stanford_people_person_page';
  $context->description = 'Context for all person node pages';
  $context->tag = 'People';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'people/*' => 'people/*',
        '~people/faculty' => '~people/faculty',
        '~people/faculty/*' => '~people/faculty/*',
        '~people/staff' => '~people/staff',
        '~people/staff/*' => '~people/staff/*',
        '~people/students' => '~people/students',
        '~people/students/*' => '~people/students/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-publications-block_2' => array(
          'module' => 'views',
          'delta' => 'publications-block_2',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-stanford_news-block_5' => array(
          'module' => 'views',
          'delta' => 'stanford_news-block_5',
          'region' => 'content',
          'weight' => '3',
        ),
        'ds_extras-contact' => array(
          'module' => 'ds_extras',
          'delta' => 'contact',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'ds_extras-office_hours' => array(
          'module' => 'ds_extras',
          'delta' => 'office_hours',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'ds_extras-research_interests' => array(
          'module' => 'ds_extras',
          'delta' => 'research_interests',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'ds_extras-specializations' => array(
          'module' => 'ds_extras',
          'delta' => 'specializations',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'ds_extras-stanford_interests_specialize' => array(
          'module' => 'ds_extras',
          'delta' => 'stanford_interests_specialize',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'views-courses-block_1' => array(
          'module' => 'views',
          'delta' => 'courses-block_1',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for all person node pages');
  t('People');
  $export['stanford_people_person_page'] = $context;

  return $export;
}
