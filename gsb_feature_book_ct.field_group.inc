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
  $field_group->identifier = 'group_academic_area|node|book|form';
  $field_group->group_name = 'group_academic_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Academic Area',
    'weight' => '36',
    'children' => array(
      0 => 'field_academic_area_unlimited',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_academic_area|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_topics|node|book|form';
  $field_group->group_name = 'group_additional_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Additional Topics',
    'weight' => '37',
    'children' => array(
      0 => 'field_business_insight_topic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_additional_topics|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alumni_story|node|book|form';
  $field_group->group_name = 'group_alumni_story';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alumni/Past Participant Mention',
    'weight' => '15',
    'children' => array(
      0 => 'field_alumni_story',
      1 => 'field_program_unlimited',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_alumni_story|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_centers|node|book|form';
  $field_group->group_name = 'group_centers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Centers',
    'weight' => '39',
    'children' => array(
      0 => 'field_centers_research_programs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_centers|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication_date|node|book|form';
  $field_group->group_name = 'group_publication_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication Date',
    'weight' => '5',
    'children' => array(
      0 => 'field_year_of_publication',
      1 => 'field_month',
      2 => 'field_pub_date_day',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Publication Date',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_publication_date|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_regions_of_interest|node|book|form';
  $field_group->group_name = 'group_regions_of_interest';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Regions of Interest',
    'weight' => '38',
    'children' => array(
      0 => 'field_region_of_interest',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_regions_of_interest|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|book|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '13',
    'children' => array(
      0 => 'field_link_unlimited',
      1 => 'field_person_ref_unlimited',
      2 => 'field_related_idea_story',
      3 => 'field_related_other_unlimited',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|book|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '40',
    'children' => array(
      0 => 'field_tag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tags|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|book|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '16',
    'children' => array(
      0 => 'group_academic_area',
      1 => 'group_additional_topics',
      2 => 'group_centers',
      3 => 'group_regions_of_interest',
      4 => 'group_tags',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
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
      4 => 'group_wrapper_topics',
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
      3 => 'field_month',
      4 => 'field_pub_date_day',
    ),
    'format_type' => 'div',
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
  $field_group->identifier = 'group_wrapper_topics|node|book|default';
  $field_group->group_name = 'group_wrapper_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_meta';
  $field_group->data = array(
    'label' => 'Topics',
    'weight' => '14',
    'children' => array(
      0 => 'field_academic_area_unlimited',
      1 => 'field_business_insight_topic',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Topics',
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
  $export['group_wrapper_topics|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_topics|node|book|teaser_listing';
  $field_group->group_name = 'group_wrapper_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'teaser_listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics',
    'weight' => '5',
    'children' => array(
      0 => 'field_academic_area_unlimited',
      1 => 'field_business_insight_topic',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'show_label' => 1,
        'label_element' => 'h3',
        'classes' => '',
      ),
    ),
  );
  $export['group_wrapper_topics|node|book|teaser_listing'] = $field_group;

  return $export;
}
