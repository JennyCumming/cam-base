<?php

/**
 * @file
 * cambridge_download.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function cambridge_download_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|download|download_list_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'download';
  $ds_layout->view_mode = 'download_list_item';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_download_file',
      ),
    ),
    'fields' => array(
      'field_download_file' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
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
  $export['node|download|download_list_item'] = $ds_layout;

  return $export;
}
