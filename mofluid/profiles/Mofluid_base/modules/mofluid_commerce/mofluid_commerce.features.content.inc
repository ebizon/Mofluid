<?php

/**
 * Implementation of hook_content_default_fields().
 */
function mofluid_commerce_content_default_fields() {
  $fields = array();

  // Exported field: field_image_cache
  $fields['page-field_image_cache'] = array(
    'field_name' => 'field_image_cache',
    'type_name' => 'page',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
      ),
      'full' => array(
        'format' => 'hidden',
      ),
      '4' => array(
        'format' => 'hidden',
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'gif jpg png',
      'file_path' => NULL,
      'progress_indicator' => NULL,
      'max_filesize_per_file' => NULL,
      'max_filesize_per_node' => NULL,
      'max_resolution' => NULL,
      'min_resolution' => NULL,
      'alt' => NULL,
      'custom_alt' => 1,
      'title' => NULL,
      'custom_title' => 1,
      'title_type' => NULL,
      'default_image' => NULL,
      'use_default_image' => NULL,
      'filefield_sources' => NULL,
      'filefield_source_autocomplete' => NULL,
      'filefield_source_attach_path' => NULL,
      'filefield_source_attach_absolute' => NULL,
      'filefield_source_attach_mode' => NULL,
      'label' => 'Image',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_image_cache
  $fields['product-field_image_cache'] = array(
    'field_name' => 'field_image_cache',
    'type_name' => 'product',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
      ),
      'full' => array(
        'format' => 'hidden',
      ),
      '4' => array(
        'format' => 'hidden',
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'gif jpg png',
      'file_path' => NULL,
      'progress_indicator' => NULL,
      'max_filesize_per_file' => NULL,
      'max_filesize_per_node' => NULL,
      'max_resolution' => NULL,
      'min_resolution' => NULL,
      'alt' => NULL,
      'custom_alt' => 1,
      'title' => NULL,
      'custom_title' => 1,
      'title_type' => NULL,
      'default_image' => NULL,
      'use_default_image' => NULL,
      'label' => 'Image',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_slider_images
  $fields['slider-field_slider_images'] = array(
    'field_name' => 'field_slider_images',
    'type_name' => 'slider',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'filefield_sources' => array(
        'remote' => FALSE,
        'reference' => FALSE,
        'attach' => FALSE,
      ),
      'filefield_source_autocomplete' => '0',
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => 0,
      'filefield_source_attach_mode' => 'move',
      'label' => 'Slider Images',
      'weight' => '31',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');
  t('Slider Images');

  return $fields;
}
