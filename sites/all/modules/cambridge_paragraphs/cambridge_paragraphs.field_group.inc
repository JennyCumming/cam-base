<?php

/**
 * @file
 * cambridge_paragraphs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cambridge_paragraphs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|paragraphs_item|promo_block|full';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'promo_block';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'container',
    'weight' => '0',
    'children' => array(
      0 => 'field_paragraph_heading',
      1 => 'field_paragraph_image',
      2 => 'group_grouping',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'campl-vertical-teaser campl-teaser campl-promo-teaser',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_container|paragraphs_item|promo_block|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grouping|paragraphs_item|promo_block|full';
  $field_group->group_name = 'group_grouping';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'promo_block';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_container';
  $field_group->data = array(
    'label' => 'grouping',
    'weight' => '3',
    'children' => array(
      0 => 'field_paragraph_text_content',
      1 => 'field_paragraph_url',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'grouping',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'campl-content-container campl-vertical-teaser-txt clearfix',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_grouping|paragraphs_item|promo_block|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('container');
  t('grouping');

  return $field_groups;
}
