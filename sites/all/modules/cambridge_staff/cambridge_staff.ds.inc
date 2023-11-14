<?php

/**
 * @file
 * cambridge_staff.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function cambridge_staff_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|staff_profile|contact_card';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'staff_profile';
  $ds_fieldsetting->view_mode = 'contact_card';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|staff_profile|contact_card'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|staff_profile|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'staff_profile';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_sd_collaborator_profiles' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|staff_profile|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|staff_profile|staff_list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'staff_profile';
  $ds_fieldsetting->view_mode = 'staff_list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|staff_profile|staff_list'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function cambridge_staff_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|staff_profile|contact_card';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'staff_profile';
  $ds_layout->view_mode = 'contact_card';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_left_panel',
        1 => 'group_right_panel',
        2 => 'group_wrapper',
        3 => 'title',
        4 => 'field_sd_office_address',
        5 => 'field_sd_office_phone',
        6 => 'field_sd_job_titles',
        7 => 'field_sd_websites',
        8 => 'field_sd_email_address',
        9 => 'field_sd_staff_photo',
      ),
    ),
    'fields' => array(
      'group_left_panel' => 'ds_content',
      'group_right_panel' => 'ds_content',
      'group_wrapper' => 'ds_content',
      'title' => 'ds_content',
      'field_sd_office_address' => 'ds_content',
      'field_sd_office_phone' => 'ds_content',
      'field_sd_job_titles' => 'ds_content',
      'field_sd_websites' => 'ds_content',
      'field_sd_email_address' => 'ds_content',
      'field_sd_staff_photo' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'campl-contact-card' => 'campl-contact-card',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|staff_profile|contact_card'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|staff_profile|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'staff_profile';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sd_areas_of_interest',
        1 => 'body',
        2 => 'group_sd_accordion',
        3 => 'field_subject_ref',
        14 => 'field_sd_teaching',
        15 => 'field_sd_research_supervision',
        17 => 'group_sd_biography',
        20 => 'field_sd_research_interests',
        21 => 'group_sd_research',
        22 => 'group_sd_publications',
        24 => 'field_sd_key_publications',
        25 => 'group_sd_teaching',
        26 => 'field_sd_other_publications',
        27 => 'group_sd_other',
        28 => 'field_sd_biography',
        29 => 'field_other_professional_activit',
      ),
      'sd_contact' => array(
        4 => 'field_sd_office_address',
        5 => 'field_sd_office_city',
        6 => 'field_sd_office_postcode',
        7 => 'field_sd_office_phone',
        8 => 'field_sd_websites',
      ),
      'sd_staff_photo' => array(
        9 => 'field_sd_staff_photo',
      ),
      'sd_general_info' => array(
        10 => 'field_sd_phd_students',
        11 => 'field_sd_consultancy',
      ),
      'sd_job_titles' => array(
        12 => 'field_sd_job_titles',
      ),
      'sd_affiliations' => array(
        13 => 'field_sd_collaborator_profiles',
        16 => 'field_sd_classifications_ref',
        18 => 'field_sd_specialities_ref',
        19 => 'field_sd_departments_ref',
        23 => 'field_sd_person_keywords',
      ),
    ),
    'fields' => array(
      'field_sd_areas_of_interest' => 'ds_content',
      'body' => 'ds_content',
      'group_sd_accordion' => 'ds_content',
      'field_subject_ref' => 'ds_content',
      'field_sd_office_address' => 'sd_contact',
      'field_sd_office_city' => 'sd_contact',
      'field_sd_office_postcode' => 'sd_contact',
      'field_sd_office_phone' => 'sd_contact',
      'field_sd_websites' => 'sd_contact',
      'field_sd_staff_photo' => 'sd_staff_photo',
      'field_sd_phd_students' => 'sd_general_info',
      'field_sd_consultancy' => 'sd_general_info',
      'field_sd_job_titles' => 'sd_job_titles',
      'field_sd_collaborator_profiles' => 'sd_affiliations',
      'field_sd_teaching' => 'ds_content',
      'field_sd_research_supervision' => 'ds_content',
      'field_sd_classifications_ref' => 'sd_affiliations',
      'group_sd_biography' => 'ds_content',
      'field_sd_specialities_ref' => 'sd_affiliations',
      'field_sd_departments_ref' => 'sd_affiliations',
      'field_sd_research_interests' => 'ds_content',
      'group_sd_research' => 'ds_content',
      'group_sd_publications' => 'ds_content',
      'field_sd_person_keywords' => 'sd_affiliations',
      'field_sd_key_publications' => 'ds_content',
      'group_sd_teaching' => 'ds_content',
      'field_sd_other_publications' => 'ds_content',
      'group_sd_other' => 'ds_content',
      'field_sd_biography' => 'ds_content',
      'field_other_professional_activit' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'campl-content-container' => 'campl-content-container',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|staff_profile|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|staff_profile|staff_list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'staff_profile';
  $ds_layout->view_mode = 'staff_list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sd_staff_photo',
        1 => 'title',
        2 => 'field_sd_job_titles',
      ),
    ),
    'fields' => array(
      'field_sd_staff_photo' => 'ds_content',
      'title' => 'ds_content',
      'field_sd_job_titles' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'campl-content-container' => 'campl-content-container',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|staff_profile|staff_list'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function cambridge_staff_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'contact_card';
  $ds_view_mode->label = 'Contact card';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['contact_card'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'staff_list';
  $ds_view_mode->label = 'Staff list';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['staff_list'] = $ds_view_mode;

  return $export;
}
