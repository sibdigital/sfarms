<?php
/**
 * @file
 * farm_crop.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function farm_crop_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'farm_asset-planting-field_farm_crop'.
  $field_instances['farm_asset-planting-field_farm_crop'] = array(
    'bundle' => 'planting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Введите культуру / сорт, для которого производится посадка. При вводе текста у вас будет возможность выбора из культур/сортов, которые вы ввели в прошлом.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'farm_asset',
    'field_name' => 'field_farm_crop',
    'label' => 'Культура',
    'required' => 1,
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

  // Exported field_instance: 'farm_asset-planting-field_farm_description'.
  $field_instances['farm_asset-planting-field_farm_description'] = array(
    'bundle' => 'planting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'farm_asset',
    'field_name' => 'field_farm_description',
    'label' => 'Описание',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'farm_asset-planting-field_farm_files'.
  $field_instances['farm_asset-planting-field_farm_files'] = array(
    'bundle' => 'planting',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'farm_asset',
    'field_name' => 'field_farm_files',
    'label' => 'Файлы',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'farm/asset/planting',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'farm_asset-planting-field_farm_flags'.
  $field_instances['farm_asset-planting-field_farm_flags'] = array(
    'bundle' => 'planting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Добавьте флаги к этому ресурсу, чтобы улучшить сортировку и фильтрацию записей.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'farm_asset',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'farm_asset-planting-field_farm_images'.
  $field_instances['farm_asset-planting-field_farm_images'] = array(
    'bundle' => 'planting',
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
        'weight' => 5,
      ),
    ),
    'entity_type' => 'farm_asset',
    'field_name' => 'field_farm_images',
    'label' => 'Фотографии',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'farm/asset/planting',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'farm_asset-planting-field_farm_parent'.
  $field_instances['farm_asset-planting-field_farm_parent'] = array(
    'bundle' => 'planting',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'Укажите родителей этой посадки.',
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
    ),
    'entity_type' => 'farm_asset',
    'field_name' => 'field_farm_parent',
    'label' => 'Родители',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'farm_asset-planting-field_farm_season'.
  $field_instances['farm_asset-planting-field_farm_season'] = array(
    'bundle' => 'planting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Назначить растение для посадки. Вы можете управлять опциями ' . l('Посадки', 'admin/structure/taxonomy/farm_season') . '.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'farm_asset',
    'field_name' => 'field_farm_season',
    'label' => 'Посадка',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'log-farm_seeding-field_farm_asset'.
  $field_instances['log-farm_seeding-field_farm_asset'] = array(
    'bundle' => 'farm_seeding',
    'deleted' => 0,
    'description' => 'К какой посадке относится этот посевной журнал?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_asset',
    'label' => 'Посадка',
    'required' => 1,
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
      'weight' => -8,
    ),
  );

  // Exported field_instance: 'log-farm_seeding-field_farm_files'.
  $field_instances['log-farm_seeding-field_farm_files'] = array(
    'bundle' => 'farm_seeding',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_files',
    'label' => 'Файлы',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'farm/log/seeding',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'log-farm_seeding-field_farm_flags'.
  $field_instances['log-farm_seeding-field_farm_flags'] = array(
    'bundle' => 'farm_seeding',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Добавьте флаги в этот журнал, чтобы обеспечить лучшую сортировку и фильтрацию записей.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
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
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'log-farm_seeding-field_farm_images'.
  $field_instances['log-farm_seeding-field_farm_images'] = array(
    'bundle' => 'farm_seeding',
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
        'weight' => 11,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_images',
    'label' => 'Фотографии',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'farm/log/seeding',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'log-farm_seeding-field_farm_inventory'.
  $field_instances['log-farm_seeding-field_farm_inventory'] = array(
    'bundle' => 'farm_seeding',
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
        'weight' => 6,
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

  // Exported field_instance: 'log-farm_seeding-field_farm_log_category'.
  $field_instances['log-farm_seeding-field_farm_log_category'] = array(
    'bundle' => 'farm_seeding',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Используйте это, чтобы упорядочить ваши журналы по категориям для более легкого поиска и фильтрации позже.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'log-farm_seeding-field_farm_log_owner'.
  $field_instances['log-farm_seeding-field_farm_log_owner'] = array(
    'bundle' => 'farm_seeding',
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
        'weight' => 10,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'log-farm_seeding-field_farm_lot_number'.
  $field_instances['log-farm_seeding-field_farm_lot_number'] = array(
    'bundle' => 'farm_seeding',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the seed is part of a batch or lot, enter the lot number here.',
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
    'label' => 'Seed lot number',
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
      'weight' => -6,
    ),
  );

  // Exported field_instance: 'log-farm_seeding-field_farm_movement'.
  $field_instances['log-farm_seeding-field_farm_movement'] = array(
    'bundle' => 'farm_seeding',
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
        'weight' => 2,
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
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'log-farm_seeding-field_farm_notes'.
  $field_instances['log-farm_seeding-field_farm_notes'] = array(
    'bundle' => 'farm_seeding',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
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
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'log-farm_seeding-field_farm_quantity'.
  $field_instances['log-farm_seeding-field_farm_quantity'] = array(
    'bundle' => 'farm_seeding',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describe the quantity of this seeding, using a value, unit, and measure. For example, if you seeded 10 flats of lettuce, enter "10" in the Value field, "flats" in the Units field, and "Count" in the Measure field. As you type the unit, you will have the option of selecting from units that you\'ve entered in the past.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 3,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'log-farm_seeding-field_farm_seed_source'.
  $field_instances['log-farm_seeding-field_farm_seed_source'] = array(
    'bundle' => 'farm_seeding',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Where were the seeds obtained?',
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
    'field_name' => 'field_farm_seed_source',
    'label' => 'Source/Supplier',
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
      'weight' => -7,
    ),
  );

  // Exported field_instance: 'log-farm_transplanting-field_farm_asset'.
  $field_instances['log-farm_transplanting-field_farm_asset'] = array(
    'bundle' => 'farm_transplanting',
    'deleted' => 0,
    'description' => 'К какой посадке относится это пересаживающееся бревно?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_asset',
    'label' => 'Посадка',
    'required' => 1,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'log-farm_transplanting-field_farm_files'.
  $field_instances['log-farm_transplanting-field_farm_files'] = array(
    'bundle' => 'farm_transplanting',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_files',
    'label' => 'Файлы',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'farm/log/transplanting',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'log-farm_transplanting-field_farm_flags'.
  $field_instances['log-farm_transplanting-field_farm_flags'] = array(
    'bundle' => 'farm_transplanting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Добавьте флаги в этот журнал, чтобы обеспечить лучшую сортировку и фильтрацию записей.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'log-farm_transplanting-field_farm_images'.
  $field_instances['log-farm_transplanting-field_farm_images'] = array(
    'bundle' => 'farm_transplanting',
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
        'weight' => 8,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_images',
    'label' => 'Фотографии',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'farm/log/transplanting',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'log-farm_transplanting-field_farm_inventory'.
  $field_instances['log-farm_transplanting-field_farm_inventory'] = array(
    'bundle' => 'farm_transplanting',
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
        'weight' => 3,
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

  // Exported field_instance: 'log-farm_transplanting-field_farm_log_category'.
  $field_instances['log-farm_transplanting-field_farm_log_category'] = array(
    'bundle' => 'farm_transplanting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Используйте это, чтобы упорядочить ваши журналы по категориям для более легкого поиска и фильтрации позже.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'log-farm_transplanting-field_farm_log_owner'.
  $field_instances['log-farm_transplanting-field_farm_log_owner'] = array(
    'bundle' => 'farm_transplanting',
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
        'weight' => 7,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'log-farm_transplanting-field_farm_movement'.
  $field_instances['log-farm_transplanting-field_farm_movement'] = array(
    'bundle' => 'farm_transplanting',
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
        'weight' => 1,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'log-farm_transplanting-field_farm_notes'.
  $field_instances['log-farm_transplanting-field_farm_notes'] = array(
    'bundle' => 'farm_transplanting',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'log-farm_transplanting-field_farm_quantity'.
  $field_instances['log-farm_transplanting-field_farm_quantity'] = array(
    'bundle' => 'farm_transplanting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Опишите количество этой пересадки, используя значение, единицу измерения и меру. Например, если вы пересадили 400 растений помидоров в 4-дюймовые горшки, введите "400" в поле Value, "4-дюймовые горшки" в поле Units и "Count" в поле Measure. При вводе единицы измерения у вас будет возможность выбора из единиц измерения, введенных в прошлом.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 2,
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'taxonomy_term-farm_crops-field_farm_companions'.
  $field_instances['taxonomy_term-farm_crops-field_farm_companions'] = array(
    'bundle' => 'farm_crops',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_farm_companions',
    'label' => 'Companions',
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

  // Exported field_instance: 'taxonomy_term-farm_crops-field_farm_crop_family'.
  $field_instances['taxonomy_term-farm_crops-field_farm_crop_family'] = array(
    'bundle' => 'farm_crops',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_farm_crop_family',
    'label' => 'Crop family',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-farm_crops-field_farm_images'.
  $field_instances['taxonomy_term-farm_crops-field_farm_images'] = array(
    'bundle' => 'farm_crops',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_farm_images',
    'label' => 'Фотографии',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'farm/term/crop',
      'file_extensions' => '',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-farm_crops-field_farm_maturity_days'.
  $field_instances['taxonomy_term-farm_crops-field_farm_maturity_days'] = array(
    'bundle' => 'farm_crops',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_farm_maturity_days',
    'label' => 'Days to maturity',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' day| days',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-farm_crops-field_farm_transplant_days'.
  $field_instances['taxonomy_term-farm_crops-field_farm_transplant_days'] = array(
    'bundle' => 'farm_crops',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_farm_transplant_days',
    'label' => 'Days to transplant',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' day| days',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add flags to this asset to enable better sorting and filtering of records.');
  t('Add flags to this log to enable better sorting and filtering of records.');
  t('Assign this planting to a season. You can manage these options in the ' . l('Seasons', 'admin/structure/taxonomy/farm_season') . ' vocabulary.');
  t('Назначено');
  t('Companions');
  t('Crop family');
  t('Сельскохозяйственная культура');
  t('Days to maturity');
  t('Days to transplant');
  t('Describe the quantity of this seeding, using a value, unit, and measure. For example, if you seeded 10 flats of lettuce, enter "10" in the Value field, "flats" in the Units field, and "Count" in the Measure field. As you type the unit, you will have the option of selecting from units that you\'ve entered in the past.');
  t('Describe the quantity of this transplanting, using a value, unit, and measure. For example, if you transplanted 400 tomato plants into 4 inch pots, enter "400" in the Value field, "4-inch pots" in the Units field, and "Count" in the Measure field. As you type the unit, you will have the option of selecting from units that you\'ve entered in the past.');
  t('Описание');
  t('Введите культуру / сорт, для которого производится посадка. При вводе текста у вас будет возможность выбора из культур/сортов, которые вы ввели в прошлом.');
  t('Файлы');
  t('Флаги');
  t('If the seed is part of a batch or lot, enter the lot number here.');
  t('Inventory adjustments');
  t('Логи');
  t('Movement');
  t('Заметки');
  t('Optionally assign this task to one or more people.');
  t('Parent(s)');
  t('Photos');
  t('Planting');
  t('Quantity');
  t('Посадка');
  t('Seed lot number');
  t('Source/Supplier');
  t('Specify the parent(s) of this planting.');
  t('Используйте эти поля для записи перемещения с помощью этой записи журнала. Это будет использоваться для определения местоположения любых ссылочных активов. Текущее местоположение любого актива определяется по последнему завершенному журналу движения. Требуется только поле "Кому".');
  t('Use this to organize your logs into categories for easier searching and filtering later.');
  t('Используйте это для установки или корректировки уровней запасов активов вместе с этим журналом.');
  t('What planting does this seeding log pertain to?');
  t('What planting does this transplanting log pertain to?');
  t('Where were the seeds obtained?');

  return $field_instances;
}
