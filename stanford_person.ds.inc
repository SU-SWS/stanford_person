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
      'weight' => '36',
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
        0 => 'title',
        1 => 'group_s_postcard',
        2 => 'field_s_person_department',
        3 => 'group_s_person_about',
        4 => 'field_s_person_profile_picture',
        5 => 'field_s_person_school',
        6 => 'body',
        7 => 'group_s_postcard_col1',
        8 => 'field_s_person_facebook',
        9 => 'group_s_postcard_col2',
        10 => 'field_s_person_twitter',
        11 => 'field_s_person_googleplus',
        12 => 'field_s_person_linkedin',
        13 => 'field_s_person_instagram',
        14 => 'field_s_person_youtube',
        15 => 'field_s_person_vimeo',
        16 => 'field_s_person_pinterest',
        17 => 'field_s_person_tumblr',
        18 => 'field_s_person_flickr',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_s_postcard' => 'ds_content',
      'field_s_person_department' => 'ds_content',
      'group_s_person_about' => 'ds_content',
      'field_s_person_profile_picture' => 'ds_content',
      'field_s_person_school' => 'ds_content',
      'body' => 'ds_content',
      'group_s_postcard_col1' => 'ds_content',
      'field_s_person_facebook' => 'ds_content',
      'group_s_postcard_col2' => 'ds_content',
      'field_s_person_twitter' => 'ds_content',
      'field_s_person_googleplus' => 'ds_content',
      'field_s_person_linkedin' => 'ds_content',
      'field_s_person_instagram' => 'ds_content',
      'field_s_person_youtube' => 'ds_content',
      'field_s_person_vimeo' => 'ds_content',
      'field_s_person_pinterest' => 'ds_content',
      'field_s_person_tumblr' => 'ds_content',
      'field_s_person_flickr' => 'ds_content',
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
        0 => 'group_s_postcard',
        1 => 'group_s_person_about',
        3 => 'field_s_person_facebook',
        5 => 'field_s_person_twitter',
        6 => 'field_s_person_email',
        7 => 'field_s_person_phone_display',
        8 => 'field_s_person_googleplus',
        9 => 'field_s_person_office_location',
        10 => 'field_s_person_linkedin',
        11 => 'field_s_person_instagram',
        12 => 'field_s_person_office_hours',
        13 => 'field_s_person_youtube',
        14 => 'field_s_person_info_links',
        15 => 'field_s_person_vimeo',
        16 => 'field_s_person_tumblr',
        17 => 'field_s_person_pinterest',
        18 => 'field_s_person_flickr',
        19 => 'group_s_postcard_col1',
        20 => 'group_s_postcard_col2',
        21 => 'group_s_image_border_style',
        22 => 'field_s_person_profile_picture',
        23 => 'group_facebook_styles',
        24 => 'title',
        25 => 'group_twitter_styles',
        26 => 'field_s_person_department',
        27 => 'group_googleplus_styles',
        28 => 'field_s_person_title',
        29 => 'group_linkedin_styles',
        30 => 'group_department_school_styles',
        31 => 'field_s_person_school',
        32 => 'group_instagram_styles',
        33 => 'group_social_media_styles',
        34 => 'group_youtube_styles',
        35 => 'group_contact_info_styles',
        36 => 'body',
        37 => 'group_vimeo_styles',
        38 => 'group_tumblr_styles',
        39 => 'group_pinterest_styles',
        40 => 'group_flickr_styles',
      ),
      'contact' => array(
        2 => 'group_morelink_group',
      ),
      'research_interests' => array(
        4 => 'group_s_person_style_interests',
      ),
    ),
    'fields' => array(
      'group_s_postcard' => 'ds_content',
      'group_s_person_about' => 'ds_content',
      'group_morelink_group' => 'contact',
      'field_s_person_facebook' => 'ds_content',
      'group_s_person_style_interests' => 'research_interests',
      'field_s_person_twitter' => 'ds_content',
      'field_s_person_email' => 'ds_content',
      'field_s_person_phone_display' => 'ds_content',
      'field_s_person_googleplus' => 'ds_content',
      'field_s_person_office_location' => 'ds_content',
      'field_s_person_linkedin' => 'ds_content',
      'field_s_person_instagram' => 'ds_content',
      'field_s_person_office_hours' => 'ds_content',
      'field_s_person_youtube' => 'ds_content',
      'field_s_person_info_links' => 'ds_content',
      'field_s_person_vimeo' => 'ds_content',
      'field_s_person_tumblr' => 'ds_content',
      'field_s_person_pinterest' => 'ds_content',
      'field_s_person_flickr' => 'ds_content',
      'group_s_postcard_col1' => 'ds_content',
      'group_s_postcard_col2' => 'ds_content',
      'group_s_image_border_style' => 'ds_content',
      'field_s_person_profile_picture' => 'ds_content',
      'group_facebook_styles' => 'ds_content',
      'title' => 'ds_content',
      'group_twitter_styles' => 'ds_content',
      'field_s_person_department' => 'ds_content',
      'group_googleplus_styles' => 'ds_content',
      'field_s_person_title' => 'ds_content',
      'group_linkedin_styles' => 'ds_content',
      'group_department_school_styles' => 'ds_content',
      'field_s_person_school' => 'ds_content',
      'group_instagram_styles' => 'ds_content',
      'group_social_media_styles' => 'ds_content',
      'group_youtube_styles' => 'ds_content',
      'group_contact_info_styles' => 'ds_content',
      'body' => 'ds_content',
      'group_vimeo_styles' => 'ds_content',
      'group_tumblr_styles' => 'ds_content',
      'group_pinterest_styles' => 'ds_content',
      'group_flickr_styles' => 'ds_content',
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
