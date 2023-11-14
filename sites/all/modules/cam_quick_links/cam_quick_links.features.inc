<?php
/**
 * @file
 * cam_quick_links.features.inc
 */

/**
 * Implements hook_views_api().
 */
function cam_quick_links_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cam_quick_links_node_info() {
  $items = array(
    'quick_link' => array(
      'name' => t('Quick Link'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
