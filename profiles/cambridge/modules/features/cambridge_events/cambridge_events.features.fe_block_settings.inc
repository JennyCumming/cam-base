<?php

/**
 * @file
 * cambridge_events.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cambridge_events_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-events-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'events-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cambridge_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cambridge_theme',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
