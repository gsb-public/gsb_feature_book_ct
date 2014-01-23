<?php
/**
 * @file
 * gsb_feature_book_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_book_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alumni_name|node|book|form';
  $field_group->group_name = 'group_alumni_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_alumni_story';
  $field_group->data = '';
  $export['group_alumni_name|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alumni_story|node|book|form';
  $field_group->group_name = 'group_alumni_story';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_alumni_story|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|book|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_taxonomy|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_meta|node|book|default';
  $field_group->group_name = 'group_wrapper_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Book meta wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_authors',
      1 => 'field_image_single_public',
      2 => 'title',
      3 => 'group_wrapper_publisher',
      4 => 'group_wrapper_taxonomy',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Book meta wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_meta|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_publisher|node|book|default';
  $field_group->group_name = 'group_wrapper_publisher';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_meta';
  $field_group->data = array(
    'label' => 'Publisher wrapper',
    'weight' => '13',
    'children' => array(
      0 => 'field_place_of_publication',
      1 => 'field_publisher',
      2 => 'field_year_of_publication',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Publisher wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_publisher|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_taxonomy|node|book|default';
  $field_group->group_name = 'group_wrapper_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_meta';
  $field_group->data = array(
    'label' => 'Taxonomy wrapper',
    'weight' => '14',
    'children' => array(
      0 => 'field_academic_area_unlimited',
      1 => 'field_business_insight_topic',
      2 => 'field_company_organization',
      3 => 'field_industry',
      4 => 'field_region',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Taxonomy wrapper',
      'instance_settings' => array(
        'item_count' => '0',
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_taxonomy|node|book|default'] = $field_group;

  return $export;
}
