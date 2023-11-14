<?php
/**
 * @file
 * homepage_carousel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_carousel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function homepage_carousel_node_info() {
  $items = array(
    'homepage_carousel' => array(
      'name' => t('Homepage Carousel'),
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
