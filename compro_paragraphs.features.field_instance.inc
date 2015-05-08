<?php
/**
 * @file
 * compro_paragraphs.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function compro_paragraphs_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'paragraphs_item-blockquote-field_blockquote_quote'
  $field_instances['paragraphs_item-blockquote-field_blockquote_quote'] = array(
    'bundle' => 'blockquote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 150,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
      'small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_blockquote_quote',
    'label' => 'Quote',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-heading-field_heading_heading'
  $field_instances['paragraphs_item-heading-field_heading_heading'] = array(
    'bundle' => 'heading',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'compro_paragraphs',
        'settings' => array(),
        'type' => 'heading_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'compro_paragraphs',
        'settings' => array(),
        'type' => 'heading_default',
        'weight' => 0,
      ),
      'small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_heading_heading',
    'label' => 'Heading',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'compro_paragraphs',
      'settings' => array(),
      'type' => 'heading_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-longtext-field_longtext_text'
  $field_instances['paragraphs_item-longtext-field_longtext_text'] = array(
    'bundle' => 'longtext',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 150,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
      'small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_longtext_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-media-field_media_clear'
  $field_instances['paragraphs_item-media-field_media_clear'] = array(
    'bundle' => 'media',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Allows your decide whether you want other items floating to the left or right of this item',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_media_clear',
    'label' => 'Clear',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-media-field_media_float'
  $field_instances['paragraphs_item-media-field_media_float'] = array(
    'bundle' => 'media',
    'default_value' => array(
      0 => array(
        'value' => 'none',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose \'None\' to keep the media in line with the text, or align it to the left or right',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_media_float',
    'label' => 'Float',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-media-field_media_media'
  $field_instances['paragraphs_item-media-field_media_media'] = array(
    'bundle' => 'media',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'media',
        'settings' => array(
          'image_style' => '',
        ),
        'type' => 'media_large_icon',
        'weight' => 0,
      ),
      'small' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'small',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'teaser',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_media_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt doc docx ppt pptx xls xlsx gif jpg png mp4 pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Allows your decide whether you want other items floating to the left or right of this item');
  t('Choose \'None\' to keep the media in line with the text, or align it to the left or right');
  t('Clear');
  t('Float');
  t('Heading');
  t('Media');
  t('Quote');
  t('Text');

  return $field_instances;
}
