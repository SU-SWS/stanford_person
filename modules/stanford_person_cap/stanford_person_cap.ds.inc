<?php
/**
 * @file
 * stanford_person_cap.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function stanford_person_cap_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|stanford_person|stanford_cap';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'stanford_person';
  $ds_fieldsetting->view_mode = 'stanford_cap';
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
  $export['node|stanford_person|stanford_cap'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_person_cap_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_person|stanford_cap';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_person';
  $ds_layout->view_mode = 'stanford_cap';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_s_person_profile_link',
        2 => 'group_s_postcard',
        3 => 'group_s_status_style',
        4 => 'group_s_postcard_col1',
        5 => 'field_s_person_faculty_title',
        6 => 'group_s_postcard_col2',
        7 => 'group_s_research_interests',
        8 => 'group_s_contact',
        9 => 'group_s_about',
        10 => 'field_s_person_profile_picture',
        11 => 'field_s_person_phone_display',
        12 => 'group_s_profile_link_style',
        13 => 'field_s_person_email',
        14 => 'field_s_person_office_location',
        15 => 'field_s_person_office_hours',
        16 => 'field_s_person_faculty_type',
        17 => 'group_s_personal_link_style',
        18 => 'field_s_person_info_links',
        19 => 'group_s_image_border_style',
        20 => 'body',
        21 => 'group_s_interest_style',
        22 => 'field_s_person_interests',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_s_person_profile_link' => 'ds_content',
      'group_s_postcard' => 'ds_content',
      'group_s_status_style' => 'ds_content',
      'group_s_postcard_col1' => 'ds_content',
      'field_s_person_faculty_title' => 'ds_content',
      'group_s_postcard_col2' => 'ds_content',
      'group_s_research_interests' => 'ds_content',
      'group_s_contact' => 'ds_content',
      'group_s_about' => 'ds_content',
      'field_s_person_profile_picture' => 'ds_content',
      'field_s_person_phone_display' => 'ds_content',
      'group_s_profile_link_style' => 'ds_content',
      'field_s_person_email' => 'ds_content',
      'field_s_person_office_location' => 'ds_content',
      'field_s_person_office_hours' => 'ds_content',
      'field_s_person_faculty_type' => 'ds_content',
      'group_s_personal_link_style' => 'ds_content',
      'field_s_person_info_links' => 'ds_content',
      'group_s_image_border_style' => 'ds_content',
      'body' => 'ds_content',
      'group_s_interest_style' => 'ds_content',
      'field_s_person_interests' => 'ds_content',
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
  $export['node|stanford_person|stanford_cap'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function stanford_person_cap_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_cap';
  $ds_view_mode->label = 'CAP';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['stanford_cap'] = $ds_view_mode;

  return $export;
}
