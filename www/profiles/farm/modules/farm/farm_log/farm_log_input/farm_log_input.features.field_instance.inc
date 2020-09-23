<?php
/**
 * @file
 * farm_log_input.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function farm_log_input_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'log-farm_input-field_farm_area'.
  $field_instances['log-farm_input-field_farm_area'] = array(
    'bundle' => 'farm_input',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'К каким областям применяется эти данные?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_asset'.
  $field_instances['log-farm_input-field_farm_asset'] = array(
    'bundle' => 'farm_input',
    'deleted' => 0,
    'description' => 'К каким активам относится этот журнал?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_date_purchase'.
  $field_instances['log-farm_input-field_farm_date_purchase'] = array(
    'bundle' => 'farm_input',
    'deleted' => 0,
    'description' => 'Когда был приобретен этот вход (если применимо)?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_date_purchase',
    'label' => 'Дата приобретения',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-10:+3',
      ),
      'type' => 'date_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_files'.
  $field_instances['log-farm_input-field_farm_files'] = array(
    'bundle' => 'farm_input',
    'default_value' => array(),
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
      'file_directory' => 'farm/log/input',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_flags'.
  $field_instances['log-farm_input-field_farm_flags'] = array(
    'bundle' => 'farm_input',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_geofield'.
  $field_instances['log-farm_input-field_farm_geofield'] = array(
    'bundle' => 'farm_input',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Это поле является необязательным. Он позволяет хранить геопространственные данные вместе с этими входными данными.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'farm_map_geofield',
        'settings' => array(),
        'type' => 'farm_map_geofield',
        'weight' => 17,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_images'.
  $field_instances['log-farm_input-field_farm_images'] = array(
    'bundle' => 'farm_input',
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
        'weight' => 15,
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
      'file_directory' => 'farm/log/input',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_input_method'.
  $field_instances['log-farm_input-field_farm_input_method'] = array(
    'bundle' => 'farm_input',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Как применяются данные входные значения?',
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
    'field_name' => 'field_farm_input_method',
    'label' => 'Метод применения',
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

  // Exported field_instance: 'log-farm_input-field_farm_input_purpose'.
  $field_instances['log-farm_input-field_farm_input_purpose'] = array(
    'bundle' => 'farm_input',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Какова цель этих входных данных?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_farm_input_purpose',
    'label' => 'Назначение',
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

  // Exported field_instance: 'log-farm_input-field_farm_input_source'.
  $field_instances['log-farm_input-field_farm_input_source'] = array(
    'bundle' => 'farm_input',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Где были получены входные данные?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_input_source',
    'label' => 'Производитель',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_inventory'.
  $field_instances['log-farm_input-field_farm_inventory'] = array(
    'bundle' => 'farm_input',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_log_category'.
  $field_instances['log-farm_input-field_farm_log_category'] = array(
    'bundle' => 'farm_input',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_log_owner'.
  $field_instances['log-farm_input-field_farm_log_owner'] = array(
    'bundle' => 'farm_input',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_lot_number'.
  $field_instances['log-farm_input-field_farm_lot_number'] = array(
    'bundle' => 'farm_input',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Если производитель присвоил этому входу номер партии, введите его здесь.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_lot_number',
    'label' => 'Номер лота',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_material'.
  $field_instances['log-farm_input-field_farm_material'] = array(
    'bundle' => 'farm_input',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Какие материалы применяются? При вводе текста у вас будет возможность выбора из материалов, которые вы вводили в прошлом. Разделите несколько материалов запятой.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_material',
    'label' => 'Материалы',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_movement'.
  $field_instances['log-farm_input-field_farm_movement'] = array(
    'bundle' => 'farm_input',
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
        'weight' => 4,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_notes'.
  $field_instances['log-farm_input-field_farm_notes'] = array(
    'bundle' => 'farm_input',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'log-farm_input-field_farm_quantity'.
  $field_instances['log-farm_input-field_farm_quantity'] = array(
    'bundle' => 'farm_input',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Опишите количество этих входных данных, используя значение, единицу измерения и меру. Например, если вы использовали 10 галлонов жидкого удобрения, введите "10" в поле Значение и "галлоны" в поле единицы измерения. При вводе единицы измерения у вас будет возможность выбора из единиц измерения, которые вы вводили в прошлом.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 1,
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
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add flags to this log to enable better sorting and filtering of records.');
  t('Application method');
  t('Areas');
  t('Assets');
  t('Назначено');
  t('Date purchased');
  t('Describe the quantity of this input, using a value, unit, and measure. For example, if you used 10 gallons of liquid fertilizer, enter "10" in the Value field, and "gallons" in the Units field. As you type the unit, you will have the option of selecting from units that you\'ve entered in the past.');
  t('Файлы');
  t('Флаги');
  t('Geometry');
  t('How was this input applied?');
  t('If the manufacturer assigned this input a lot number, enter it here.');
  t('Input lot number');
  t('Inventory adjustments');
  t('Логи');
  t('Materials');
  t('Movement');
  t('Заметки');
  t('Optionally assign this task to one or more people.');
  t('Photos');
  t('Purpose');
  t('Quantity');
  t('Source/manufacturer');
  t('This field is optional. It allows you to store geospatial data along with this input.');
  t('Используйте эти поля для записи перемещения с помощью этой записи журнала. Это будет использоваться для определения местоположения любых ссылочных активов. Текущее местоположение любого актива определяется по последнему завершенному журналу движения. Требуется только поле "Кому".');
  t('Use this to organize your logs into categories for easier searching and filtering later.');
  t('Используйте это для установки или корректировки уровней запасов активов вместе с этим журналом.');
  t('What areas is this input being applied to?');
  t('What assets do this input log pertain to?');
  t('What materials are being applied? As you type, you will have the option of selecting from materials that you\'ve entered in the past. Separate multiple materials with a comma.');
  t('What was the purpose of this input?');
  t('When was this input purchased (if applicable)?');
  t('Where was this input obtained? Who manufactured it?');

  return $field_instances;
}
