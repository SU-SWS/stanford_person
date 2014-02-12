<?php
/**
 * @file
 * stanford_person_work_info.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_person_work_info_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_person_work_info|field_collection_item|field_s_person_work_info|form';
  $field_group->group_name = 'group_s_person_work_info';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_person_work_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add Work Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_person_wi_phone',
      1 => 'field_s_person_wi_fax',
      2 => 'field_s_person_wi_email',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_s_person_work_info|field_collection_item|field_s_person_work_info|form'] = $field_group;

  return $export;
}
