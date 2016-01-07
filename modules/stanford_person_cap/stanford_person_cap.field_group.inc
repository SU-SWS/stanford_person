<?php
/**
 * @file
 * stanford_person_cap.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_person_cap_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_about|node|stanford_person|stanford_cap';
  $field_group->group_name = 'group_s_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'stanford_cap';
  $field_group->parent_name = 'group_s_postcard_col2';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '5',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'About',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-about field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_about|node|stanford_person|stanford_cap'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_contact|node|stanford_person|stanford_cap';
  $field_group->group_name = 'group_s_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'stanford_cap';
  $field_group->parent_name = 'group_s_postcard_col2';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '4',
    'children' => array(
      0 => 'field_s_person_email',
      1 => 'field_s_person_office_hours',
      2 => 'field_s_person_office_location',
      3 => 'field_s_person_phone_display',
      4 => 'group_s_personal_link_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-contact field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_contact|node|stanford_person|stanford_cap'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_border_style|node|stanford_person|stanford_cap';
  $field_group->group_name = 'group_s_image_border_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'stanford_cap';
  $field_group->parent_name = 'group_s_postcard_col1';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '39',
    'children' => array(
      0 => 'field_s_person_profile_picture',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'border-simple-nowidth border-shadow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_image_border_style|node|stanford_person|stanford_cap'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_interest_style|node|stanford_person|stanford_cap';
  $field_group->group_name = 'group_s_interest_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'stanford_cap';
  $field_group->parent_name = 'group_s_research_interests';
  $field_group->data = array(
    'label' => 'Interest Style',
    'weight' => '62',
    'children' => array(
      0 => 'field_s_person_interests',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Interest Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'descriptor descriptor-btn',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_interest_style|node|stanford_person|stanford_cap'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_personal_link_style|node|stanford_person|stanford_cap';
  $field_group->group_name = 'group_s_personal_link_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'stanford_cap';
  $field_group->parent_name = 'group_s_contact';
  $field_group->data = array(
    'label' => 'Personal info Link Style',
    'weight' => '10',
    'children' => array(
      0 => 'field_s_person_info_links',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Personal info Link Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'more-link',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_personal_link_style|node|stanford_person|stanford_cap'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_col1|node|stanford_person|stanford_cap';
  $field_group->group_name = 'group_s_postcard_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'stanford_cap';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Column 1',
    'weight' => '1',
    'children' => array(
      0 => 'group_s_image_border_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Column 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-postcard-col1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_col1|node|stanford_person|stanford_cap'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_col2|node|stanford_person|stanford_cap';
  $field_group->group_name = 'group_s_postcard_col2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'stanford_cap';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Column 2',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_person_faculty_title',
      1 => 'title',
      2 => 'group_s_research_interests',
      3 => 'group_s_contact',
      4 => 'group_s_about',
      5 => 'group_s_profile_link_style',
      6 => 'group_s_status_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Column 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-postcard-col2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard_col2|node|stanford_person|stanford_cap'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|node|stanford_person|stanford_cap';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'stanford_cap';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '1',
    'children' => array(
      0 => 'group_s_postcard_col1',
      1 => 'group_s_postcard_col2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-right-wrap',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|node|stanford_person|stanford_cap'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_profile_link_style|node|stanford_person|stanford_cap';
  $field_group->group_name = 'group_s_profile_link_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'stanford_cap';
  $field_group->parent_name = 'group_s_postcard_col2';
  $field_group->data = array(
    'label' => 'Profile Link Style',
    'weight' => '6',
    'children' => array(
      0 => 'field_s_person_profile_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Profile Link Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'btn btn-arrow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_profile_link_style|node|stanford_person|stanford_cap'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_research_interests|node|stanford_person|stanford_cap';
  $field_group->group_name = 'group_s_research_interests';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'stanford_cap';
  $field_group->parent_name = 'group_s_postcard_col2';
  $field_group->data = array(
    'label' => 'Research Interests',
    'weight' => '3',
    'children' => array(
      0 => 'group_s_interest_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Research Interests',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-research-interests field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_research_interests|node|stanford_person|stanford_cap'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_status_style|node|stanford_person|stanford_cap';
  $field_group->group_name = 'group_s_status_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_person';
  $field_group->mode = 'stanford_cap';
  $field_group->parent_name = 'group_s_postcard_col2';
  $field_group->data = array(
    'label' => 'Status Style',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_person_faculty_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Status Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'summary',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_status_style|node|stanford_person|stanford_cap'] = $field_group;

  return $export;
}
