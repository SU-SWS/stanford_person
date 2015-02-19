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
      'weight' => '0',
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
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|stanford_person|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|stanford_person|taxonomy';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'stanford_person';
  $ds_fieldsetting->view_mode = 'taxonomy';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|stanford_person|taxonomy'] = $ds_fieldsetting;

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
        1 => 'title',
        2 => 'field_s_person_profile_picture',
        3 => 'group_s_person_about',
        4 => 'field_s_person_faculty_title',
        5 => 'field_s_person_faculty_type',
        6 => 'field_s_person_student_type',
        7 => 'field_s_person_education',
        8 => 'field_s_person_file',
        9 => 'body',
        10 => 'group_s_postcard_col1',
        11 => 'group_s_postcard_col2',
      ),
    ),
    'fields' => array(
      'group_s_postcard' => 'ds_content',
      'title' => 'ds_content',
      'field_s_person_profile_picture' => 'ds_content',
      'group_s_person_about' => 'ds_content',
      'field_s_person_faculty_title' => 'ds_content',
      'field_s_person_faculty_type' => 'ds_content',
      'field_s_person_student_type' => 'ds_content',
      'field_s_person_education' => 'ds_content',
      'field_s_person_file' => 'ds_content',
      'body' => 'ds_content',
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
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
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
        1 => 'group_s_postcard',
        2 => 'group_s_person_about',
        3 => 'field_s_person_faculty_type',
        4 => 'field_s_person_faculty_title',
        6 => 'field_s_person_education',
        8 => 'field_s_person_file',
        11 => 'body',
        16 => 'group_s_postcard_col1',
        17 => 'group_s_image_border_style',
        18 => 'group_s_postcard_col2',
        19 => 'field_s_person_profile_picture',
      ),
      'office_hours' => array(
        5 => 'field_s_person_office_hours',
      ),
      'contact' => array(
        7 => 'field_s_person_phone_display',
        9 => 'field_s_person_email',
        10 => 'field_s_person_office_location',
        12 => 'group_morelink_group',
        13 => 'field_s_person_info_links',
      ),
      'research_interests' => array(
        14 => 'field_s_person_interests',
        15 => 'group_s_person_style_interests',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_s_postcard' => 'ds_content',
      'group_s_person_about' => 'ds_content',
      'field_s_person_faculty_type' => 'ds_content',
      'field_s_person_faculty_title' => 'ds_content',
      'field_s_person_office_hours' => 'office_hours',
      'field_s_person_education' => 'ds_content',
      'field_s_person_phone_display' => 'contact',
      'field_s_person_file' => 'ds_content',
      'field_s_person_email' => 'contact',
      'field_s_person_office_location' => 'contact',
      'body' => 'ds_content',
      'group_morelink_group' => 'contact',
      'field_s_person_info_links' => 'contact',
      'field_s_person_interests' => 'research_interests',
      'group_s_person_style_interests' => 'research_interests',
      'group_s_postcard_col1' => 'ds_content',
      'group_s_image_border_style' => 'ds_content',
      'group_s_postcard_col2' => 'ds_content',
      'field_s_person_profile_picture' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|stanford_person|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_person|taxonomy';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_person';
  $ds_layout->view_mode = 'taxonomy';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_s_postcard',
        1 => 'group_s_postcard_image',
        2 => 'group_s_postcard_content',
        3 => 'group_s_postcard_col3',
        4 => 'field_s_person_student_type',
        5 => 'title',
        6 => 'field_s_person_profile_picture',
        7 => 'group_s_person_status_style',
        8 => 'field_s_person_interests',
        9 => 'field_s_person_faculty_type',
        10 => 'field_s_person_office_location',
        11 => 'field_s_person_office_hours',
        12 => 'field_s_person_phone_display',
        13 => 'field_s_person_email',
      ),
    ),
    'fields' => array(
      'group_s_postcard' => 'ds_content',
      'group_s_postcard_image' => 'ds_content',
      'group_s_postcard_content' => 'ds_content',
      'group_s_postcard_col3' => 'ds_content',
      'field_s_person_student_type' => 'ds_content',
      'title' => 'ds_content',
      'field_s_person_profile_picture' => 'ds_content',
      'group_s_person_status_style' => 'ds_content',
      'field_s_person_interests' => 'ds_content',
      'field_s_person_faculty_type' => 'ds_content',
      'field_s_person_office_location' => 'ds_content',
      'field_s_person_office_hours' => 'ds_content',
      'field_s_person_phone_display' => 'ds_content',
      'field_s_person_email' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|stanford_person|taxonomy'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function stanford_person_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'taxonomy';
  $ds_view_mode->label = 'Taxonomy';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['taxonomy'] = $ds_view_mode;

  return $export;
}
