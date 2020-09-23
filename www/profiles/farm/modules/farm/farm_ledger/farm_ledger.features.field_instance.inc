<?php
/**
 * @file
 * farm_ledger.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function farm_ledger_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'log-farm_purchase-field_farm_area'.
  $field_instances['log-farm_purchase-field_farm_area'] = array(
    'bundle' => 'farm_purchase',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What areas do this purchase pertain to?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_area',
    'label' => 'Районы',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_asset'.
  $field_instances['log-farm_purchase-field_farm_asset'] = array(
    'bundle' => 'farm_purchase',
    'deleted' => 0,
    'description' => 'What assets do this purchase log pertain to?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_asset',
    'label' => 'Активы',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference_view_widget',
      'settings' => array(
        'allow_duplicates' => 0,
        'close_modal' => 1,
        'pass_argument' => 1,
        'pass_arguments' => '',
        'rendered_entity' => 0,
        'view' => 'farm_asset_entityreference_view|entityreference_view_widget',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_files'.
  $field_instances['log-farm_purchase-field_farm_files'] = array(
    'bundle' => 'farm_purchase',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_files',
    'label' => 'Файлы',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'farm/log/purchase',
      'file_extensions' => '',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_filefield_widget',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_mfw',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_flags'.
  $field_instances['log-farm_purchase-field_farm_flags'] = array(
    'bundle' => 'farm_purchase',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Добавьте флаги в этот журнал, чтобы обеспечить лучшую сортировку и фильтрацию записей.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_flags',
    'label' => 'Флаги',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_images'.
  $field_instances['log-farm_purchase-field_farm_images'] = array(
    'bundle' => 'farm_purchase',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'thumbnail',
          'colorbox_node_style_first' => 'large',
        ),
        'type' => 'colorbox',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_images',
    'label' => 'Фотографии',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'farm/log/purchase',
      'file_extensions' => '',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_miw',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_inventory'.
  $field_instances['log-farm_purchase-field_farm_inventory'] = array(
    'bundle' => 'farm_purchase',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Используйте это для установки или корректировки уровней запасов активов вместе с этим журналом.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_inventory',
    'label' => 'Управление инвентарем',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_invoice_number'.
  $field_instances['log-farm_purchase-field_farm_invoice_number'] = array(
    'bundle' => 'farm_purchase',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_invoice_number',
    'label' => 'Invoice number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_log_category'.
  $field_instances['log-farm_purchase-field_farm_log_category'] = array(
    'bundle' => 'farm_purchase',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Используйте это, чтобы упорядочить ваши журналы по категориям для более легкого поиска и фильтрации позже.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_log_category',
    'label' => 'Категория журналов',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_log_owner'.
  $field_instances['log-farm_purchase-field_farm_log_owner'] = array(
    'bundle' => 'farm_purchase',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'При необходимости назначьте эту задачу одному или нескольким людям.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_log_owner',
    'label' => 'Назначено',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_lot_number'.
  $field_instances['log-farm_purchase-field_farm_lot_number'] = array(
    'bundle' => 'farm_purchase',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this purchase has a lot number associated with it, enter it here.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_lot_number',
    'label' => 'Purchase lot number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_notes'.
  $field_instances['log-farm_purchase-field_farm_notes'] = array(
    'bundle' => 'farm_purchase',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_notes',
    'label' => 'Заметки',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_quantity_units'.
  $field_instances['log-farm_purchase-field_farm_quantity_units'] = array(
    'bundle' => 'farm_purchase',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What is the unit of measurement for the quantity entered?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_quantity_units',
    'label' => 'Единица измерения',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_quantity_value'.
  $field_instances['log-farm_purchase-field_farm_quantity_value'] = array(
    'bundle' => 'farm_purchase',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'How many were purchased?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'fraction',
        'settings' => array(
          'auto_precision' => TRUE,
          'precision' => 0,
          'prefix_suffix' => TRUE,
        ),
        'type' => 'fraction_decimal',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_quantity_value',
    'label' => 'Количество',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fraction',
      'settings' => array(
        'auto_precision' => 1,
        'precision' => 0,
      ),
      'type' => 'fraction_decimal',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_seller'.
  $field_instances['log-farm_purchase-field_farm_seller'] = array(
    'bundle' => 'farm_purchase',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_seller',
    'label' => 'Seller',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_total_price'.
  $field_instances['log-farm_purchase-field_farm_total_price'] = array(
    'bundle' => 'farm_purchase',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'fraction',
        'settings' => array(
          'auto_precision' => TRUE,
          'precision' => 0,
          'prefix_suffix' => TRUE,
        ),
        'type' => 'fraction_decimal',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_total_price',
    'label' => 'Total price',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fraction',
      'settings' => array(
        'auto_precision' => 1,
        'precision' => 0,
      ),
      'type' => 'fraction_decimal',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'log-farm_purchase-field_farm_unit_price'.
  $field_instances['log-farm_purchase-field_farm_unit_price'] = array(
    'bundle' => 'farm_purchase',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'fraction',
        'settings' => array(
          'auto_precision' => TRUE,
          'precision' => 0,
          'prefix_suffix' => TRUE,
        ),
        'type' => 'fraction_decimal',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_unit_price',
    'label' => 'Unit price',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fraction',
      'settings' => array(
        'auto_precision' => 1,
        'precision' => 0,
      ),
      'type' => 'fraction_decimal',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_area'.
  $field_instances['log-farm_sale-field_farm_area'] = array(
    'bundle' => 'farm_sale',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What areas do this sale pertain to?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_area',
    'label' => 'Районы',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_asset'.
  $field_instances['log-farm_sale-field_farm_asset'] = array(
    'bundle' => 'farm_sale',
    'deleted' => 0,
    'description' => 'What assets do this sale log pertain to?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_asset',
    'label' => 'Активы',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference_view_widget',
      'settings' => array(
        'allow_duplicates' => 0,
        'close_modal' => 1,
        'pass_argument' => 1,
        'pass_arguments' => '',
        'rendered_entity' => 0,
        'view' => 'farm_asset_entityreference_view|entityreference_view_widget',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_customer'.
  $field_instances['log-farm_sale-field_farm_customer'] = array(
    'bundle' => 'farm_sale',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_customer',
    'label' => 'Customer',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_files'.
  $field_instances['log-farm_sale-field_farm_files'] = array(
    'bundle' => 'farm_sale',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_files',
    'label' => 'Файлы',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'farm/log/sale',
      'file_extensions' => '',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_filefield_widget',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_mfw',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_flags'.
  $field_instances['log-farm_sale-field_farm_flags'] = array(
    'bundle' => 'farm_sale',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Добавьте флаги в этот журнал, чтобы обеспечить лучшую сортировку и фильтрацию записей.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_flags',
    'label' => 'Флаги',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_images'.
  $field_instances['log-farm_sale-field_farm_images'] = array(
    'bundle' => 'farm_sale',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'thumbnail',
          'colorbox_node_style_first' => 'large',
        ),
        'type' => 'colorbox',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_images',
    'label' => 'Фотографии',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'farm/log/sale',
      'file_extensions' => '',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_miw',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_inventory'.
  $field_instances['log-farm_sale-field_farm_inventory'] = array(
    'bundle' => 'farm_sale',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Используйте это для установки или корректировки уровней запасов активов вместе с этим журналом.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_inventory',
    'label' => 'Управление инвентарем',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_invoice_number'.
  $field_instances['log-farm_sale-field_farm_invoice_number'] = array(
    'bundle' => 'farm_sale',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_invoice_number',
    'label' => 'Invoice number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_log_category'.
  $field_instances['log-farm_sale-field_farm_log_category'] = array(
    'bundle' => 'farm_sale',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Используйте это, чтобы упорядочить ваши журналы по категориям для более легкого поиска и фильтрации позже.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_log_category',
    'label' => 'Категория журналов',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_log_owner'.
  $field_instances['log-farm_sale-field_farm_log_owner'] = array(
    'bundle' => 'farm_sale',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'При необходимости назначьте эту задачу одному или нескольким людям.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_log_owner',
    'label' => 'Назначено',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_lot_number'.
  $field_instances['log-farm_sale-field_farm_lot_number'] = array(
    'bundle' => 'farm_sale',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this sale has a lot number associated with it, enter it here.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_lot_number',
    'label' => 'Sale lot number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_notes'.
  $field_instances['log-farm_sale-field_farm_notes'] = array(
    'bundle' => 'farm_sale',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_notes',
    'label' => 'Заметки',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_quantity_units'.
  $field_instances['log-farm_sale-field_farm_quantity_units'] = array(
    'bundle' => 'farm_sale',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What is the unit of measurement for the quantity entered?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_quantity_units',
    'label' => 'Единица измерения',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_quantity_value'.
  $field_instances['log-farm_sale-field_farm_quantity_value'] = array(
    'bundle' => 'farm_sale',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'How many were sold?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'fraction',
        'settings' => array(
          'auto_precision' => TRUE,
          'precision' => 0,
          'prefix_suffix' => TRUE,
        ),
        'type' => 'fraction_decimal',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_quantity_value',
    'label' => 'Количество',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fraction',
      'settings' => array(
        'auto_precision' => 1,
        'precision' => 0,
      ),
      'type' => 'fraction_decimal',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_total_price'.
  $field_instances['log-farm_sale-field_farm_total_price'] = array(
    'bundle' => 'farm_sale',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'fraction',
        'settings' => array(
          'auto_precision' => TRUE,
          'precision' => 0,
          'prefix_suffix' => TRUE,
        ),
        'type' => 'fraction_decimal',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_total_price',
    'label' => 'Total price',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fraction',
      'settings' => array(
        'auto_precision' => 1,
        'precision' => 0,
      ),
      'type' => 'fraction_decimal',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'log-farm_sale-field_farm_unit_price'.
  $field_instances['log-farm_sale-field_farm_unit_price'] = array(
    'bundle' => 'farm_sale',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'fraction',
        'settings' => array(
          'auto_precision' => TRUE,
          'precision' => 0,
          'prefix_suffix' => TRUE,
        ),
        'type' => 'fraction_decimal',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_unit_price',
    'label' => 'Unit price',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fraction',
      'settings' => array(
        'auto_precision' => 1,
        'precision' => 0,
      ),
      'type' => 'fraction_decimal',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add flags to this log to enable better sorting and filtering of records.');
  t('Areas');
  t('Assets');
  t('Назначено');
  t('Customer');
  t('Файлы');
  t('Флаги');
  t('How many were purchased?');
  t('How many were sold?');
  t('If this purchase has a lot number associated with it, enter it here.');
  t('If this sale has a lot number associated with it, enter it here.');
  t('Inventory adjustments');
  t('Invoice number');
  t('Логи');
  t('Заметки');
  t('Optionally assign this task to one or more people.');
  t('Photos');
  t('Purchase lot number');
  t('Quantity');
  t('Sale lot number');
  t('Seller');
  t('Total price');
  t('Unit price');
  t('Units');
  t('Use this to organize your logs into categories for easier searching and filtering later.');
  t('Используйте это для установки или корректировки уровней запасов активов вместе с этим журналом.');
  t('What areas do this purchase pertain to?');
  t('What areas do this sale pertain to?');
  t('What assets do this purchase log pertain to?');
  t('What assets do this sale log pertain to?');
  t('What is the unit of measurement for the quantity entered?');

  return $field_instances;
}
