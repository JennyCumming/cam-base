<?php

/**
 * Implements hook_form().
 */
function lookup_roles_settings_form($form, &$form_state) {
  $form['lookup_roles:remove_roles_if_cancelled_in_lookup'] = array(
    '#type' => 'select',
    '#title' => 'Remove roles if user is cancelled in Lookup',
    '#description' => 'Remove roles from this user if they have been cancelled in Lookup?',
    '#default_value' => variable_get('lookup_roles:remove_roles_if_cancelled_in_lookup'),
    '#options' => array('no' => 'No', 'yes' => 'Yes',),
    '#required' => TRUE,
    '#multiple' => FALSE,
    '#size' => 3,
  );

  $form['#submit'][] = 'lookup_roles_settings_form_submit';

  return system_settings_form($form);
}

/**
 * Submission handler for lookup_roles_settings_form()
 */
function lookup_roles_settings_form_submit($form, &$form_state) {
  // Exclude unnecessary elements.
  form_state_values_clean($form_state);

  foreach ($form_state['values'] as $key => $value) {
    if (empty($value)) {
      variable_del($key);
      unset($form_state['values'][$key]);
    }
  }
}
