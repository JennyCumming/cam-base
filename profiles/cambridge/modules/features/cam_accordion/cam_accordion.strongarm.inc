<?php
/**
 * @file
 * cam_accordion.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cam_accordion_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_accordion';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_accordion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_accordion';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_accordion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_accordion';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_accordion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__accordion';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__accordion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_accordion';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_accordion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_accordion';
  $strongarm->value = '1';
  $export['node_preview_accordion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_accordion';
  $strongarm->value = 0;
  $export['node_submitted_accordion'] = $strongarm;

  return $export;
}
