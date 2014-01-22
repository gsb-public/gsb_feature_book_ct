<?php
/**
 * @file
 * gsb_feature_book_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_book_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|book|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'book';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|book|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_book_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|book|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'book';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_authors',
        2 => 'field_publisher',
        3 => 'field_place_of_publication',
        4 => 'field_year_of_publication',
        5 => 'field_academic_area_unlimited',
        6 => 'field_business_insight_topic',
        7 => 'field_region',
        8 => 'field_company_organization',
        9 => 'field_industry',
        10 => 'field_image_single_public',
        11 => 'field_description',
        12 => 'field_links_attachments',
        13 => 'field_selected_reviews',
      ),
      'right' => array(
        14 => 'field_link_single',
        15 => 'field_link_unlimited',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_authors' => 'left',
      'field_publisher' => 'left',
      'field_place_of_publication' => 'left',
      'field_year_of_publication' => 'left',
      'field_academic_area_unlimited' => 'left',
      'field_business_insight_topic' => 'left',
      'field_region' => 'left',
      'field_company_organization' => 'left',
      'field_industry' => 'left',
      'field_image_single_public' => 'left',
      'field_description' => 'left',
      'field_links_attachments' => 'left',
      'field_selected_reviews' => 'left',
      'field_link_single' => 'right',
      'field_link_unlimited' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|book|default'] = $ds_layout;

  return $export;
}
