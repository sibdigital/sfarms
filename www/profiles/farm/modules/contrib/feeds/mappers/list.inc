<?php

/**
 * @file
 * On behalf implementation of Feeds mapping API for list.module.
 */

/**
 * Implements hook_feeds_processor_targets().
 */
function list_feeds_processor_targets($entity_type, $bundle_name) {
  $targets = array();

  foreach (field_info_instances($entity_type, $bundle_name) as $name => $instance) {
    $info = field_info_field($name);

    switch ($info['type']) {

      case 'list_integer':
      case 'list_float':
        $targets[$name] = array(
          'name' => check_plain($instance['label']),
          'callback' => 'number_feeds_set_target',
          'description' => t('The @label field of the entity.', array('@label' => $instance['label'])),
        );
        break;

      case 'list_boolean':
        $targets[$name] = array(
          'name' => check_plain($instance['label']),
          'callback' => 'list_feeds_set_boolean_target',
          'description' => t('The @label field of the entity.', array('@label' => $instance['label'])),
        );
        break;

      case 'list_text':
        $targets[$name] = array(
          'name' => check_plain($instance['label']),
          'callback' => 'text_feeds_set_target',
          'description' => t('The @label field of the entity.', array('@label' => $instance['label'])),
        );
        break;
    }
  }

  return $targets;
}

/**
 * Callback for setting list_boolean fields.
 */
function list_feeds_set_boolean_target(FeedsSource $source, $entity, $target, array $values, array $mapping) {
  $language = $mapping['language'];

  $allowed_values = FALSE;
  $info = field_info_field($target);
  if (!empty($info['settings'])) {
    if (!empty($info['settings']['allowed_values']) || !empty($info['settings']['allowed_values_function'])) {
      $allowed_values = list_allowed_values($info);
    }
  }

  $field = isset($entity->$target) ? $entity->$target : array($language => array());

  foreach ($values as $value) {

    if (is_object($value) && ($value instanceof FeedsElement)) {
      $value = $value->getValue();
    }

    // Special checks for list fields with allowed values.
    if ($allowed_values) {
      if (!in_array($value, array_keys($allowed_values))) {
        // If the value is not a key of the allowed values, check to see if it
        // might be a value instead.
        if (in_array($value, array_values($allowed_values))) {
          // If so, update the value to that corresponding key.
          $value = array_search($value, $allowed_values);
        }
      }
    }

    if (is_string($value) && strlen($value) == 0) {
      // Don't convert an empty string to a boolean.
      continue;
    }
    if (is_null($value)) {
      // Don't convert a NULL value to a boolean.
      continue;
    }

    $field[$language][] = array('value' => (int) (bool) $value);
  }

  $entity->$target = $field;
}
