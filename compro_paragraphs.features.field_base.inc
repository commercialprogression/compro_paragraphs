<?php
/**
 * @file
 * compro_paragraphs.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function compro_paragraphs_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_blockquote_quote'
  $field_bases['field_blockquote_quote'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_blockquote_quote',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_heading_heading'
  $field_bases['field_heading_heading'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_heading_heading',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'compro_paragraphs',
    'settings' => array(
      'allowed_wrappers' => array(
        'h1' => 0,
        'h2' => 'h2',
        'h3' => 'h3',
        'h4' => 'h4',
        'h5' => 'h5',
        'h6' => 0,
      ),
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'heading_text',
  );

  // Exported field_base: 'field_longtext_text'
  $field_bases['field_longtext_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_longtext_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_media_clear'
  $field_bases['field_media_clear'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_media_clear',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'none' => 'None',
        'left' => 'Left',
        'right' => 'Right',
        'both' => 'Both',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_media_float'
  $field_bases['field_media_float'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_media_float',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'none' => 'None',
        'left' => 'Left',
        'right' => 'Right',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_media_media'
  $field_bases['field_media_media'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_media_media',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  return $field_bases;
}
