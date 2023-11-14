<?php

/**
 * @file
 * cambridge_download.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cambridge_download_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create download content'.
  $permissions['create download content'] = array(
    'name' => 'create download content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any download content'.
  $permissions['delete any download content'] = array(
    'name' => 'delete any download content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own download content'.
  $permissions['delete own download content'] = array(
    'name' => 'delete own download content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any download content'.
  $permissions['edit any download content'] = array(
    'name' => 'edit any download content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own download content'.
  $permissions['edit own download content'] = array(
    'name' => 'edit own download content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
