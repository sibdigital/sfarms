<?php
/**
 * @file
 * farm_area.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farm_area_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_description|taxonomy_term|farm_areas|form';
  $field_group->group_name = 'group_farm_description';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'farm_areas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Описание',
    'weight' => '3',
    'children' => array(
      0 => 'description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Описание',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-farm-description field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_farm_description|taxonomy_term|farm_areas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_files|taxonomy_term|farm_areas|form';
  $field_group->group_name = 'group_farm_files';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'farm_areas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'File attachments',
    'weight' => '4',
    'children' => array(
      0 => 'field_farm_files',
      1 => 'field_farm_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'File attachments',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-farm-files field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_farm_files|taxonomy_term|farm_areas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_general|taxonomy_term|farm_areas|form';
  $field_group->group_name = 'group_farm_general';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'farm_areas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General information',
    'weight' => '0',
    'children' => array(
      0 => 'field_farm_area_type',
      1 => 'field_farm_flags',
      2 => 'name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-farm-general field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_farm_general|taxonomy_term|farm_areas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_geometry|taxonomy_term|farm_areas|form';
  $field_group->group_name = 'group_farm_geometry';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'farm_areas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Геометрия',
    'weight' => '2',
    'children' => array(
      0 => 'field_farm_geofield',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Геометрия',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-farm-geometry field-group-fieldset',
        'description' => t('Use this field to define the geometry of this area on a map. Points, lines, circles, and polygons (free-form shapes) can be drawn using the controls below. To draw a polygon, add a point at each corner, and double-click on the last one to close the shape. For more information about mapping areas in farmOS, see <a href="@area-doc-url">@area-doc-url</a>', array('@area-doc-url' => 'https://farmos.org/guide/areas')),
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_farm_geometry|taxonomy_term|farm_areas|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Описание');
  t('File attachments');
  t('General information');
  t('Geometry');

  return $field_groups;
}