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
  $field_group->identifier = 'group_s_person_about|node|stanford_person|full';
  $field_group->group_name = 'group_s_person_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '1',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'About',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_person_about|node|stanford_person|full'] = $field_group;

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
      0 => 'field_s_person_first_name',
      1 => 'field_s_person_last_name',
      2 => 'field_s_person_middle_name',
      3 => 'field_s_person_profile_picture',
      4 => 'field_s_person_type',
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
      0 => 'body',
      1 => 'field_s_person_education',
      2 => 'field_s_person_since',
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
      0 => 'field_s_person_fax_display',
      1 => 'field_s_person_info_links',
      2 => 'field_s_person_email',
      3 => 'field_s_person_mail_address_dspl',
      4 => 'field_s_person_mail_code',
      5 => 'field_s_person_office_hours',
      6 => 'field_s_person_office_location',
      7 => 'field_s_person_phone_display',
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
  $field_group->identifier = 'group_s_person_since_style|node|stanford_person|full';
  $field_group->group_name = 'group_s_person_since_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_postcard_col2';
  $field_group->data = array(
    'label' => 'Since Style',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_person_since',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Since Style',
      'instance_settings' => array(
        'classes' => 'italic',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_person_since_style|node|stanford_person|full'] = $field_group;

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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_col1|node|stanford_person|default';
  $field_group->group_name = 'group_s_postcard_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Column 1',
    'weight' => '28',
    'children' => array(
      0 => 'field_s_person_profile_picture',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Column 1',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_col1|node|stanford_person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_col1|node|stanford_person|full';
  $field_group->group_name = 'group_s_postcard_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Column 1',
    'weight' => '28',
    'children' => array(
      0 => 'field_s_person_profile_picture',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Column 1',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_col1|node|stanford_person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_col2|node|stanford_person|default';
  $field_group->group_name = 'group_s_postcard_col2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Column 2',
    'weight' => '29',
    'children' => array(
      0 => 'body',
      1 => 'field_s_person_education',
      2 => 'field_s_person_faculty_title',
      3 => 'field_s_person_faculty_type',
      4 => 'field_s_person_since',
      5 => 'field_s_person_student_type',
      6 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Column 2',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_col2|node|stanford_person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_col2|node|stanford_person|full';
  $field_group->group_name = 'group_s_postcard_col2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Column 2',
    'weight' => '29',
    'children' => array(
      0 => 'field_s_person_education',
      1 => 'field_s_person_faculty_title',
      2 => 'field_s_person_faculty_type',
      3 => 'field_s_person_student_type',
      4 => 'title',
      5 => 'group_s_person_since_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Column 2',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_col2|node|stanford_person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|node|stanford_person|default';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '0',
    'children' => array(
      0 => 'group_s_postcard_col1',
      1 => 'group_s_postcard_col2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'classes' => 'postcard-left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|node|stanford_person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|node|stanford_person|full';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '0',
    'children' => array(
      0 => 'group_s_postcard_col1',
      1 => 'group_s_postcard_col2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'classes' => 'postcard-left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|node|stanford_person|full'] = $field_group;

  return $export;
}
