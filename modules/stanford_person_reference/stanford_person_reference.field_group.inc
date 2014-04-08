<?php
/**
 * @file
 * stanford_person_reference.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_person_reference_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_pub_creator_info|node|stanford_publication|form';
  $field_group->group_name = 'group_s_pub_creator_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Creator Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_pub_author',
      1 => 'field_s_person_link',
      2 => 'field_s_pub_creator_type',
      3 => 'field_s_pub_program',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Creator Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_s_pub_creator_info|node|stanford_publication|form'] = $field_group;

  return $export;
}
