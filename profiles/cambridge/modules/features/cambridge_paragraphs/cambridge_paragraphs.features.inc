<?php

/**
 * @file
 * cambridge_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cambridge_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function cambridge_paragraphs_paragraphs_info() {
  $items = array(
    'content_teaser' => array(
      'name' => 'Content teaser',
      'bundle' => 'content_teaser',
      'locked' => '1',
    ),
    'embedded_link' => array(
      'name' => 'embedded Media',
      'bundle' => 'embedded_link',
      'locked' => '1',
    ),
    'image_link' => array(
      'name' => 'Image link',
      'bundle' => 'image_link',
      'locked' => '1',
    ),
    'link_block' => array(
      'name' => 'Link block',
      'bundle' => 'link_block',
      'locked' => '1',
    ),
    'promo_block' => array(
      'name' => 'Promo block',
      'bundle' => 'promo_block',
      'locked' => '1',
    ),
    'text_block' => array(
      'name' => 'Text block',
      'bundle' => 'text_block',
      'locked' => '1',
    ),
  );
  return $items;
}
