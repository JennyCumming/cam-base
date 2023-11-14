<?php

/**
 * @file
 * cambridge_staff.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cambridge_staff_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_panel|node|staff_profile|contact_card';
  $field_group->group_name = 'group_left_panel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'contact_card';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left panel',
    'weight' => '0',
    'children' => array(
      0 => 'group_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left panel',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'campl-column8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_left_panel|node|staff_profile|contact_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_column|user|user|full';
  $field_group->group_name = 'group_main_column';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_top_wrapper';
  $field_group->data = array(
    'label' => 'main column',
    'weight' => '3',
    'children' => array(
      0 => 'group_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'main column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'campl-column9',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_main_column|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pag|user|user|full';
  $field_group->group_name = 'group_pag';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile Accordion Group',
    'weight' => '0',
    'children' => array(),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pag field-group-accordion',
        'effect' => 'bounceslide',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pag|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_panel|node|staff_profile|contact_card';
  $field_group->group_name = 'group_right_panel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'contact_card';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right panel',
    'weight' => '1',
    'children' => array(
      0 => 'field_sd_staff_photo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right panel',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'campl-column4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_right_panel|node|staff_profile|contact_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sd_accordion|node|staff_profile|full';
  $field_group->group_name = 'group_sd_accordion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile Accordion Group',
    'weight' => '1',
    'children' => array(
      0 => 'group_sd_biography',
      1 => 'group_sd_other',
      2 => 'group_sd_publications',
      3 => 'group_sd_research',
      4 => 'group_sd_teaching',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sd-accordion field-group-accordion',
        'effect' => 'bounceslide',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sd_accordion|node|staff_profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sd_biography|node|staff_profile|full';
  $field_group->group_name = 'group_sd_biography';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sd_accordion';
  $field_group->data = array(
    'label' => 'Biography',
    'weight' => '14',
    'children' => array(
      0 => 'field_sd_biography',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Biography',
      'instance_settings' => array(
        'classes' => 'group-sd-biography field-group-accordion-item',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sd_biography|node|staff_profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sd_common|user|user|form';
  $field_group->group_name = 'group_sd_common';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sd_container';
  $field_group->data = array(
    'label' => 'Common',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_name',
      1 => 'field_sd_biography',
      2 => 'field_sd_consultancy',
      3 => 'field_sd_job_titles',
      4 => 'field_sd_key_publications',
      5 => 'field_sd_other_publications',
      6 => 'field_sd_person_keywords',
      7 => 'field_sd_phd_students',
      8 => 'field_sd_research_interests',
      9 => 'field_sd_research_supervision',
      10 => 'field_sd_teaching',
      11 => 'field_sd_websites',
      12 => 'field_sd_last_name',
      13 => 'ckeditor',
      14 => 'redirect',
      15 => 'account',
      16 => 'timezone',
      17 => 'picture',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Common',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-sd-common field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sd_common|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sd_contact|node|staff_profile|form';
  $field_group->group_name = 'group_sd_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact details',
    'weight' => '4',
    'children' => array(
      0 => 'field_sd_office_address',
      1 => 'field_sd_office_city',
      2 => 'field_sd_office_phone',
      3 => 'field_sd_office_postcode',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sd-contact field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_sd_contact|node|staff_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sd_container|user|user|form';
  $field_group->group_name = 'group_sd_container';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => 'group_sd_common',
      1 => 'group_sd_contact',
      2 => 'group_sd_related_items',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-sd-container field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sd_container|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sd_content|node|staff_profile|form';
  $field_group->group_name = 'group_sd_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_sd_consultancy',
      2 => 'field_sd_email_address',
      3 => 'field_sd_job_titles',
      4 => 'field_sd_last_name',
      5 => 'field_sd_phd_students',
      6 => 'field_sd_staff_photo',
      7 => 'field_sd_websites',
      8 => 'field_sd_crsid',
      9 => 'field_sd_first_name',
      10 => 'field_sd_honorific',
      11 => 'field_sd_middle_name',
      12 => 'field_access_control',
      13 => 'field_sd_suffix',
      14 => 'field_sd_areas_of_interest',
      15 => 'field_sd_colleges',
      16 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sd-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_sd_content|node|staff_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sd_detail|node|staff_profile|form';
  $field_group->group_name = 'group_sd_detail';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabbed Content',
    'weight' => '2',
    'children' => array(
      0 => 'field_other_professional_activit',
      1 => 'field_sd_biography',
      2 => 'field_sd_key_publications',
      3 => 'field_sd_other_publications',
      4 => 'field_sd_research_interests',
      5 => 'field_sd_research_supervision',
      6 => 'field_sd_teaching',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Tabbed Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-sd-detail field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_sd_detail|node|staff_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sd_other|node|staff_profile|full';
  $field_group->group_name = 'group_sd_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sd_accordion';
  $field_group->data = array(
    'label' => 'Other Professional Activities',
    'weight' => '18',
    'children' => array(
      0 => 'field_other_professional_activit',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-sd-other field-group-accordion-item',
      ),
    ),
  );
  $field_groups['group_sd_other|node|staff_profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sd_publications|node|staff_profile|full';
  $field_group->group_name = 'group_sd_publications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sd_accordion';
  $field_group->data = array(
    'label' => 'Publications',
    'weight' => '16',
    'children' => array(
      0 => 'field_sd_key_publications',
      1 => 'field_sd_other_publications',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-sd-publications field-group-accordion-item',
      ),
    ),
  );
  $field_groups['group_sd_publications|node|staff_profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sd_related_items|node|staff_profile|form';
  $field_group->group_name = 'group_sd_related_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Items',
    'weight' => '3',
    'children' => array(
      0 => 'field_sd_classifications_ref',
      1 => 'field_sd_departments_ref',
      2 => 'field_sd_person_keywords',
      3 => 'field_sd_specialities_ref',
      4 => 'field_subject_ref',
      5 => 'field_sd_collaborator_profiles',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sd-related-items field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_sd_related_items|node|staff_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sd_research|node|staff_profile|full';
  $field_group->group_name = 'group_sd_research';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sd_accordion';
  $field_group->data = array(
    'label' => 'Research',
    'weight' => '15',
    'children' => array(
      0 => 'field_sd_research_interests',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Research',
      'instance_settings' => array(
        'classes' => 'group-sd-research field-group-accordion-item',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_sd_research|node|staff_profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sd_teaching|node|staff_profile|full';
  $field_group->group_name = 'group_sd_teaching';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sd_accordion';
  $field_group->data = array(
    'label' => 'Teaching and Supervisions',
    'weight' => '17',
    'children' => array(
      0 => 'field_sd_research_supervision',
      1 => 'field_sd_teaching',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-sd-teaching field-group-accordion-item',
      ),
    ),
  );
  $field_groups['group_sd_teaching|node|staff_profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|staff_profile|alt_staff_list';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'alt_staff_list';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_sd_email_address',
      1 => 'field_sd_job_titles',
      2 => 'field_sd_office_phone',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'campl-side-padding',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper|node|staff_profile|alt_staff_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|staff_profile|contact_card';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff_profile';
  $field_group->mode = 'contact_card';
  $field_group->parent_name = 'group_left_panel';
  $field_group->data = array(
    'label' => 'wrapper',
    'weight' => '6',
    'children' => array(
      0 => 'field_sd_email_address',
      1 => 'field_sd_job_titles',
      2 => 'field_sd_office_address',
      3 => 'field_sd_office_phone',
      4 => 'field_sd_websites',
      5 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'campl-side-padding',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper|node|staff_profile|contact_card'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Biography');
  t('Common');
  t('Contact details');
  t('Container');
  t('Content');
  t('Left panel');
  t('Other Professional Activities');
  t('Profile Accordion Group');
  t('Publications');
  t('Related Items');
  t('Research');
  t('Right panel');
  t('Tabbed Content');
  t('Teaching and Supervisions');
  t('main column');
  t('wrapper');

  return $field_groups;
}
