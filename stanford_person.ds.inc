<?php
/**
 * @file
 * stanford_person.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function stanford_person_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|stanford_person|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'stanford_person';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|stanford_person|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|stanford_person|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'stanford_person';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|stanford_person|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_person_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_person|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_person';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_s_postcard',
        1 => 'field_s_person_profile_picture',
        2 => 'field_s_person_faculty_title',
        3 => 'title',
        4 => 'field_s_person_faculty_type',
        5 => 'body',
        6 => 'field_s_person_student_type',
        7 => 'field_s_person_education',
        8 => 'field_s_person_since',
        9 => 'group_s_postcard_col1',
        10 => 'group_s_postcard_col2',
      ),
    ),
    'fields' => array(
      'group_s_postcard' => 'ds_content',
      'field_s_person_profile_picture' => 'ds_content',
      'field_s_person_faculty_title' => 'ds_content',
      'title' => 'ds_content',
      'field_s_person_faculty_type' => 'ds_content',
      'body' => 'ds_content',
      'field_s_person_student_type' => 'ds_content',
      'field_s_person_education' => 'ds_content',
      'field_s_person_since' => 'ds_content',
      'group_s_postcard_col1' => 'ds_content',
      'group_s_postcard_col2' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|stanford_person|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_person|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_person';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        2 => 'group_s_postcard',
        3 => 'field_s_person_faculty_type',
        5 => 'group_s_person_about',
        6 => 'field_s_person_profile_picture',
        7 => 'field_s_person_student_type',
        9 => 'field_s_person_faculty_title',
        10 => 'field_s_person_education',
        13 => 'group_s_person_since_style',
        14 => 'body',
        16 => 'field_s_person_since',
        18 => 'group_s_postcard_col1',
        19 => 'group_s_postcard_col2',
      ),
      'contact' => array(
        8 => 'field_s_person_phone_display',
        11 => 'field_test_email',
        12 => 'field_s_person_office_location',
        15 => 'field_s_person_info_links',
      ),
      'research_interests' => array(
        4 => 'field_s_person_interests',
      ),
      'office_hours' => array(
        17 => 'field_s_person_office_hours',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_s_postcard' => 'ds_content',
      'field_s_person_faculty_type' => 'ds_content',
      'field_s_person_interests' => 'research_interests',
      'group_s_person_about' => 'ds_content',
      'field_s_person_profile_picture' => 'ds_content',
      'field_s_person_student_type' => 'ds_content',
      'field_s_person_phone_display' => 'contact',
      'field_s_person_faculty_title' => 'ds_content',
      'field_s_person_education' => 'ds_content',
      'field_test_email' => 'contact',
      'field_s_person_office_location' => 'contact',
      'group_s_person_since_style' => 'ds_content',
      'body' => 'ds_content',
      'field_s_person_info_links' => 'contact',
      'field_s_person_since' => 'ds_content',
      'field_s_person_office_hours' => 'office_hours',
      'group_s_postcard_col1' => 'ds_content',
      'group_s_postcard_col2' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|stanford_person|full'] = $ds_layout;

  return $export;
}
