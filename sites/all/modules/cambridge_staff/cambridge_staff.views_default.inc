<?php

/**
 * @file
 * cambridge_staff.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cambridge_staff_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sd_directory_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'sd Directory blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'sd Directory blocks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'staff_profile' => 'staff_profile',
  );

  /* Display: A-Z Contact List Page */
  $handler = $view->new_display('page', 'A-Z Contact List Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Directory';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'campl-content-container';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="campl-page-header campl-directory-atoz">
                    <div class="clearfix">
                      <div class="campl-column12">
                        <div class="campl-content-container campl-list-container">
                          <ul class="campl-unstyled-list campl-desktop-list-layout">
                            <li><a href="/directory">All <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/a">A <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/b">B <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/c">C <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/d">D <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/e">E <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/f">F <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/g">G <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/h">H <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/i">I <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/j">J <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/k">K <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/l">L <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/m">M <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/n">N <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/o">O <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/p">P <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/q">Q <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/r">R <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/s">S <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/t">T <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/u">U <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/v">V <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/w">W <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/x">X <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/y">Y <span class=campl-list-indicator> </span></a></li>
                            <li><a href="/directory/z">Z <span class=campl-list-indicator> </span></a></li>
                          </ul>

<div class="campl-mobile-list-layout"><label class="hidden" for="navigation-select">Select</label> <select id="navigation-select"><option value="">please select</option><option value="/directory/a">A</option><option value="/directory/b">B</option><option value="/directory/c">C</option><option value="/directory/d">D</option><option value="/directory/e">E</option><option value="/directory/f">F</option><option value="/directory/g">G</option><option value="/directory/h">H</option><option value="/directory/i">I</option><option value="/directory/j">J</option><option value="/directory/k">K</option><option value="/directory/l">L</option><option value="/directory/m">M</option><option value="/directory/n">N</option><option value="/directory/o">O</option><option value="/directory/p">P</option><option value="/directory/q">Q</option><option value="/directory/r">R</option><option value="/directory/s">S</option><option value="/directory/t">T</option><option value="/directory/u">U</option><option value="/directory/v">V</option><option value="/directory/w">W</option><option value="/directory/x">X</option><option value="/directory/y">Y</option><option value="/directory/z">Z</option> </select></div>
</div>
</div>
</div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="campl-content-container">No results found!</div>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Office phone */
  $handler->display->display_options['fields']['field_sd_office_phone']['id'] = 'field_sd_office_phone';
  $handler->display->display_options['fields']['field_sd_office_phone']['table'] = 'field_data_field_sd_office_phone';
  $handler->display->display_options['fields']['field_sd_office_phone']['field'] = 'field_sd_office_phone';
  /* Field: Content: Email address */
  $handler->display->display_options['fields']['field_sd_email_address']['id'] = 'field_sd_email_address';
  $handler->display->display_options['fields']['field_sd_email_address']['table'] = 'field_data_field_sd_email_address';
  $handler->display->display_options['fields']['field_sd_email_address']['field'] = 'field_sd_email_address';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_sd_last_name']['id'] = 'field_sd_last_name';
  $handler->display->display_options['fields']['field_sd_last_name']['table'] = 'field_data_field_sd_last_name';
  $handler->display->display_options['fields']['field_sd_last_name']['field'] = 'field_sd_last_name';
  $handler->display->display_options['fields']['field_sd_last_name']['exclude'] = TRUE;
  /* Field: Content: Job titles */
  $handler->display->display_options['fields']['field_sd_job_titles']['id'] = 'field_sd_job_titles';
  $handler->display->display_options['fields']['field_sd_job_titles']['table'] = 'field_data_field_sd_job_titles';
  $handler->display->display_options['fields']['field_sd_job_titles']['field'] = 'field_sd_job_titles';
  $handler->display->display_options['fields']['field_sd_job_titles']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name (field_sd_last_name) */
  $handler->display->display_options['sorts']['field_sd_last_name_value']['id'] = 'field_sd_last_name_value';
  $handler->display->display_options['sorts']['field_sd_last_name_value']['table'] = 'field_data_field_sd_last_name';
  $handler->display->display_options['sorts']['field_sd_last_name_value']['field'] = 'field_sd_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last name (field_sd_last_name) */
  $handler->display->display_options['arguments']['field_sd_last_name_value']['id'] = 'field_sd_last_name_value';
  $handler->display->display_options['arguments']['field_sd_last_name_value']['table'] = 'field_data_field_sd_last_name';
  $handler->display->display_options['arguments']['field_sd_last_name_value']['field'] = 'field_sd_last_name_value';
  $handler->display->display_options['arguments']['field_sd_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_sd_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sd_last_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sd_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_sd_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_sd_last_name_value']['limit'] = '1';
  $handler->display->display_options['path'] = 'directory';

  /* Display: Contact list Block */
  $handler = $view->new_display('block', 'Contact list Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact list';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Office phone */
  $handler->display->display_options['fields']['field_sd_office_phone']['id'] = 'field_sd_office_phone';
  $handler->display->display_options['fields']['field_sd_office_phone']['table'] = 'field_data_field_sd_office_phone';
  $handler->display->display_options['fields']['field_sd_office_phone']['field'] = 'field_sd_office_phone';
  /* Field: Content: Email address */
  $handler->display->display_options['fields']['field_sd_email_address']['id'] = 'field_sd_email_address';
  $handler->display->display_options['fields']['field_sd_email_address']['table'] = 'field_data_field_sd_email_address';
  $handler->display->display_options['fields']['field_sd_email_address']['field'] = 'field_sd_email_address';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_sd_last_name']['id'] = 'field_sd_last_name';
  $handler->display->display_options['fields']['field_sd_last_name']['table'] = 'field_data_field_sd_last_name';
  $handler->display->display_options['fields']['field_sd_last_name']['field'] = 'field_sd_last_name';
  $handler->display->display_options['fields']['field_sd_last_name']['exclude'] = TRUE;
  /* Field: Content: Job titles */
  $handler->display->display_options['fields']['field_sd_job_titles']['id'] = 'field_sd_job_titles';
  $handler->display->display_options['fields']['field_sd_job_titles']['table'] = 'field_data_field_sd_job_titles';
  $handler->display->display_options['fields']['field_sd_job_titles']['field'] = 'field_sd_job_titles';
  $handler->display->display_options['fields']['field_sd_job_titles']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name (field_sd_last_name) */
  $handler->display->display_options['sorts']['field_sd_last_name_value']['id'] = 'field_sd_last_name_value';
  $handler->display->display_options['sorts']['field_sd_last_name_value']['table'] = 'field_data_field_sd_last_name';
  $handler->display->display_options['sorts']['field_sd_last_name_value']['field'] = 'field_sd_last_name_value';

  /* Display: Staff list by speciality */
  $handler = $view->new_display('block', 'Staff list by speciality', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'campl-content-container';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'campl-slim-bottom-padding';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Specialities (field_sd_specialities_ref) */
  $handler->display->display_options['relationships']['field_sd_specialities_ref_tid']['id'] = 'field_sd_specialities_ref_tid';
  $handler->display->display_options['relationships']['field_sd_specialities_ref_tid']['table'] = 'field_data_field_sd_specialities_ref';
  $handler->display->display_options['relationships']['field_sd_specialities_ref_tid']['field'] = 'field_sd_specialities_ref_tid';
  $handler->display->display_options['relationships']['field_sd_specialities_ref_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Last name (field_sd_last_name) */
  $handler->display->display_options['sorts']['field_sd_last_name_value']['id'] = 'field_sd_last_name_value';
  $handler->display->display_options['sorts']['field_sd_last_name_value']['table'] = 'field_data_field_sd_last_name';
  $handler->display->display_options['sorts']['field_sd_last_name_value']['field'] = 'field_sd_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_sd_specialities_ref_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'sd_specialities' => 'sd_specialities',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Staff profiles by speciality */
  $handler = $view->new_display('block', 'Staff profiles by speciality', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'campl-column4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'staff_list';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Last name (field_sd_last_name) */
  $handler->display->display_options['sorts']['field_sd_last_name_value']['id'] = 'field_sd_last_name_value';
  $handler->display->display_options['sorts']['field_sd_last_name_value']['table'] = 'field_data_field_sd_last_name';
  $handler->display->display_options['sorts']['field_sd_last_name_value']['field'] = 'field_sd_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Specialities (field_sd_specialities_ref) */
  $handler->display->display_options['arguments']['field_sd_specialities_ref_tid']['id'] = 'field_sd_specialities_ref_tid';
  $handler->display->display_options['arguments']['field_sd_specialities_ref_tid']['table'] = 'field_data_field_sd_specialities_ref';
  $handler->display->display_options['arguments']['field_sd_specialities_ref_tid']['field'] = 'field_sd_specialities_ref_tid';
  $handler->display->display_options['arguments']['field_sd_specialities_ref_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_sd_specialities_ref_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_sd_specialities_ref_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sd_specialities_ref_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sd_specialities_ref_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_sd_specialities_ref_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_sd_specialities_ref_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_sd_specialities_ref_tid']['validate_options']['vocabularies'] = array(
    'sd_specialities' => 'sd_specialities',
  );

  /* Display: Staff profiles by classification */
  $handler = $view->new_display('block', 'Staff profiles by classification', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'campl-column4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'staff_list';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Last name (field_sd_last_name) */
  $handler->display->display_options['sorts']['field_sd_last_name_value']['id'] = 'field_sd_last_name_value';
  $handler->display->display_options['sorts']['field_sd_last_name_value']['table'] = 'field_data_field_sd_last_name';
  $handler->display->display_options['sorts']['field_sd_last_name_value']['field'] = 'field_sd_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Classifications (field_sd_classifications_ref) */
  $handler->display->display_options['arguments']['field_sd_classifications_ref_tid']['id'] = 'field_sd_classifications_ref_tid';
  $handler->display->display_options['arguments']['field_sd_classifications_ref_tid']['table'] = 'field_data_field_sd_classifications_ref';
  $handler->display->display_options['arguments']['field_sd_classifications_ref_tid']['field'] = 'field_sd_classifications_ref_tid';
  $handler->display->display_options['arguments']['field_sd_classifications_ref_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_sd_classifications_ref_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_sd_classifications_ref_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_sd_classifications_ref_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sd_classifications_ref_tid']['summary_options']['items_per_page'] = '25';
  $export['sd_directory_blocks'] = $view;

  return $export;
}
