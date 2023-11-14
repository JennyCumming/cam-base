<?php

function cambridge_staff_directory_form($form, &$form_state) {

  $options = array(
    'never'  => t('Never show profiles as a contact card'),
    'always' => t('Always show profiles as a contact card'),
    'auto'   => t('Only show sparce profiles as a contact card'),
  );

  $form['cambridge_staff_card'] = array(
    '#type'        => 'radios',
    '#default_value' => variable_get('cambridge_staff_card'),
    '#title'       => t('Contact card'),
    '#description' => t('Note: sparce profiles are those where all long text fields are empty'),
    '#options' => $options,
  );

  return system_settings_form($form);
}
