<?php
/**
 * @file
 * hot_wysiywg.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hot_wysiywg_defaultconfig_features() {
  return array(
    'hot_wysiywg' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hot_wysiywg_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format hotsauce_html_text'.
  $permissions['use text format hotsauce_html_text'] = array(
    'name' => 'use text format hotsauce_html_text',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format hot_wysiywg_text'.
  $permissions['use text format hot_wysiywg_text'] = array(
    'name' => 'use text format hot_wysiywg_text',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
