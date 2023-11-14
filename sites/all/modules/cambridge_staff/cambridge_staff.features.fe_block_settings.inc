<?php
/**
 * @file
 * cambridge_staff.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cambridge_staff_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ds_extras-affiliations'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'affiliations',
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cambridge_theme' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'cambridge_theme',
        'weight' => -58,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'slab' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'slab',
        'weight' => -58,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ds_extras-contact_details'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'contact_details',
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cambridge_theme' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'cambridge_theme',
        'weight' => -59,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'slab' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'slab',
        'weight' => -59,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ds_extras-general_info'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'general_info',
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cambridge_theme' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'cambridge_theme',
        'weight' => -60,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'slab' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'slab',
        'weight' => -60,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['ds_extras-job_titles'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'job_titles',
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cambridge_theme' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'cambridge_theme',
        'weight' => -62,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'slab' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'slab',
        'weight' => -62,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['ds_extras-photo'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'photo',
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cambridge_theme' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'cambridge_theme',
        'weight' => -61,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'slab' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'slab',
        'weight' => -61,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
