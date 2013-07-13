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

  $view = new view();
  $view->name = 'stanford_person_create_new';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Person: Create New';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create stanford_person content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Create New Person';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/add/stanford-person';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['stanford_person_create_new'] = $view;

  $view = new view();
  $view->name = 'stanford_person_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Person: Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Directory';
  $handler->display->display_options['use_more_always'] = FALSE;
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
    'title' => 'title',
    'timestamp' => 'title',
    'field_s_person_first_name' => 'field_s_person_first_name',
    'field_s_person_middle_name' => 'field_s_person_middle_name',
    'field_s_person_last_name' => 'field_s_person_last_name',
    'status' => 'status',
    'field_s_person_type' => 'field_s_person_type',
    'field_s_person_faculty_type' => 'field_s_person_faculty_type',
    'field_s_person_student_type' => 'field_s_person_student_type',
    'field_s_person_office_location' => 'field_s_person_office_location',
    'field_s_person_mail_code' => 'field_s_person_mail_code',
    'nid' => 'nid',
    'edit_node' => 'nid',
    'view_node' => 'nid',
    'delete_node' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = 'field_s_person_last_name';
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
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
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
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_person_type' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_faculty_type' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_student_type' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_office_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_mail_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_s_person_profile_picture']['id'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['table'] = 'field_data_field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['settings'] = array(
    'image_style' => 'thmb-profile',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Display Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_s_person_first_name']['id'] = 'field_s_person_first_name';
  $handler->display->display_options['fields']['field_s_person_first_name']['table'] = 'field_data_field_s_person_first_name';
  $handler->display->display_options['fields']['field_s_person_first_name']['field'] = 'field_s_person_first_name';
  /* Field: Content: Middle name */
  $handler->display->display_options['fields']['field_s_person_middle_name']['id'] = 'field_s_person_middle_name';
  $handler->display->display_options['fields']['field_s_person_middle_name']['table'] = 'field_data_field_s_person_middle_name';
  $handler->display->display_options['fields']['field_s_person_middle_name']['field'] = 'field_s_person_middle_name';
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_s_person_last_name']['id'] = 'field_s_person_last_name';
  $handler->display->display_options['fields']['field_s_person_last_name']['table'] = 'field_data_field_s_person_last_name';
  $handler->display->display_options['fields']['field_s_person_last_name']['field'] = 'field_s_person_last_name';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_s_person_type']['id'] = 'field_s_person_type';
  $handler->display->display_options['fields']['field_s_person_type']['table'] = 'field_data_field_s_person_type';
  $handler->display->display_options['fields']['field_s_person_type']['field'] = 'field_s_person_type';
  /* Field: Content: Faculty Status */
  $handler->display->display_options['fields']['field_s_person_faculty_type']['id'] = 'field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['table'] = 'field_data_field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['field'] = 'field_s_person_faculty_type';
  /* Field: Content: Student Type */
  $handler->display->display_options['fields']['field_s_person_student_type']['id'] = 'field_s_person_student_type';
  $handler->display->display_options['fields']['field_s_person_student_type']['table'] = 'field_data_field_s_person_student_type';
  $handler->display->display_options['fields']['field_s_person_student_type']['field'] = 'field_s_person_student_type';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'NID, Edit, and View links';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Content: First name (field_s_person_first_name) */
  $handler->display->display_options['filters']['field_s_person_first_name_value']['id'] = 'field_s_person_first_name_value';
  $handler->display->display_options['filters']['field_s_person_first_name_value']['table'] = 'field_data_field_s_person_first_name';
  $handler->display->display_options['filters']['field_s_person_first_name_value']['field'] = 'field_s_person_first_name_value';
  $handler->display->display_options['filters']['field_s_person_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s_person_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s_person_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_person_first_name_value']['expose']['operator_id'] = 'field_s_person_first_name_value_op';
  $handler->display->display_options['filters']['field_s_person_first_name_value']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['field_s_person_first_name_value']['expose']['operator'] = 'field_s_person_first_name_value_op';
  $handler->display->display_options['filters']['field_s_person_first_name_value']['expose']['identifier'] = 'field_s_person_first_name_value';
  /* Filter criterion: Content: Last Name (field_s_person_last_name) */
  $handler->display->display_options['filters']['field_s_person_last_name_value']['id'] = 'field_s_person_last_name_value';
  $handler->display->display_options['filters']['field_s_person_last_name_value']['table'] = 'field_data_field_s_person_last_name';
  $handler->display->display_options['filters']['field_s_person_last_name_value']['field'] = 'field_s_person_last_name_value';
  $handler->display->display_options['filters']['field_s_person_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s_person_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s_person_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_person_last_name_value']['expose']['operator_id'] = 'field_s_person_last_name_value_op';
  $handler->display->display_options['filters']['field_s_person_last_name_value']['expose']['label'] = 'Last Name ';
  $handler->display->display_options['filters']['field_s_person_last_name_value']['expose']['operator'] = 'field_s_person_last_name_value_op';
  $handler->display->display_options['filters']['field_s_person_last_name_value']['expose']['identifier'] = 'field_s_person_last_name_value';
  /* Filter criterion: Content: Type (field_s_person_type) */
  $handler->display->display_options['filters']['field_s_person_type_value']['id'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['table'] = 'field_data_field_s_person_type';
  $handler->display->display_options['filters']['field_s_person_type_value']['field'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['value'] = array(
    'all' => 'all',
    'student' => 'student',
    'faculty' => 'faculty',
    'staff' => 'staff',
  );
  $handler->display->display_options['filters']['field_s_person_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s_person_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_person_type_value']['expose']['operator_id'] = 'field_s_person_type_value_op';
  $handler->display->display_options['filters']['field_s_person_type_value']['expose']['label'] = 'Type of Person';
  $handler->display->display_options['filters']['field_s_person_type_value']['expose']['operator'] = 'field_s_person_type_value_op';
  $handler->display->display_options['filters']['field_s_person_type_value']['expose']['identifier'] = 'field_s_person_type_value';
  /* Filter criterion: Content: Student Type (field_s_person_student_type) */
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['id'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['table'] = 'field_data_field_s_person_student_type';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['field'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['expose']['operator_id'] = 'field_s_person_student_type_tid_op';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['expose']['label'] = 'Student Type';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['expose']['operator'] = 'field_s_person_student_type_tid_op';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['expose']['identifier'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['vocabulary'] = 'stanford_student_type';
  /* Filter criterion: Content: Faculty Status (field_s_person_faculty_type) */
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['id'] = 'field_s_person_faculty_type_tid';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['table'] = 'field_data_field_s_person_faculty_type';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['field'] = 'field_s_person_faculty_type_tid';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['expose']['operator_id'] = 'field_s_person_faculty_type_tid_op';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['expose']['label'] = 'Faculty Status';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['expose']['operator'] = 'field_s_person_faculty_type_tid_op';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['expose']['identifier'] = 'field_s_person_faculty_type_tid';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['vocabulary'] = 'stanford_faculty_type';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'person/directory';
  $export['stanford_person_directory'] = $view;

  $view = new view();
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
  $handler->display->display_options['css_class'] = 'views-row-lines view-stanford-person';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Faculty Type term';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'stanford_faculty_type' => 'stanford_faculty_type',
    's_destination' => 0,
    'english_degree_requirements' => 0,
    'news_categories' => 0,
    'stanford_other_specializations' => 0,
    'publication_type' => 0,
    'stanford_slide_category' => 0,
    'stanford_event_audience' => 0,
    'stanford_event_categories' => 0,
    'stanford_field_of_study' => 0,
    'stanford_interests' => 0,
    'stanford_student_type' => 0,
    'tags' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_s_person_profile_picture']['id'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['table'] = 'field_data_field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['settings'] = array(
    'image_style' => 'sm-square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Faculty Status */
  $handler->display->display_options['fields']['field_s_person_faculty_type']['id'] = 'field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['table'] = 'field_data_field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['field'] = 'field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_faculty_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Office */
  $handler->display->display_options['fields']['field_s_person_office_location']['id'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['table'] = 'field_data_field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['field'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['text'] = '<div><span class="descriptor">Office: </span>[field_s_person_office_location] </div>';
  $handler->display->display_options['fields']['field_s_person_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_office_location']['group_column'] = '';
  /* Field: Content: Office Hours */
  $handler->display->display_options['fields']['field_s_person_office_hours']['id'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['table'] = 'field_data_field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['field'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['text'] = '<div><span class="descriptor">Office Hours: </span>[field_s_person_office_hours] </div>';
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_s_person_phone_display']['id'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['table'] = 'field_data_field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['field'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['label'] = 'Office Phone';
  $handler->display->display_options['fields']['field_s_person_phone_display']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['text'] = '<div><span class="descriptor">Phone: </span>[field_s_person_phone_display]</div>';
  /* Field: Content: Fields of Interest */
  $handler->display->display_options['fields']['field_s_person_interests']['id'] = 'field_s_person_interests';
  $handler->display->display_options['fields']['field_s_person_interests']['table'] = 'field_data_field_s_person_interests';
  $handler->display->display_options['fields']['field_s_person_interests']['field'] = 'field_s_person_interests';
  $handler->display->display_options['fields']['field_s_person_interests']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_interests']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_interests']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_interests']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_person_interests']['separator'] = ' ';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_s_person_email']['id'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['table'] = 'field_data_field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['field'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['text'] = '<div><span class="descriptor">Email: </span>[field_s_person_email]</div>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="edit-link">Edit</div>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
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
  <h3>[title]</h3>
 <div class="faculty-type"> [field_s_person_faculty_type]</div>
  [field_s_person_office_location]
  [field_s_person_office_hours]
  [field_s_person_phone_display]
  [field_s_person_email]
  <span class="edit-link">[edit_node]</span>
</div>

<div class="postcard-col3">
<div class="descriptor descriptor-btn">[field_s_person_interests]</div>

</div>

</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Last Name (field_s_person_last_name) */
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['id'] = 'field_s_person_last_name_value';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['table'] = 'field_data_field_s_person_last_name';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['field'] = 'field_s_person_last_name_value';
  /* Sort criterion: Content: First name (field_s_person_first_name) */
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['id'] = 'field_s_person_first_name_value';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['table'] = 'field_data_field_s_person_first_name';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['field'] = 'field_s_person_first_name_value';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['code'] = '$view = views_get_current_view();
$term = \'all\';
$title = \'Faculty\';

if (isset ($view->exposed_input[\'field_s_person_interests_tid_1\'])) {
  $tid = $view->exposed_input[\'field_s_person_interests_tid_1\'];
  if (is_numeric($tid)){
      $term = $tid;
      $term_obj = taxonomy_term_load($tid);
      $title = $term_obj->name;
  }
}

$argument->validated_title = $title;
return($term);
';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
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
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['vocabulary'] = 'stanford_faculty_type';
  /* Filter criterion: Content: Fields of Interest (field_s_person_interests) */
  $handler->display->display_options['filters']['field_s_person_interests_tid_1']['id'] = 'field_s_person_interests_tid_1';
  $handler->display->display_options['filters']['field_s_person_interests_tid_1']['table'] = 'field_data_field_s_person_interests';
  $handler->display->display_options['filters']['field_s_person_interests_tid_1']['field'] = 'field_s_person_interests_tid';
  $handler->display->display_options['filters']['field_s_person_interests_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_s_person_interests_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_person_interests_tid_1']['expose']['operator_id'] = 'field_s_person_interests_tid_1_op';
  $handler->display->display_options['filters']['field_s_person_interests_tid_1']['expose']['label'] = 'View by field of interest';
  $handler->display->display_options['filters']['field_s_person_interests_tid_1']['expose']['operator'] = 'field_s_person_interests_tid_1_op';
  $handler->display->display_options['filters']['field_s_person_interests_tid_1']['expose']['identifier'] = 'field_s_person_interests_tid_1';
  $handler->display->display_options['filters']['field_s_person_interests_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    13 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_s_person_interests_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_person_interests_tid_1']['vocabulary'] = 'stanford_interests';
  $handler->display->display_options['filters']['field_s_person_interests_tid_1']['hierarchy'] = 1;
  /* Filter criterion: Content: Type (field_s_person_type) */
  $handler->display->display_options['filters']['field_s_person_type_value']['id'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['table'] = 'field_data_field_s_person_type';
  $handler->display->display_options['filters']['field_s_person_type_value']['field'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['value'] = array(
    'faculty' => 'faculty',
  );
  $handler->display->display_options['filters']['field_s_person_type_value']['group'] = 1;

  /* Display: Faculty Page */
  $handler = $view->new_display('page', 'Faculty Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'people/faculty';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Faculty';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Faculty Block - ajax */
  $handler = $view->new_display('block', 'Faculty Block - ajax', 'block_faculty_ajax');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;

  /* Display: Faculty Block */
  $handler = $view->new_display('block', 'Faculty Block', 'block_faculty');
  $export['stanford_person_faculty'] = $view;

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_s_person_profile_picture' => 'field_s_person_profile_picture',
    'title' => 'title',
    'timestamp' => 'title',
    'status' => 'status',
    'changed' => 'changed',
    'field_s_person_last_name' => 'field_s_person_last_name',
    'field_s_person_type' => 'field_s_person_type',
    'field_s_person_faculty_type' => 'field_s_person_faculty_type',
    'field_s_person_student_type' => 'field_s_person_student_type',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'view_node' => 'edit_node',
    'delete_node' => 'edit_node',
    'field_s_person_first_name' => 'field_s_person_first_name',
  );
  $handler->display->display_options['style_options']['default'] = 'field_s_person_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
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
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_person_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_type' => array(
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
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_person_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="https://sites.stanford.edu/english/admin/manage">Back to Manage All Content</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'content_editor_text_format';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Row';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
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
      'override_label' => 1,
      'label' => 'Delete',
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
      'override_label' => 1,
      'label' => 'Modify',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'stanford_person::field_s_person_faculty_type' => 'stanford_person::field_s_person_faculty_type',
          'stanford_person::field_s_person_student_type' => 'stanford_person::field_s_person_student_type',
          'stanford_person::field_s_person_type' => 'stanford_person::field_s_person_type',
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
      'override_label' => 1,
      'label' => 'Publish',
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
      'override_label' => 1,
      'label' => 'Unpublish',
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
  $handler->display->display_options['fields']['field_s_person_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['settings'] = array(
    'image_style' => 'thmb-square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Display Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_s_person_last_name']['id'] = 'field_s_person_last_name';
  $handler->display->display_options['fields']['field_s_person_last_name']['table'] = 'field_data_field_s_person_last_name';
  $handler->display->display_options['fields']['field_s_person_last_name']['field'] = 'field_s_person_last_name';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_s_person_type']['id'] = 'field_s_person_type';
  $handler->display->display_options['fields']['field_s_person_type']['table'] = 'field_data_field_s_person_type';
  $handler->display->display_options['fields']['field_s_person_type']['field'] = 'field_s_person_type';
  /* Field: Content: Faculty Status */
  $handler->display->display_options['fields']['field_s_person_faculty_type']['id'] = 'field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['table'] = 'field_data_field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['field'] = 'field_s_person_faculty_type';
  /* Field: Content: Student Type */
  $handler->display->display_options['fields']['field_s_person_student_type']['id'] = 'field_s_person_student_type';
  $handler->display->display_options['fields']['field_s_person_student_type']['table'] = 'field_data_field_s_person_student_type';
  $handler->display->display_options['fields']['field_s_person_student_type']['field'] = 'field_s_person_student_type';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node ID';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_s_person_first_name']['id'] = 'field_s_person_first_name';
  $handler->display->display_options['fields']['field_s_person_first_name']['table'] = 'field_data_field_s_person_first_name';
  $handler->display->display_options['fields']['field_s_person_first_name']['field'] = 'field_s_person_first_name';
  $handler->display->display_options['fields']['field_s_person_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_first_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: First name (field_s_person_first_name) */
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['id'] = 'field_s_person_first_name_value';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['table'] = 'field_data_field_s_person_first_name';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['field'] = 'field_s_person_first_name_value';
  /* Sort criterion: Content: Last Name (field_s_person_last_name) */
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['id'] = 'field_s_person_last_name_value';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['table'] = 'field_data_field_s_person_last_name';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['field'] = 'field_s_person_last_name_value';
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
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Display Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    13 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    15 => 0,
    17 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    13 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    15 => 0,
    17 => 0,
  );
  /* Filter criterion: Content: Type (field_s_person_type) */
  $handler->display->display_options['filters']['field_s_person_type_value']['id'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['table'] = 'field_data_field_s_person_type';
  $handler->display->display_options['filters']['field_s_person_type_value']['field'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s_person_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_person_type_value']['expose']['operator_id'] = 'field_s_person_type_value_op';
  $handler->display->display_options['filters']['field_s_person_type_value']['expose']['label'] = 'Person Type';
  $handler->display->display_options['filters']['field_s_person_type_value']['expose']['operator'] = 'field_s_person_type_value_op';
  $handler->display->display_options['filters']['field_s_person_type_value']['expose']['identifier'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    13 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    15 => 0,
    17 => 0,
  );
  /* Filter criterion: Content: Faculty Status (field_s_person_faculty_type) */
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['id'] = 'field_s_person_faculty_type_tid';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['table'] = 'field_data_field_s_person_faculty_type';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['field'] = 'field_s_person_faculty_type_tid';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['expose']['operator_id'] = 'field_s_person_faculty_type_tid_op';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['expose']['label'] = 'Faculty Status';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['expose']['operator'] = 'field_s_person_faculty_type_tid_op';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['expose']['identifier'] = 'field_s_person_faculty_type_tid';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_person_faculty_type_tid']['vocabulary'] = 'stanford_faculty_type';
  /* Filter criterion: Content: Student Type (field_s_person_student_type) */
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['id'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['table'] = 'field_data_field_s_person_student_type';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['field'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['expose']['operator_id'] = 'field_s_person_student_type_tid_op';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['expose']['label'] = 'Student Type';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['expose']['operator'] = 'field_s_person_student_type_tid_op';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['expose']['identifier'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_person_student_type_tid']['vocabulary'] = 'stanford_student_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/manage/people';
  $export['stanford_person_manage'] = $view;

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_s_person_profile_picture']['id'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['table'] = 'field_data_field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['settings'] = array(
    'image_style' => 'thmb-square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Office */
  $handler->display->display_options['fields']['field_s_person_office_location']['id'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['table'] = 'field_data_field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['field'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['text'] = '<div><span class="descriptor">Office: </span>[field_s_person_office_location] </div>';
  $handler->display->display_options['fields']['field_s_person_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_office_location']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_person_office_location']['type'] = 'link_default';
  $handler->display->display_options['fields']['field_s_person_office_location']['group_column'] = '';
  /* Field: Content: Office Hours */
  $handler->display->display_options['fields']['field_s_person_office_hours']['id'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['table'] = 'field_data_field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['field'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['text'] = '<div><span class="descriptor">Office Hours: </span>[field_s_person_office_hours] </div>';
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_s_person_phone_display']['id'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['table'] = 'field_data_field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['field'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['label'] = 'Office Phone';
  $handler->display->display_options['fields']['field_s_person_phone_display']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['text'] = '<div><span class="descriptor">Phone: </span>[field_s_person_phone_display]</div>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="edit-link">Edit</div>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
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
[edit_node]
</div>



</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Mailing Address */
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['id'] = 'field_s_person_mail_address_dspl';
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['table'] = 'field_data_field_s_person_mail_address_dspl';
  $handler->display->display_options['fields']['field_s_person_mail_address_dspl']['field'] = 'field_s_person_mail_address_dspl';
  /* Field: Content: Mail Code */
  $handler->display->display_options['fields']['field_s_person_mail_code']['id'] = 'field_s_person_mail_code';
  $handler->display->display_options['fields']['field_s_person_mail_code']['table'] = 'field_data_field_s_person_mail_code';
  $handler->display->display_options['fields']['field_s_person_mail_code']['field'] = 'field_s_person_mail_code';
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

  /* Display: People Page */
  $handler = $view->new_display('page', 'People Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'stanford/people';
  $handler->display->display_options['menu']['title'] = 'People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['stanford_person_people'] = $view;

  $view = new view();
  $view->name = 'stanford_person_pub_author';
  $view->description = 'About the Author block displayed on the publication node';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Person: Pub Author';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About the Author';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_pub_author_node']['id'] = 'reverse_field_s_pub_author_node';
  $handler->display->display_options['relationships']['reverse_field_s_pub_author_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_pub_author_node']['field'] = 'reverse_field_s_pub_author_node';
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_s_person_profile_picture']['id'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['table'] = 'field_data_field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['settings'] = array(
    'image_style' => 'sm-square',
    'image_link' => '',
  );
  /* Field: Content: Author/Editor */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['relationship'] = 'reverse_field_s_pub_author_node';
  $handler->display->display_options['fields']['field_s_pub_author']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_pub_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_s_pub_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '700';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'more-link';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'More about this author';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left-wrap">
<div class="postcard-image">
     <div>[field_s_person_profile_picture]</div>
</div>
<div class="postcard-content">
    <h3>[field_s_pub_author]</h3>
     <div>[body]</div>
<div class="more-link">[view_node]</div>
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_s_pub_author_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Publication Author';
  $export['stanford_person_pub_author'] = $view;

  $view = new view();
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
  $handler->display->display_options['title'] = 'Administrators';
  $handler->display->display_options['css_class'] = 'views-row-lines view-stanford-person';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_s_person_profile_picture']['id'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['table'] = 'field_data_field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['settings'] = array(
    'image_style' => 'thmb-square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Office */
  $handler->display->display_options['fields']['field_s_person_office_location']['id'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['table'] = 'field_data_field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['field'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['text'] = '<div><span class="descriptor">Office: </span>[field_s_person_office_location] </div>';
  $handler->display->display_options['fields']['field_s_person_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_office_location']['group_column'] = '';
  /* Field: Content: Office Hours */
  $handler->display->display_options['fields']['field_s_person_office_hours']['id'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['table'] = 'field_data_field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['field'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['text'] = '<div><span class="descriptor">Office Hours: </span>[field_s_person_office_hours] </div>';
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_s_person_phone_display']['id'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['table'] = 'field_data_field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['field'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['label'] = 'Office Phone';
  $handler->display->display_options['fields']['field_s_person_phone_display']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['text'] = '<div><span class="descriptor">Phone: </span>[field_s_person_phone_display]</div>';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_s_person_email']['id'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['table'] = 'field_data_field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['field'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['text'] = '<div><span class="descriptor">Email: </span>[field_s_person_email]</div>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="edit-link">Edit</div>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
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
<h3>[title] </h3>
[field_s_person_office_location]
[field_s_person_office_hours]
[field_s_person_phone_display]
[field_s_person_email]
<span class="edit-link">[edit_node]</span>
</div>

</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search administrators by name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    13 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    15 => 0,
    17 => 0,
    19 => 0,
  );
  /* Filter criterion: Content: Type (field_s_person_type) */
  $handler->display->display_options['filters']['field_s_person_type_value']['id'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['table'] = 'field_data_field_s_person_type';
  $handler->display->display_options['filters']['field_s_person_type_value']['field'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['value'] = array(
    'administrator' => 'administrator',
  );

  /* Display: Administrator Page */
  $handler = $view->new_display('page', 'Administrator Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_s_person_profile_picture']['id'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['table'] = 'field_data_field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['settings'] = array(
    'image_style' => 'sm-square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Title and Department */
  $handler->display->display_options['fields']['field_s_person_faculty_title']['id'] = 'field_s_person_faculty_title';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['table'] = 'field_data_field_s_person_faculty_title';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['field'] = 'field_s_person_faculty_title';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_faculty_title']['delta_offset'] = '0';
  /* Field: Content: Office */
  $handler->display->display_options['fields']['field_s_person_office_location']['id'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['table'] = 'field_data_field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['field'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_location']['alter']['text'] = '<div><span class="descriptor">Office: </span>[field_s_person_office_location] </div>';
  $handler->display->display_options['fields']['field_s_person_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_office_location']['group_column'] = '';
  /* Field: Content: Office Hours */
  $handler->display->display_options['fields']['field_s_person_office_hours']['id'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['table'] = 'field_data_field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['field'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_office_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_office_hours']['alter']['text'] = '<div><span class="descriptor">Office Hours: </span>[field_s_person_office_hours] </div>';
  $handler->display->display_options['fields']['field_s_person_office_hours']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_s_person_phone_display']['id'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['table'] = 'field_data_field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['field'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['label'] = 'Office Phone';
  $handler->display->display_options['fields']['field_s_person_phone_display']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_phone_display']['alter']['text'] = '<div><span class="descriptor">Phone: </span>[field_s_person_phone_display]</div>';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_s_person_email']['id'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['table'] = 'field_data_field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['field'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_email']['alter']['text'] = '<div><span class="descriptor">Email: </span>[field_s_person_email]</div>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="edit-link">Edit</div>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
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
<h3>[title] </h3>
[field_s_person_faculty_title]
[field_s_person_office_location]
[field_s_person_office_hours]
[field_s_person_phone_display]
[field_s_person_email]
<span class="edit-link">[edit_node]</span>
</div>

</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'people/administrators';
  $handler->display->display_options['menu']['title'] = 'Staff';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Administrator Block - ajax */
  $handler = $view->new_display('block', 'Administrator Block - ajax', 'block_staff');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $export['stanford_person_staff'] = $view;

  $view = new view();
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
  $handler->display->display_options['css_class'] = 'views-row-lines view-stanford-person';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_cohort',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Dissertation Title */
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['id'] = 'field_s_person_dissertatn_title';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['table'] = 'field_data_field_s_person_dissertatn_title';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['field'] = 'field_s_person_dissertatn_title';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['label'] = 'Dissertation';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['element_label_class'] = 'descriptor ';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
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
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['title'] = '%1';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['default_argument_options']['argument'] = '209';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate_options']['vocabularies'] = array(
    'stanford_student_type' => 'stanford_student_type',
  );
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate_options']['transform'] = TRUE;
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
  /* Filter criterion: Content: Type (field_s_person_type) */
  $handler->display->display_options['filters']['field_s_person_type_value']['id'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['table'] = 'field_data_field_s_person_type';
  $handler->display->display_options['filters']['field_s_person_type_value']['field'] = 'field_s_person_type_value';
  $handler->display->display_options['filters']['field_s_person_type_value']['value'] = array(
    'student' => 'student',
  );

  /* Display: Student Page */
  $handler = $view->new_display('page', 'Student Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'people/students';
  $handler->display->display_options['menu']['title'] = 'Students';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Student Block - ajax */
  $handler = $view->new_display('block', 'Student Block - ajax', 'block_student_ajax');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;

  /* Display: Graduate Student Page */
  $handler = $view->new_display('page', 'Graduate Student Page', 'page_graduate_student');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Dissertation Title */
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['id'] = 'field_s_person_dissertatn_title';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['table'] = 'field_data_field_s_person_dissertatn_title';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['field'] = 'field_s_person_dissertatn_title';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['label'] = 'Dissertation';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['element_label_class'] = 'descriptor ';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['hide_empty'] = TRUE;
  /* Field: Content: Field of Study */
  $handler->display->display_options['fields']['field_s_person_study']['id'] = 'field_s_person_study';
  $handler->display->display_options['fields']['field_s_person_study']['table'] = 'field_data_field_s_person_study';
  $handler->display->display_options['fields']['field_s_person_study']['field'] = 'field_s_person_study';
  $handler->display->display_options['fields']['field_s_person_study']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_s_person_study']['element_label_class'] = 'descriptor';
  $handler->display->display_options['fields']['field_s_person_study']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_person_study']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_study']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Cohort */
  $handler->display->display_options['fields']['field_cohort']['id'] = 'field_cohort';
  $handler->display->display_options['fields']['field_cohort']['table'] = 'field_data_field_cohort';
  $handler->display->display_options['fields']['field_cohort']['field'] = 'field_cohort';
  $handler->display->display_options['fields']['field_cohort']['label'] = '';
  $handler->display->display_options['fields']['field_cohort']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cohort']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Cohort (field_cohort) */
  $handler->display->display_options['sorts']['field_cohort_value']['id'] = 'field_cohort_value';
  $handler->display->display_options['sorts']['field_cohort_value']['table'] = 'field_data_field_cohort';
  $handler->display->display_options['sorts']['field_cohort_value']['field'] = 'field_cohort_value';
  $handler->display->display_options['sorts']['field_cohort_value']['order'] = 'DESC';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Student Type (field_s_person_student_type) */
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['id'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['table'] = 'field_data_field_s_person_student_type';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['field'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['title'] = 'Graduate Students';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['default_argument_options']['argument'] = '211';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate_options']['vocabularies'] = array(
    'stanford_student_type' => 'stanford_student_type',
  );
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['path'] = 'people/graduate-students';

  /* Display: Undergraduate Student Page */
  $handler = $view->new_display('page', 'Undergraduate Student Page', 'page_undergraduate_student');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Student Type (field_s_person_student_type) */
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['id'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['table'] = 'field_data_field_s_person_student_type';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['field'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['title'] = '%1';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['default_argument_options']['argument'] = '207';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate_options']['vocabularies'] = array(
    'stanford_student_type' => 'stanford_student_type',
  );
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['path'] = 'people/students/undergraduate';

  /* Display: Prospective Graduate Student Page */
  $handler = $view->new_display('page', 'Prospective Graduate Student Page', 'page_prospective_graduate');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Student Type (field_s_person_student_type) */
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['id'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['table'] = 'field_data_field_s_person_student_type';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['field'] = 'field_s_person_student_type_tid';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['title'] = '%1';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['default_argument_options']['argument'] = '209';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate_options']['vocabularies'] = array(
    'stanford_student_type' => 'stanford_student_type',
  );
  $handler->display->display_options['arguments']['field_s_person_student_type_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['path'] = 'people/students/graduate/prospective';
  $export['stanford_person_student'] = $view;

  return $export;
}
