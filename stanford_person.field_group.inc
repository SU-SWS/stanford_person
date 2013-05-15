<?php
/**
 * @file
 * stanford_person.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_person_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_person_basic|node|stanford_person|form';
  $field_group->group_name = 'group_s_person_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_person_type',
      1 => 'field_s_person_first_name',
      2 => 'field_s_person_middle_name',
      3 => 'field_s_person_last_name',
      4 => 'field_s_person_profile_picture',
      5 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Basic Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_person_basic|node|stanford_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_person_bio|node|stanford_person|form';
  $field_group->group_name = 'group_s_person_bio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bio',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_person_education',
      1 => 'field_s_person_since',
      2 => 'body',
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
  $export['group_s_person_bio|node|stanford_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_person_contact|node|stanford_person|form';
  $field_group->group_name = 'group_s_person_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_person_email',
      1 => 'field_s_person_fax_display',
      2 => 'field_s_person_mail_address_dspl',
      3 => 'field_s_person_mail_code',
      4 => 'field_s_person_office_hours',
      5 => 'field_s_person_office_location',
      6 => 'field_s_person_phone_display',
      7 => 'field_s_person_info_links',
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
  $export['group_s_person_contact|node|stanford_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_person_faculty|node|stanford_person|form';
  $field_group->group_name = 'group_s_person_faculty';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Faculty Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_person_faculty_title',
      1 => 'field_s_person_faculty_type',
      2 => 'field_s_person_interests',
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
  $export['group_s_person_faculty|node|stanford_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_person_student|node|stanford_person|form';
  $field_group->group_name = 'group_s_person_student';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_s_person_student_type',
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
  $export['group_s_person_student|node|stanford_person|form'] = $field_group;

  return $export;
}
