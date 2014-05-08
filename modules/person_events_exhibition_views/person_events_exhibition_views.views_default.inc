<?php
/**
 * @file
 * person_events_exhibition_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function person_events_exhibition_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'person_reference_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Person Reference Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Person Reference Blocks';
  $handler->display->display_options['css_class'] = 'views-row-lines';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_event' => 'stanford_event',
  );

  /* Display: Related Events */
  $handler = $view->new_display('block', 'Related Events', 'person_ref_events_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['display_description'] = 'Related Events';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_stanford_event_datetime) */
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['id'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['field'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Person (field_event_related_person) */
  $handler->display->display_options['arguments']['field_event_related_person_target_id']['id'] = 'field_event_related_person_target_id';
  $handler->display->display_options['arguments']['field_event_related_person_target_id']['table'] = 'field_data_field_event_related_person';
  $handler->display->display_options['arguments']['field_event_related_person_target_id']['field'] = 'field_event_related_person_target_id';
  $handler->display->display_options['arguments']['field_event_related_person_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_related_person_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_event_related_person_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_related_person_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_related_person_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Related Events';

  /* Display: Related Exhibits */
  $handler = $view->new_display('block', 'Related Exhibits', 'person_ref_exhibit_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Exhibitions';
  $handler->display->display_options['display_description'] = 'Related Exhibits';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Dates Duration -  start date (field_s_exh_dates_duration) */
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value']['id'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value']['field'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['sorts']['field_s_exh_dates_duration_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Person (field_exhibition_related_person) */
  $handler->display->display_options['arguments']['field_exhibition_related_person_target_id']['id'] = 'field_exhibition_related_person_target_id';
  $handler->display->display_options['arguments']['field_exhibition_related_person_target_id']['table'] = 'field_data_field_exhibition_related_person';
  $handler->display->display_options['arguments']['field_exhibition_related_person_target_id']['field'] = 'field_exhibition_related_person_target_id';
  $handler->display->display_options['arguments']['field_exhibition_related_person_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_exhibition_related_person_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_exhibition_related_person_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_exhibition_related_person_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_exhibition_related_person_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'stanford_exhibition' => 'stanford_exhibition',
  );
  $handler->display->display_options['block_description'] = 'Related Exhibits';
  $export['person_reference_blocks'] = $view;

  return $export;
}
