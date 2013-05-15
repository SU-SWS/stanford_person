<?php
/**
 * @file
 * stanford_person.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_person_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'stanford_person_faculty';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Person: Faculty';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Faculty';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_s_person_faculty_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_s_person_profile_picture']['id'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['table'] = 'field_data_field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Faculty Status */
  $handler->display->display_options['fields']['field_s_person_faculty_type']['id'] = 'field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['table'] = 'field_data_field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['field'] = 'field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['field_api_classes'] = 0;
  /* Field: Content: Office Location */
  $handler->display->display_options['fields']['field_s_person_office_location']['id'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['table'] = 'field_data_field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['field'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['text'] = '<div><span class="descriptor">Office: </span>[field_s_person_office_location] </div>';
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_office_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_person_office_location']['type'] = 'link_default';
  $handler->display->display_options['fields']['field_s_person_office_location']['group_column'] = '';
  $handler->display->display_options['fields']['field_s_person_office_location']['field_api_classes'] = 0;
  /* Field: Content: Office Hours */
  $handler->display->display_options['fields']['field_s_person_office_hours']['id'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['table'] = 'field_data_field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['field'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['text'] = '<div><span class="descriptor">Office Hours: </span>[field_s_person_office_hours] </div>';
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_s_person_phone_display']['id'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['table'] = 'field_data_field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['field'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['label'] = 'Office Phone';
  $handler->display->display_options['fields']['field_s_person_phone_display']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['text'] = '<div><span class="descriptor">Phone: </span>[field_s_person_phone_display]</div>';
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_s_person_email']['id'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['table'] = 'field_data_field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['field'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['text'] = '<div><span class="descriptor">Email: </span>[field_s_person_email] </div>';
  $handler->display->display_options['fields']['field_s_person_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['field_api_classes'] = 0;
  /* Field: Content: Fields of Interests */
  $handler->display->display_options['fields']['field_s_person_interests']['id'] = 'field_s_person_interests';
  $handler->display->display_options['fields']['field_s_person_interests']['table'] = 'field_data_field_s_person_interests';
  $handler->display->display_options['fields']['field_s_person_interests']['field'] = 'field_s_person_interests';
  $handler->display->display_options['fields']['field_s_person_interests']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_interests']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_interests']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_interests']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_interests']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_s_person_interests']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_person_interests']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['separator'] = ' ';
  $handler->display->display_options['fields']['field_s_person_interests']['field_api_classes'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="edit-link">Edit</div>';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: View Rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View Rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
<div class="postcard-col1">
<div> [field_s_person_profile_picture]</div>
</div>

<div class="postcard-col2">
<div>[title] <span class="descriptor">[field_s_person_faculty_type]</span></div>
[field_s_person_office_location]
[field_s_person_office_hours]
[field_s_person_phone_display]
[field_s_person_email]
[edit_node]
</div>

<div class="postcard-col3">
<div class="descriptor descriptor-btn">[field_s_person_interests]</div>

</div>

</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Faculty Status (field_s_person_faculty_type) */
  $handler->display->display_options['sorts']['field_s_person_faculty_type_tid']['id'] = 'field_s_person_faculty_type_tid';
  $handler->display->display_options['sorts']['field_s_person_faculty_type_tid']['table'] = 'field_data_field_s_person_faculty_type';
  $handler->display->display_options['sorts']['field_s_person_faculty_type_tid']['field'] = 'field_s_person_faculty_type_tid';
  /* Sort criterion: Content: Last Name (field_s_person_last_name) */
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['id'] = 'field_s_person_last_name_value';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['table'] = 'field_data_field_s_person_last_name';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['field'] = 'field_s_person_last_name_value';
  /* Sort criterion: Content: First name (field_s_person_first_name) */
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['id'] = 'field_s_person_first_name_value';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['table'] = 'field_data_field_s_person_first_name';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['field'] = 'field_s_person_first_name_value';
  /* Contextual filter: Content: Faculty Status (field_s_person_faculty_type) */
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['id'] = 'field_s_person_faculty_type_tid';
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['table'] = 'field_data_field_s_person_faculty_type';
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['field'] = 'field_s_person_faculty_type_tid';
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['validate_options']['vocabularies'] = array(
    'stanford_faculty_type' => 'stanford_faculty_type',
  );
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['validate_options']['transform'] = '1';
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_s_person_faculty_type_tid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_person' => 'stanford_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search faculty by name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Faculty Status (field_s_person_faculty_type) */
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['id'] = 'field_s_person_faculty_type_tid';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['table'] = 'field_data_field_s_person_faculty_type';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['field'] = 'field_s_person_faculty_type_tid';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['expose']['operator_id'] = 'field_s_person_faculty_type_tid_op';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['expose']['label'] = 'Filter by faculty status';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['expose']['operator'] = 'field_s_person_faculty_type_tid_op';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['expose']['identifier'] = 'field_s_person_faculty_type_tid';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['vocabulary'] = 'stanford_faculty_type';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['error_message'] = 1;
  /* Filter criterion: Content: Fields of Interests (field_s_person_interests) */
  $handler->display->display_options['filters']['field_s_person_interests_tid']['id'] = 'field_s_person_interests_tid';
  $handler->display->display_options['filters']['field_s_person_interests_tid']['table'] = 'field_data_field_s_person_interests';
  $handler->display->display_options['filters']['field_s_person_interests_tid']['field'] = 'field_s_person_interests_tid';
  $handler->display->display_options['filters']['field_s_person_interests_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_person_interests_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_person_interests_tid']['expose']['operator_id'] = 'field_s_person_interests_tid_op';
  $handler->display->display_options['filters']['field_s_person_interests_tid']['expose']['label'] = 'View by field of interest';
  $handler->display->display_options['filters']['field_s_person_interests_tid']['expose']['operator'] = 'field_s_person_interests_tid_op';
  $handler->display->display_options['filters']['field_s_person_interests_tid']['expose']['identifier'] = 'field_s_person_interests_tid';
  $handler->display->display_options['filters']['field_s_person_interests_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_s_person_interests_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_s_person_interests_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_person_interests_tid']['vocabulary'] = 'stanford_interests';
  $handler->display->display_options['filters']['field_s_person_interests_tid']['error_message'] = 1;
  /* Filter criterion: Content: Type (field_s_person_type) */
  $handler->display->display_options['filters']['field_s_person_type_value']['id'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['table'] = 'field_data_field_s_person_type';
  $handler->display->display_options['filters']['field_s_person_type_value']['field'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['value'] = array(
    'faculty' => 'faculty',
  );

  /* Display: Faculty Page */
  $handler = $view->new_display('page', 'Faculty Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'people/faculty';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Faculty';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['stanford_person_faculty'] = $view;

  $view = new view;
  $view->name = 'stanford_person_manage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Person: Manage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Person';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_s_person_profile_picture' => 'field_s_person_profile_picture',
    'field_s_person_type' => 'field_s_person_type',
    'title' => 'title',
    'field_s_person_first_name' => 'field_s_person_first_name',
    'field_s_person_middle_name' => 'field_s_person_middle_name',
    'field_s_person_last_name' => 'field_s_person_last_name',
    'field_s_person_faculty_type' => 'field_s_person_faculty_type',
    'field_s_person_student_type' => 'field_s_person_student_type',
    'field_s_person_info_link' => 'field_s_person_info_link',
    'field_s_person_email' => 'field_s_person_info_link',
    'field_s_person_phone_display' => 'field_s_person_info_link',
    'field_s_person_fax_display' => 'field_s_person_info_link',
    'field_s_person_office_location' => 'field_s_person_office_location',
    'field_s_person_office_hours' => 'field_s_person_office_location',
    'field_s_person_mail_code' => 'field_s_person_mail_code',
    'field_s_person_mail_address_dspl' => 'field_s_person_mail_code',
    'field_s_person_since' => 'field_s_person_since',
    'field_s_person_interests' => 'field_s_person_interests',
    'field_s_person_faculty_title' => 'field_s_person_faculty_title',
    'field_s_person_education' => 'field_s_person_education',
    'edit_node' => 'nid',
    'nid' => 'nid',
    'view_node' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_profile_picture' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_middle_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_faculty_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_student_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_info_link' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_person_phone_display' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_fax_display' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_person_office_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_office_hours' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_person_mail_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_mail_address_dspl' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_since' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_interests' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_faculty_title' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_education' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'stanford_person::field_s_person_mail_code' => 'stanford_person::field_s_person_mail_code',
          'stanford_person::field_s_person_mail_address_dspl' => 'stanford_person::field_s_person_mail_address_dspl',
          'stanford_person::field_s_person_faculty_type' => 'stanford_person::field_s_person_faculty_type',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_s_person_profile_picture']['id'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['table'] = 'field_data_field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field_api_classes'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_s_person_type']['id'] = 'field_s_person_type';
  $handler->display->display_options['fields']['field_s_person_type']['table'] = 'field_data_field_s_person_type';
  $handler->display->display_options['fields']['field_s_person_type']['field'] = 'field_s_person_type';
  $handler->display->display_options['fields']['field_s_person_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_type']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_s_person_first_name']['id'] = 'field_s_person_first_name';
  $handler->display->display_options['fields']['field_s_person_first_name']['table'] = 'field_data_field_s_person_first_name';
  $handler->display->display_options['fields']['field_s_person_first_name']['field'] = 'field_s_person_first_name';
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_first_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_first_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_first_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_first_name']['field_api_classes'] = 0;
  /* Field: Content: Middle name */
  $handler->display->display_options['fields']['field_s_person_middle_name']['id'] = 'field_s_person_middle_name';
  $handler->display->display_options['fields']['field_s_person_middle_name']['table'] = 'field_data_field_s_person_middle_name';
  $handler->display->display_options['fields']['field_s_person_middle_name']['field'] = 'field_s_person_middle_name';
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_middle_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_middle_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_middle_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_middle_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_middle_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_middle_name']['field_api_classes'] = 0;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_s_person_last_name']['id'] = 'field_s_person_last_name';
  $handler->display->display_options['fields']['field_s_person_last_name']['table'] = 'field_data_field_s_person_last_name';
  $handler->display->display_options['fields']['field_s_person_last_name']['field'] = 'field_s_person_last_name';
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_last_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_last_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_last_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_last_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_last_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_last_name']['field_api_classes'] = 0;
  /* Field: Content: Faculty Status */
  $handler->display->display_options['fields']['field_s_person_faculty_type']['id'] = 'field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['table'] = 'field_data_field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['field'] = 'field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['field_api_classes'] = 0;
  /* Field: Content: Student Type */
  $handler->display->display_options['fields']['field_s_person_student_type']['id'] = 'field_s_person_student_type';
  $handler->display->display_options['fields']['field_s_person_student_type']['table'] = 'field_data_field_s_person_student_type';
  $handler->display->display_options['fields']['field_s_person_student_type']['field'] = 'field_s_person_student_type';
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_student_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_student_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_student_type']['field_api_classes'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_s_person_info_link']['id'] = 'field_s_person_info_link';
  $handler->display->display_options['fields']['field_s_person_info_link']['table'] = 'field_data_field_s_person_info_link';
  $handler->display->display_options['fields']['field_s_person_info_link']['field'] = 'field_s_person_info_link';
  $handler->display->display_options['fields']['field_s_person_info_link']['label'] = 'Contact Info';
  $handler->display->display_options['fields']['field_s_person_info_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_info_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_info_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_info_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_info_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_info_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_info_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_info_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_info_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_info_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_info_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_info_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_info_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_info_link']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_info_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_info_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_info_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_info_link']['hide_alter_empty'] = 1;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_s_person_email']['id'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['table'] = 'field_data_field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['field'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_s_person_phone_display']['id'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['table'] = 'field_data_field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['field'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['label'] = 'Office Phone and Fax';
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['field_api_classes'] = 0;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_s_person_fax_display']['id'] = 'field_s_person_fax_display';
  $handler->display->display_options['fields']['field_s_person_fax_display']['table'] = 'field_data_field_s_person_fax_display';
  $handler->display->display_options['fields']['field_s_person_fax_display']['field'] = 'field_s_person_fax_display';
  $handler->display->display_options['fields']['field_s_person_fax_display']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_fax_display']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_fax_display']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_fax_display']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_fax_display']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_fax_display']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_fax_display']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_fax_display']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_fax_display']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_fax_display']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_fax_display']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_fax_display']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_fax_display']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_fax_display']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_fax_display']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_fax_display']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_fax_display']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_fax_display']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_fax_display']['field_api_classes'] = 0;
  /* Field: Content: Office Location */
  $handler->display->display_options['fields']['field_s_person_office_location']['id'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['table'] = 'field_data_field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['field'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['label'] = 'Office Location and Hours';
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_person_office_location']['type'] = 'link_default';
  $handler->display->display_options['fields']['field_s_person_office_location']['group_column'] = '';
  $handler->display->display_options['fields']['field_s_person_office_location']['field_api_classes'] = 0;
  /* Field: Content: Office Hours */
  $handler->display->display_options['fields']['field_s_person_office_hours']['id'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['table'] = 'field_data_field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['field'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['field_api_classes'] = 0;
  /* Field: Content: Mail Code */
  $handler->display->display_options['fields']['field_s_person_mail_code']['id'] = 'field_s_person_mail_code';
  $handler->display->display_options['fields']['field_s_person_mail_code']['table'] = 'field_data_field_s_person_mail_code';
  $handler->display->display_options['fields']['field_s_person_mail_code']['field'] = 'field_s_person_mail_code';
  $handler->display->display_options['fields']['field_s_person_mail_code']['label'] = 'ID Mail Code and Address';
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_code']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_code']['field_api_classes'] = 0;
  /* Field: Content: Mailing Address */
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['id'] = 'field_s_person_mail_address_dspl';
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['table'] = 'field_data_field_s_person_mail_address_dspl';
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['field'] = 'field_s_person_mail_address_dspl';
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['field_api_classes'] = 0;
  /* Field: Content: At Stanford Since */
  $handler->display->display_options['fields']['field_s_person_since']['id'] = 'field_s_person_since';
  $handler->display->display_options['fields']['field_s_person_since']['table'] = 'field_data_field_s_person_since';
  $handler->display->display_options['fields']['field_s_person_since']['field'] = 'field_s_person_since';
  $handler->display->display_options['fields']['field_s_person_since']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_since']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_since']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_since']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_since']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_since']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_since']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_since']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_since']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_since']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_since']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_since']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_since']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_since']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_since']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_since']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_since']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_since']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_since']['field_api_classes'] = 0;
  /* Field: Content: Fields of Interests */
  $handler->display->display_options['fields']['field_s_person_interests']['id'] = 'field_s_person_interests';
  $handler->display->display_options['fields']['field_s_person_interests']['table'] = 'field_data_field_s_person_interests';
  $handler->display->display_options['fields']['field_s_person_interests']['field'] = 'field_s_person_interests';
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_interests']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_interests']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_interests']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_s_person_interests']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_person_interests']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_s_person_interests']['field_api_classes'] = 0;
  /* Field: Content: Faculty Title and Department */
  $handler->display->display_options['fields']['field_s_person_faculty_title']['id'] = 'field_s_person_faculty_title';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['table'] = 'field_data_field_s_person_faculty_title';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['field'] = 'field_s_person_faculty_title';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['field_api_classes'] = 0;
  /* Field: Content: Degrees / Education */
  $handler->display->display_options['fields']['field_s_person_education']['id'] = 'field_s_person_education';
  $handler->display->display_options['fields']['field_s_person_education']['table'] = 'field_data_field_s_person_education';
  $handler->display->display_options['fields']['field_s_person_education']['field'] = 'field_s_person_education';
  $handler->display->display_options['fields']['field_s_person_education']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_education']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_education']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_education']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_education']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_education']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_s_person_education']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_person_education']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_s_person_education']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'NID, Edit, and View links';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_person' => 'stanford_person',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/manage/stanford_person';
  $export['stanford_person_manage'] = $view;

  $view = new view;
  $view->name = 'stanford_person_people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Person: People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_s_person_faculty_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_s_person_profile_picture']['id'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['table'] = 'field_data_field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Office Location */
  $handler->display->display_options['fields']['field_s_person_office_location']['id'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['table'] = 'field_data_field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['field'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['text'] = '<div><span class="descriptor">Office: </span>[field_s_person_office_location] </div>';
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_office_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_person_office_location']['type'] = 'link_default';
  $handler->display->display_options['fields']['field_s_person_office_location']['group_column'] = '';
  $handler->display->display_options['fields']['field_s_person_office_location']['field_api_classes'] = 0;
  /* Field: Content: Office Hours */
  $handler->display->display_options['fields']['field_s_person_office_hours']['id'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['table'] = 'field_data_field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['field'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['text'] = '<div><span class="descriptor">Office Hours: </span>[field_s_person_office_hours] </div>';
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_s_person_phone_display']['id'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['table'] = 'field_data_field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['field'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['label'] = 'Office Phone';
  $handler->display->display_options['fields']['field_s_person_phone_display']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['text'] = '<div><span class="descriptor">Phone: </span>[field_s_person_phone_display]</div>';
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_s_person_email']['id'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['table'] = 'field_data_field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['field'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['text'] = '<div><span class="descriptor">Email: </span>[field_s_person_email] </div>';
  $handler->display->display_options['fields']['field_s_person_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['field_api_classes'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="edit-link">Edit</div>';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: View Rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View Rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
<div class="postcard-col1">
<div> [field_s_person_profile_picture]</div>
</div>

<div class="postcard-col2">
<div>[title]</div>
[field_s_person_office_location]
[field_s_person_office_hours]
[field_s_person_phone_display]
[field_s_person_email]
[edit_node]
</div>



</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Mailing Address */
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['id'] = 'field_s_person_mail_address_dspl';
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['table'] = 'field_data_field_s_person_mail_address_dspl';
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['field'] = 'field_s_person_mail_address_dspl';
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['field_api_classes'] = 0;
  /* Field: Content: Mail Code */
  $handler->display->display_options['fields']['field_s_person_mail_code']['id'] = 'field_s_person_mail_code';
  $handler->display->display_options['fields']['field_s_person_mail_code']['table'] = 'field_data_field_s_person_mail_code';
  $handler->display->display_options['fields']['field_s_person_mail_code']['field'] = 'field_s_person_mail_code';
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_code']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_mail_code']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_mail_code']['field_api_classes'] = 0;
  /* Sort criterion: Content: Last Name (field_s_person_last_name) */
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['id'] = 'field_s_person_last_name_value';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['table'] = 'field_data_field_s_person_last_name';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['field'] = 'field_s_person_last_name_value';
  /* Sort criterion: Content: First name (field_s_person_first_name) */
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['id'] = 'field_s_person_first_name_value';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['table'] = 'field_data_field_s_person_first_name';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['field'] = 'field_s_person_first_name_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_person' => 'stanford_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search faculty by name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;

  /* Display: People Page */
  $handler = $view->new_display('page', 'People Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'stanford/people';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['stanford_person_people'] = $view;

  $view = new view;
  $view->name = 'stanford_person_staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Person: Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Staff';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_s_person_student_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_s_person_profile_picture']['id'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['table'] = 'field_data_field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Office Location */
  $handler->display->display_options['fields']['field_s_person_office_location']['id'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['table'] = 'field_data_field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['field'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['text'] = '<div><span class="descriptor">Office: </span>[field_s_person_office_location] </div>';
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_office_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_person_office_location']['type'] = 'link_default';
  $handler->display->display_options['fields']['field_s_person_office_location']['group_column'] = '';
  $handler->display->display_options['fields']['field_s_person_office_location']['field_api_classes'] = 0;
  /* Field: Content: Office Hours */
  $handler->display->display_options['fields']['field_s_person_office_hours']['id'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['table'] = 'field_data_field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['field'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['text'] = '<div><span class="descriptor">Office Hours: </span>[field_s_person_office_hours] </div>';
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_s_person_phone_display']['id'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['table'] = 'field_data_field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['field'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['label'] = 'Office Phone';
  $handler->display->display_options['fields']['field_s_person_phone_display']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['text'] = '<div><span class="descriptor">Phone: </span>[field_s_person_phone_display]</div>';
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_s_person_email']['id'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['table'] = 'field_data_field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['field'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['text'] = '<div><span class="descriptor">Email: </span>[field_s_person_email] </div>';
  $handler->display->display_options['fields']['field_s_person_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['field_api_classes'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="edit-link">Edit</div>';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Global: View Rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View Rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
<div class="postcard-col1">
<div> [field_s_person_profile_picture]</div>

</div>

<div class="postcard-col2">
<div>[title] </div>
[field_s_person_office_location]
[field_s_person_office_hours]
[field_s_person_phone_display]
[field_s_person_email]
[edit_node]
</div>

</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Last Name (field_s_person_last_name) */
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['id'] = 'field_s_person_last_name_value';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['table'] = 'field_data_field_s_person_last_name';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['field'] = 'field_s_person_last_name_value';
  /* Sort criterion: Content: First name (field_s_person_first_name) */
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['id'] = 'field_s_person_first_name_value';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['table'] = 'field_data_field_s_person_first_name';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['field'] = 'field_s_person_first_name_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_person' => 'stanford_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search staff by name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type (field_s_person_type) */
  $handler->display->display_options['filters']['field_s_person_type_value']['id'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['table'] = 'field_data_field_s_person_type';
  $handler->display->display_options['filters']['field_s_person_type_value']['field'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['value'] = array(
    'staff' => 'staff',
  );

  /* Display: Staff Page */
  $handler = $view->new_display('page', 'Staff Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'people/staff';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Staff';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['stanford_person_staff'] = $view;

  $view = new view;
  $view->name = 'stanford_person_student';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Person: Student';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Students';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Student Type */
  $handler->display->display_options['fields']['field_s_person_student_type']['id'] = 'field_s_person_student_type';
  $handler->display->display_options['fields']['field_s_person_student_type']['table'] = 'field_data_field_s_person_student_type';
  $handler->display->display_options['fields']['field_s_person_student_type']['field'] = 'field_s_person_student_type';
  $handler->display->display_options['fields']['field_s_person_student_type']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_student_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_student_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_student_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_student_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_student_type']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_s_person_profile_picture']['id'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['table'] = 'field_data_field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Office Location */
  $handler->display->display_options['fields']['field_s_person_office_location']['id'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['table'] = 'field_data_field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['field'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['text'] = '<div><span class="descriptor">Office: </span>[field_s_person_office_location] </div>';
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_office_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_location']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_person_office_location']['type'] = 'link_default';
  $handler->display->display_options['fields']['field_s_person_office_location']['group_column'] = '';
  $handler->display->display_options['fields']['field_s_person_office_location']['field_api_classes'] = 0;
  /* Field: Content: Office Hours */
  $handler->display->display_options['fields']['field_s_person_office_hours']['id'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['table'] = 'field_data_field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['field'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['text'] = '<div><span class="descriptor">Office Hours: </span>[field_s_person_office_hours] </div>';
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_office_hours']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_office_hours']['field_api_classes'] = 0;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_s_person_phone_display']['id'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['table'] = 'field_data_field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['field'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['label'] = 'Office Phone';
  $handler->display->display_options['fields']['field_s_person_phone_display']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['text'] = '<div><span class="descriptor">Phone: </span>[field_s_person_phone_display]</div>';
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_phone_display']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_phone_display']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_s_person_email']['id'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['table'] = 'field_data_field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['field'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['text'] = '<div><span class="descriptor">Email: </span>[field_s_person_email] </div>';
  $handler->display->display_options['fields']['field_s_person_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_person_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_person_email']['field_api_classes'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="edit-link">Edit</div>';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Global: View Rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View Rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
<div class="postcard-col1">
<div> [field_s_person_profile_picture]</div>

</div>

<div class="postcard-col2">
<div>[title] </div>
[field_s_person_office_location]
[field_s_person_office_hours]
[field_s_person_phone_display]
[field_s_person_email]
[edit_node]
</div>

</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Student Type (field_s_person_student_type) */
  $handler->display->display_options['sorts']['field_s_person_student_type_tid']['id'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['sorts']['field_s_person_student_type_tid']['table'] = 'field_data_field_s_person_student_type';
  $handler->display->display_options['sorts']['field_s_person_student_type_tid']['field'] = 'field_s_person_student_type_tid';
  /* Sort criterion: Content: Last Name (field_s_person_last_name) */
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['id'] = 'field_s_person_last_name_value';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['table'] = 'field_data_field_s_person_last_name';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['field'] = 'field_s_person_last_name_value';
  /* Sort criterion: Content: First name (field_s_person_first_name) */
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['id'] = 'field_s_person_first_name_value';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['table'] = 'field_data_field_s_person_first_name';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['field'] = 'field_s_person_first_name_value';
  /* Contextual filter: Content: Student Type (field_s_person_student_type) */
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['id'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['table'] = 'field_data_field_s_person_student_type';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['field'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['title'] = '%1';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate_options']['vocabularies'] = array(
    'stanford_student_type' => 'stanford_student_type',
  );
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate_options']['transform'] = '1';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_person' => 'stanford_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search students by name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type (field_s_person_type) */
  $handler->display->display_options['filters']['field_s_person_type_value']['id'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['table'] = 'field_data_field_s_person_type';
  $handler->display->display_options['filters']['field_s_person_type_value']['field'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['value'] = array(
    'student' => 'student',
  );

  /* Display: All Students Page */
  $handler = $view->new_display('page', 'All Students Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'people/students';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Students';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Student Block */
  $handler = $view->new_display('block', 'Student Block', 'block_1');
  $export['stanford_person_student'] = $view;

  return $export;
}
