<?php

/**
 * @file
 * cambridge_staff.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cambridge_staff_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_staff_profile';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_staff_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_staff_profile';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_staff_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_staff_profile';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_staff_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_region_blocks';
  $strongarm->value = array(
    'sd_contact' => array(
      'title' => 'Contact Details',
      'info' => 'node_staff_profile_full',
    ),
    'sd_staff_photo' => array(
      'title' => 'Staff Photo',
      'info' => 'node_staff_profile_full',
    ),
    'sd_general_info' => array(
      'title' => 'General Info',
      'info' => 'node_staff_profile_full',
    ),
    'sd_job_titles' => array(
      'title' => 'Job Titles',
      'info' => 'node_staff_profile_full',
    ),
    'sd_affiliations' => array(
      'title' => 'Affiliations',
      'info' => 'node_staff_profile_full',
    ),
  );
  $export['ds_extras_region_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_region_to_block';
  $strongarm->value = 1;
  $export['ds_extras_region_to_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__staff_profile';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'vertical_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'sidebar_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'focus_on_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'news_listing_item' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'carousel_item' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'staff_list' => array(
        'custom_settings' => TRUE,
      ),
      'contact_card' => array(
        'custom_settings' => TRUE,
      ),
      'alt_staff_list' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__staff_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_staff_profile';
  $strongarm->value = array();
  $export['menu_options_staff_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_staff_profile';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_staff_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_staff_profile';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_staff_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_staff_profile';
  $strongarm->value = '0';
  $export['node_preview_staff_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_staff_profile';
  $strongarm->value = 0;
  $export['node_submitted_staff_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_staff_profile_pattern';
  $strongarm->value = 'staff/[node:title]';
  $export['pathauto_node_staff_profile_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_restricted_content_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_restricted_content_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_sd_classification_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_sd_classification_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_sd_departments_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_sd_departments_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_sd_specialities_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_sd_specialities_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_subject_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_subject_pattern'] = $strongarm;

  return $export;
}
