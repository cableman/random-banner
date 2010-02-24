<?php

// $Id$

/**
 * @file Defines an CCK imagefield to extend the banner content type.
 */

/**
 * CCK imagefield export. Should be used to get CCK imagefield add to the
 * banner content type.
 *
 * @return array
 */
function _banner_cck_export() {
  $content['type']  = array(
    'name' => 'Banner',
    'type' => 'banner',
    'description' => 'Add random banner\'s to be displayed on the pages. The number of banner\'s display is dependent on the banner type selected. ',
    'title_label' => 'Title',
    'body_label' => '',
    'min_word_count' => '0',
    'help' => '',
    'node_options' =>
    array(
      'status' => FALSE,
      'promote' => FALSE,
      'sticky' => FALSE,
      'revision' => FALSE,
    ),
    'language_content_type' => '0',
    'old_type' => 'banner',
    'orig_type' => '',
    'module' => 'node',
    'custom' => '1',
    'modified' => '1',
    'locked' => '0',
    'menu' =>
    array(
      'admin' => FALSE,
      'devel' => FALSE,
      'navigation' => FALSE,
      'secondary-links' => FALSE,
      'menu-isbanen-links' => FALSE,
      'primary-links' => FALSE,
    ),
    'event_nodeapi' => 'never',
  );
  $content['fields']  = array(
    0 =>
    array(
      'label' => 'Type',
      'field_name' => 'field_banner_type',
      'type' => 'text',
      'widget_type' => 'optionwidgets_buttons',
      'change' => 'Change basic information',
      'weight' => '-4',
      'description' => '',
      'default_value' =>
      array(
        0 =>
        array(
          'value' => 'Banner type I',
        ),
      ),
      'default_value_php' => '',
      'default_value_widget' => NULL,
      'group' => FALSE,
      'required' => 1,
      'multiple' => '0',
      'text_processing' => '0',
      'max_length' => '',
      'allowed_values' => 'Banner type I
    Banner type II',
      'allowed_values_php' => '',
      'op' => 'Save field settings',
      'module' => 'text',
      'widget_module' => 'optionwidgets',
      'columns' =>
      array(
        'value' =>
        array(
          'type' => 'text',
          'size' => 'big',
          'not NULL' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'display_settings' =>
      array(
        'label' =>
        array(
          'format' => 'above',
          'exclude' => 0,
        ),
        'teaser' =>
        array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' =>
        array(
          'format' => 'default',
          'exclude' => 0,
        ),
        4 =>
        array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'token' =>
        array(
          'format' => 'default',
          'exclude' => 0,
        ),
      ),
    ),
    1 =>
    array(
      'label' => 'Banner',
      'field_name' => 'field_banner_upload',
      'type' => 'filefield',
      'widget_type' => 'imagefield_widget',
      'change' => 'Change basic information',
      'weight' => '-3',
      'file_extensions' => 'png gif jpg jpeg',
      'progress_indicator' => 'bar',
      'file_path' => '',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'custom_alt' => 0,
      'alt' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'title' => '',
      'use_default_image' => 0,
      'default_image_upload' => '',
      'default_image' => NULL,
      'description' => '',
      'group' => FALSE,
      'required' => 1,
      'multiple' => '0',
      'list_field' => '0',
      'list_default' => 1,
      'description_field' => '0',
      'op' => 'Save field settings',
      'module' => 'filefield',
      'widget_module' => 'imagefield',
      'columns' =>
      array(
        'fid' =>
        array(
          'type' => 'int',
          'not NULL' => FALSE,
          'views' => TRUE,
        ),
        'list' =>
        array(
          'type' => 'int',
          'size' => 'tiny',
          'not NULL' => FALSE,
          'views' => TRUE,
        ),
        'data' =>
        array(
          'type' => 'text',
          'serialize' => TRUE,
          'views' => TRUE,
        ),
      ),
      'display_settings' =>
      array(
        'label' =>
        array(
          'format' => 'above',
          'exclude' => 0,
        ),
        'teaser' =>
        array(
          'format' => 'image_plain',
          'exclude' => 0,
        ),
        'full' =>
        array(
          'format' => 'image_plain',
          'exclude' => 0,
        ),
        4 =>
        array(
          'format' => 'image_plain',
          'exclude' => 0,
        ),
        'token' =>
        array(
          'format' => 'image_plain',
          'exclude' => 0,
        ),
      ),
    ),
    2 =>
    array(
      'label' => 'URL',
      'field_name' => 'field_url',
      'type' => 'text',
      'widget_type' => 'text_textfield',
      'change' => 'Change basic information',
      'weight' => '-2',
      'rows' => 5,
      'size' => '60',
      'description' => '',
      'default_value' =>
      array(
        0 =>
        array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_url][0][value',
        ),
      ),
      'default_value_php' => '',
      'default_value_widget' =>
      array(
        'field_url' =>
        array(
          0 =>
          array(
            'value' => '',
            '_error_element' => 'default_value_widget][field_url][0][value',
          ),
        ),
      ),
      'group' => FALSE,
      'required' => 0,
      'multiple' => '0',
      'text_processing' => '0',
      'max_length' => '',
      'allowed_values' => '',
      'allowed_values_php' => '',
      'op' => 'Save field settings',
      'module' => 'text',
      'widget_module' => 'text',
      'columns' =>
      array(
        'value' =>
        array(
          'type' => 'text',
          'size' => 'big',
          'not NULL' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'display_settings' =>
      array(
        'label' =>
        array(
          'format' => 'above',
          'exclude' => 0,
        ),
        'teaser' =>
        array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' =>
        array(
          'format' => 'default',
          'exclude' => 0,
        ),
        4 =>
        array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'token' =>
        array(
          'format' => 'default',
          'exclude' => 0,
        ),
      ),
    ),
  );
  $content['extra']  = array(
    'title' => '-5',
    'revision_information' => '0',
    'comment_settings' => '1',
    'menu' => '-1',
    'path' => '2',
  );

  return $content;
}

function _banner_cck_install() {
  // Get CCK content.
  $content = _banner_cck_export();

  // CCK content_copy.module may not be enabled, so make sure it is included.
  include_once './' . drupal_get_path('module', 'content') . '/modules/content_copy/content_copy.module';

  $form_state['values']['type_name'] = '<create>';
  $form_state['values']['macro'] = '$content = ' . var_export($content, TRUE) . ';';

  // form provided by content_copy.module
  drupal_execute('content_copy_import_form', $form_state);
  content_clear_type_cache();
}