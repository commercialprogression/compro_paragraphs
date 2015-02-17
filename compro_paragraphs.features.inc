<?php
/**
 * @file
 * compro_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function compro_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function compro_paragraphs_paragraphs_info() {
  $items = array(
    'blockquote' => array(
      'name' => 'Blockquote',
      'bundle' => 'blockquote',
      'locked' => '1',
    ),
    'heading' => array(
      'name' => 'Heading',
      'bundle' => 'heading',
      'locked' => '1',
    ),
    'longtext' => array(
      'name' => 'Long text',
      'bundle' => 'longtext',
      'locked' => '1',
    ),
    'media' => array(
      'name' => 'Media',
      'bundle' => 'media',
      'locked' => '1',
    ),
  );
  return $items;
}
