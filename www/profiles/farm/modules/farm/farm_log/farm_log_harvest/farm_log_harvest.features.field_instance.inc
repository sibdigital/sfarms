<?php
/**
 * @file
 * farm_log_harvest.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function farm_log_harvest_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'log-farm_harvest-field_farm_area'.
  $field_instances['log-farm_harvest-field_farm_area'] = array(
    'bundle' => 'farm_harvest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'В каких районах идет этот сбор урожая?',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'log-farm_harvest-field_farm_asset'.
  $field_instances['log-farm_harvest-field_farm_asset'] = array(
    'bundle' => 'farm_harvest',
    'deleted' => 0,
    'description' => 'К каким активам относится этот журнал сбора урожая?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'log-farm_harvest-field_farm_files'.
  $field_instances['log-farm_harvest-field_farm_files'] = array(
    'bundle' => 'farm_harvest',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 11,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_files',
    'label' => 'Файлы',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'farm/log/harvest',
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

  // Exported field_instance: 'log-farm_harvest-field_farm_flags'.
  $field_instances['log-farm_harvest-field_farm_flags'] = array(
    'bundle' => 'farm_harvest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Добавьте флаги в этот журнал, чтобы обеспечить лучшую сортировку и фильтрацию записей.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'log-farm_harvest-field_farm_geofield'.
  $field_instances['log-farm_harvest-field_farm_geofield'] = array(
    'bundle' => 'farm_harvest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Это поле является необязательным. Он позволяет хранить геопространственные данные вместе с этим урожаем.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'farm_map_geofield',
        'settings' => array(),
        'type' => 'farm_map_geofield',
        'weight' => 12,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_geofield',
    'label' => 'Геометрия',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'farm_map_geofield',
      'settings' => array(
        'delta_handling' => 'default',
        'geocoder_field' => 'field_farm_files',
        'geocoder_handler' => 'kml',
        'handler_settings' => array(
          'google' => array(
            'all_results' => 0,
            'geometry_type' => 'point',
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
        'use_geocoder' => 1,
      ),
      'type' => 'farm_map_geofield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'log-farm_harvest-field_farm_images'.
  $field_instances['log-farm_harvest-field_farm_images'] = array(
    'bundle' => 'farm_harvest',
    'default_value' => array(),
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
        'weight' => 10,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_images',
    'label' => 'Фотографии',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'farm/log/harvest',
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

  // Exported field_instance: 'log-farm_harvest-field_farm_inventory'.
  $field_instances['log-farm_harvest-field_farm_inventory'] = array(
    'bundle' => 'farm_harvest',
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
        'weight' => 4,
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
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'log-farm_harvest-field_farm_log_category'.
  $field_instances['log-farm_harvest-field_farm_log_category'] = array(
    'bundle' => 'farm_harvest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Используйте это, чтобы упорядочить ваши журналы по категориям для более легкого поиска и фильтрации позже.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 8,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'log-farm_harvest-field_farm_log_owner'.
  $field_instances['log-farm_harvest-field_farm_log_owner'] = array(
    'bundle' => 'farm_harvest',
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
        'weight' => 9,
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

  // Exported field_instance: 'log-farm_harvest-field_farm_lot_number'.
  $field_instances['log-farm_harvest-field_farm_lot_number'] = array(
    'bundle' => 'farm_harvest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Если этот урожай является частью партии или партии, введите здесь номер партии.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_lot_number',
    'label' => 'Номер партии урожая',
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

  // Exported field_instance: 'log-farm_harvest-field_farm_movement'.
  $field_instances['log-farm_harvest-field_farm_movement'] = array(
    'bundle' => 'farm_harvest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Используйте эти поля для записи перемещения с помощью этой записи журнала. Это будет использоваться для определения местоположения любых ссылочных активов. Текущее местоположение любого актива определяется по последнему завершенному журналу движения. Требуется только поле "Кому".',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_movement',
    'label' => 'Движение',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'log-farm_harvest-field_farm_notes'.
  $field_instances['log-farm_harvest-field_farm_notes'] = array(
    'bundle' => 'farm_harvest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'log-farm_harvest-field_farm_quantity'.
  $field_instances['log-farm_harvest-field_farm_quantity'] = array(
    'bundle' => 'farm_harvest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Опишите количество этого урожая, используя значение, единицу и меру. Например, если вы собрали 100 фунтов картофеля, введите "100 "в поле Значение," фунты "в поле единицы измерения и" вес " в поле мера. При вводе единицы измерения у вас будет возможность выбора из единиц измерения, введенных в прошлом.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_quantity',
    'label' => 'Количество',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add flags to this log to enable better sorting and filtering of records.');
  t('Areas');
  t('Assets');
  t('Назначено');
  t('Describe the quantity of this harvest, using a value, unit, and measure. For example, if you harvested 100 pounds of potatoes, enter "100" in the Value field, "lbs" in the Units field, and "Weight" in the Measure field. As you type the unit, you will have the option of selecting from units that you\'ve entered in the past.');
  t('Файлы');
  t('Флаги');
  t('Geometry');
  t('Harvest lot number');
  t('If this harvest is part of a batch or lot, enter the lot number here.');
  t('Inventory adjustments');
  t('Логи');
  t('Movement');
  t('Заметки');
  t('Optionally assign this task to one or more people.');
  t('Photos');
  t('Quantity');
  t('This field is optional. It allows you to store geospatial data along with this harvest.');
  t('Используйте эти поля для записи перемещения с помощью этой записи журнала. Это будет использоваться для определения местоположения любых ссылочных активов. Текущее местоположение любого актива определяется по последнему завершенному журналу движения. Требуется только поле "Кому".');
  t('Use this to organize your logs into categories for easier searching and filtering later.');
  t('Используйте это для установки или корректировки уровней запасов активов вместе с этим журналом.');
  t('What areas is this harvest taking place in?');
  t('What assets do this harvest log pertain to?');

  return $field_instances;
}
