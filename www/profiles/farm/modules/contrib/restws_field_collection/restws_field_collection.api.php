<?php

/**
 * @file
 * Hooks provided by restws_field_collection.
 *
 * This file contains no working PHP code; it exists to provide additional
 * documentation for doxygen as well as to document hooks in the standard
 * Drupal manner.
 */

/**
 * @defgroup restws_field_collection RESTful Web Services Field Collection
 * module integrations.
 *
 * Module integrations with the restws_field_collection module.
 */

/**
 * @defgroup restws_field_collection_hooks RESTful Web Services Field
 * Collection's hooks
 * @{
 * Hooks that can be implemented by other modules in order to extend restws_field_collection.
 */

/**
 * Provide information about a field collection.
 */
function hook_restws_field_collection_info() {
  return array(

    // Create an array of information about the field collection, keyed by the
    // field collection's field name.
    'field_mycollection' => array(

      // Give the field collection an alias that will be used in restws JSON.
      'alias' => 'mycollection',

      // Give the field collection a label.
      'label' => t('My Collection'),

      // If this field supports multiple values, set this to TRUE.
      'multiple' => TRUE,

      // Define the fields in the field collection.
      'fields' => array(

        // Map "foo" to "field_mycollection_foo" text field.
        'foo' => array(

          // Specify the machine name of the field this maps to.
          'field_name' => 'field_mycollection_foo',

          // Give the field a label.
          'field_label' => t('Foo'),

          // Specify the type of field. See drupal.org/node/905580.
          'field_type' => 'text',

          // Specify the name of the property that values are saved to.
          // This will be "value" in most cases, but different field types have
          // different requirements. See the entity reference example below.
          'field_value' => 'value',

          // If this field supports multiple values, set this to TRUE.
          'multiple' => TRUE,
        ),

        // Map "node" to "field_mycollection_node" entity reference field.
        'node' => array(
          'field_name' => 'field_mycollection_node',
          'field_label' => t('Node reference'),
          'field_type' => 'node',
          'field_value' => 'target_id',
        ),
      ),
    ),
  );
}

/**
 * @}
 */
