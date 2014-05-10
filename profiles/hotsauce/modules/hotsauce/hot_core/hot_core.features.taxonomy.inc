<?php
/**
 * @file
 * hot_core.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hot_core_taxonomy_default_vocabularies() {
  return array(
    'hotsauce_categories' => array(
      'name' => 'Categories',
      'machine_name' => 'hotsauce_categories',
      'description' => 'This is a sitewide taxonomy of categories to organize the content on your site!',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
