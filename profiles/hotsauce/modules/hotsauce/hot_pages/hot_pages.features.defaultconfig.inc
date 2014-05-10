<?php
/**
 * @file
 * hot_pages.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hot_pages_defaultconfig_features() {
  return array(
    'hot_pages' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hot_pages_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create hotsauce_page content'.
  $permissions['create hotsauce_page content'] = array(
    'name' => 'create hotsauce_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hotsauce_page content'.
  $permissions['delete any hotsauce_page content'] = array(
    'name' => 'delete any hotsauce_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hotsauce_page content'.
  $permissions['delete own hotsauce_page content'] = array(
    'name' => 'delete own hotsauce_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any hotsauce_page content'.
  $permissions['edit any hotsauce_page content'] = array(
    'name' => 'edit any hotsauce_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hotsauce_page content'.
  $permissions['edit own hotsauce_page content'] = array(
    'name' => 'edit own hotsauce_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
