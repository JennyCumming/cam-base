<?php
/**
 * @file
 * cam_simple_gallery.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cam_simple_gallery_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_image_credit'.
  $field_bases['field_image_credit'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image_credit',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
