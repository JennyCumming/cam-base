<?php
/**
 * @file
 * cam_accordion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cam_accordion_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cam_accordion_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cam_accordion_node_info() {
  $items = array(
    'accordion' => array(
      'name' => t('Accordion'),
      'base' => 'node_content',
      'description' => t('Page content to be shown as an accordion.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
