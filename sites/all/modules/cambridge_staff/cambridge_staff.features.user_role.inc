<?php

/**
 * @file
 * cambridge_staff.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cambridge_staff_user_default_roles() {
  $roles = array();

  // Exported role: member.
  $roles['member'] = array(
    'name' => 'member',
    'weight' => 6,
  );

  return $roles;
}
