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
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'field_authors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<span class="label">By </span>',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_link_single' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Find at Stanford Library',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'cta-wrapper',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'cta-red',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'cta-link field-item ',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_link_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Buy This Book',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-buy-book',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_selected_reviews' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Selected Editorial Reviews',
          'lb-el' => 'div',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
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
        0 => 'group_wrapper_meta',
        1 => 'field_publisher',
        2 => 'field_place_of_publication',
        3 => 'field_year_of_publication',
        4 => 'field_academic_area_unlimited',
        5 => 'field_business_insight_topic',
        6 => 'field_region',
        7 => 'field_company_organization',
        8 => 'field_industry',
        9 => 'field_image_single_public',
        10 => 'field_description',
        11 => 'title',
        12 => 'field_links_attachments',
        13 => 'field_authors',
        14 => 'group_wrapper_publisher',
        15 => 'field_selected_reviews',
        16 => 'group_wrapper_taxonomy',
      ),
      'right' => array(
        17 => 'gsb_feature_book_ct_faculty_authors',
        18 => 'field_link_single',
        19 => 'field_link_unlimited',
      ),
    ),
    'fields' => array(
      'group_wrapper_meta' => 'left',
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
      'title' => 'left',
      'field_links_attachments' => 'left',
      'field_authors' => 'left',
      'group_wrapper_publisher' => 'left',
      'field_selected_reviews' => 'left',
      'group_wrapper_taxonomy' => 'left',
      'gsb_feature_book_ct_faculty_authors' => 'right',
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
