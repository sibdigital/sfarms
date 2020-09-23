<?php
/**
 * @file
 * Farm theme template.php.
 */

/**
 * Implements hook_menu_link_alter().
 */
function farm_theme_menu_link_alter(&$item) {

  // Expand top-level menu link items by default and provide descriptions.
  $paths = array(
    'farm/areas' => t('Areas are places on/off the farm.'),
    'farm/assets' => t('Assets are the "things" you want to manage.'),
    'farm/logs' => t('Logs are the "events" that happen to assets and areas.'),
    'farm/people' => t('People are who make it happen.'),
    'farm/plans' => t('Plans provide features for organizing and planning other records.'),
  );
  if (array_key_exists($item['link_path'], $paths)) {
    $item['expanded'] = TRUE;
    $item['options']['attributes']['title'] = $paths[$item['link_path']];
  }
}

/**
 * Implements hook_preprocess_menu_link().
 */
function farm_theme_preprocess_menu_link(&$vars) {

  // Give each menu item a CSS class according to its title.
  if (!empty($vars['element']['#title'])) {
    $title = $vars['element']['#title'];
    $class = drupal_html_class($title);
    $vars['element']['#localized_options']['attributes']['class'][] = $class;
  }
}

/**
 * Implements hook_preprocess_menu_tree().
 */
function farm_theme_preprocess_menu_tree(&$variables) {

  /**
   * This code will generate a list of places in the farm dropdown menus where
   * a Bootstrap divider item should be inserted. This is done based on the
   * weights of the menu items. Dividers will be added after all items with a
   * weight < 0, and before items with a weight >= 100.
   */

  // Only do this for the primary menu.
  if ($variables['theme_hook_original'] != 'menu_tree__primary') {
    return;
  }

  // Start an empty array to store menu divider information.
  $dividers = array();

  // Iterate through the top level menu items.
  $menu = $variables['#tree'];
  foreach (element_children($menu) as $child) {

    // Define the menu items we care about.
    $menus = array(
      'farm/assets' => 'assets',
      'farm/logs' => 'logs',
      'farm/plans' => 'plans',
    );

    // If we don't care about this menu item, skip it.
    if (!array_key_exists($menu[$child]['#href'], $menus)) {
      continue;
    }

    // Get the menu class.
    $menu_class = $menus[$menu[$child]['#href']];

    // Iterate through child items.
    $items = $menu[$child]['#below'];
    $menu_counter = 0;
    foreach (element_children($items) as $mlid) {

      // If the original link has a weight < 0, remember it.
      if ($items[$mlid]['#original_link']['weight'] < 0) {
        $dividers[$menu_class][0] = $menu_counter;
      }

      // Or, if it has a weight >= 100, and we haven't already found one like
      // that, remember it. (We only want to remember the first one, because in
      // this case, we're putting the divider BEFORE it. Whereas with the first
      // divider it is going AFTER the items with a weight < 0.)
      elseif ($items[$mlid]['#original_link']['weight'] >= 100 && !isset($dividers[$menu_class][100])) {
        $dividers[$menu_class][100] = $menu_counter;
      }

      // Keep count of which item we're on.
      $menu_counter++;
    }
  }

  // If divider information was generated, add Javascript.
  if (!empty($dividers)) {
    drupal_add_js(array('farm_theme' => array('menu_dividers' => $dividers)), 'setting');
    drupal_add_js(drupal_get_path('theme', 'farm_theme') . '/js/menu.js');
  }
}

/**
 * Implements hook_preprocess_views_view().
 */
function farm_theme_preprocess_views_view(&$vars) {

  // If the View has a 'footer' or 'feed_icon', wrap it in a div with the
  // 'text-center' class.
  $center_elements = array(
    'footer',
    'feed_icon',
  );
  foreach ($center_elements as $element) {
    if (!empty($vars[$element])) {
      $vars[$element] = '<div class="text-center">' . $vars[$element] . '</div>';
    }
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function farm_theme_form_views_exposed_form_alter(&$form, &$form_state, $form_id) {

  /* Wrap the exposed form in a Bootstrap collapsible panel. */

  // Collapsible panel ID.
  $panel_head_id = $form['#id'] . '-panel-heading';
  $panel_body_id = $form['#id'] . '-panel-body';

  // Collapse by default.
  $collapse = TRUE;

  // Set attributes depending on the collapsed state (used in HTML below).
  if ($collapse) {
    $collapse_class = '';
    $aria_expanded = 'false';
  }
  else {
    $collapse_class = ' in';
    $aria_expanded = 'true';
  }

  // Form prefix HTML:
  $form['#prefix'] = '
<fieldset class="panel panel-default collapsible">
<legend class="panel-heading" role="tab" id="' . $panel_head_id . '">
  <a class="panel-title fieldset-legend collapsed" data-toggle="collapse" href="#' . $panel_body_id . '" aria-expanded="' . $aria_expanded . '" aria-controls="' . $panel_body_id . '">
    Фильтры
  </a>
</legend>
<div id="' . $panel_body_id . '" class="panel-collapse collapse' . $collapse_class . '" role="tabpanel" aria-labelledby="' . $panel_head_id . '">
  <div class="panel-body">';

  // Form suffix HTML:
  $form['#suffix'] = '
  </div>
</div>
</fieldset>';
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function farm_theme_form_log_form_alter(&$form, &$form_state, $form_id) {

  // Collapse the "Movement" and "Group Membership" fieldsets in log forms.
  $collapse_fieldsets = array(
    'field_farm_movement',
    'field_farm_membership',
  );
  foreach ($collapse_fieldsets as $fieldset) {
    if (!empty($form[$fieldset][LANGUAGE_NONE][0])) {
      $form[$fieldset][LANGUAGE_NONE][0]['#collapsible'] = TRUE;
      $form[$fieldset][LANGUAGE_NONE][0]['#collapsed'] = TRUE;
    }
  }
}

/**
 * Implements hook_views_bulk_operations_form_alter().
 */
function farm_theme_views_bulk_operations_form_alter(&$form, &$form_state, $vbo) {

  // Add some JavaScript that enhances VBO.
  drupal_add_js(drupal_get_path('theme', 'farm_theme') . '/js/vbo.js');

  // Move VBO buttons to the bottom.
  $form['select']['#weight'] = 100;

  // Move the certain actions to the end of the list.
  $end_actions = array(
    'action::farm_map_kml_action',
    'action::farm_flags_action',
    'action::farm_log_assign_action',
    'action::farm_group_asset_membership_action',
    'action::farm_asset_archive_action',
    'action::farm_asset_unarchive_action',
    'action::farm_asset_clone_action',
    'action::log_clone_action',
    'action::views_bulk_operations_delete_item',
  );
  $i = 0;
  foreach ($end_actions as $action) {
    $form['select'][$action]['#weight'] = 100 + $i;
    $i++;
  }

  // If we are viewing a VBO config or confirm form, add Javascript that will
  // hide everything on the page except for the form.
  $vbo_steps = array(
    'views_bulk_operations_config_form',
    'views_bulk_operations_confirm_form',
  );
  if (!empty($form_state['step']) && in_array($form_state['step'], $vbo_steps)) {

    // Set the title to '<none>' so that Views doesn't do drupal_set_title().
    // See https://www.drupal.org/node/2905171.
    $vbo->view->set_title('<none>');

    // Add some information to Javascript settings.
    $settings = array(
      'vbo_hide' => TRUE,
      'view_name' => $vbo->view->name,
      'view_display' => $vbo->view->current_display,
    );
    drupal_add_js(array('farm_theme' => $settings), 'setting');
  }
}

/**
 * Implements hook_bootstrap_colorize_text_alter().
 */
function farm_theme_bootstrap_colorize_text_alter(&$texts) {

  // Colorize VBO action buttons.
  $texts['matches'][t('Flag')] = 'info';
  $texts['matches'][t('KML')] = 'success';
  $texts['matches'][t('Move')] = 'success';
  $texts['matches'][t('Weight')] = 'default';
  $texts['matches'][t('Group')] = 'warning';
  $texts['matches'][t('Done')] = 'success';
  $texts['matches'][t('Not Done')] = 'danger';
  $texts['matches'][t('Reschedule')] = 'warning';
  $texts['matches'][t('Assign')] = 'info';
  $texts['matches'][t('Clone')] = 'default';
  $texts['matches'][t('Archive')] = 'danger';
  $texts['matches'][t('Unarchive')] = 'default';
  $texts['matches'][t('Delete')] = 'primary';
}

/**
 * Implements hook_bootstrap_iconize_text_alter().
 */
function farm_theme_bootstrap_iconize_text_alter(&$texts) {

  // Iconize VBO action buttons.
  $texts['matches'][t('Flag')] = 'flag';
  $texts['matches'][t('KML')] = 'globe';
  $texts['matches'][t('Move')] = 'globe';
  $texts['matches'][t('Weight')] = 'scale';
  $texts['matches'][t('Group')] = 'bookmark';
  $texts['matches'][t('Done')] = 'check';
  $texts['matches'][t('Not Done')] = 'unchecked';
  $texts['matches'][t('Reschedule')] = 'calendar';
  $texts['matches'][t('Assign')] = 'user';
  $texts['matches'][t('Clone')] = 'plus';
  $texts['matches'][t('Archive')] = 'eye-close';
  $texts['matches'][t('Unarchive')] = 'eye-open';
  $texts['matches'][t('Delete')] = 'trash';
}

/**
 * Implements hook_farm_flags_classes_alter().
 */
function farm_theme_farm_flags_classes_alter($flag, &$classes) {

  // Render all flags as extra small buttons using Bootstrap's classes.
  $classes[] = 'btn';
  $classes[] = 'btn-xs';

  // Add a button style class based on the flag used.
  switch ($flag) {
    case 'priority':
      $classes[] = 'btn-primary';
      break;
    case 'monitor':
      $classes[] = 'btn-danger';
      break;
    case 'review':
      $classes[] = 'btn-warning';
      break;
    default:
      $classes[] = 'btn-default';
  }
}

/**
 * Implements hook_entity_view_alter().
 */
function farm_theme_entity_view_alter(&$build, $type) {

  // If the entity is not a farm_asset or farm_plan, bail.
  if (!in_array($type, array('farm_asset', 'farm_plan'))) {
    return;
  }

  // If certain elements exist, we will split the page into two columns and
  // put them in the right column, and everything else in the left.
  $right_elements = array(
    'inventory',
    'weight',
    'group',
    'location',
    'farm_plan_map',
  );
  $right_elements_exist = FALSE;
  foreach ($right_elements as $name) {
    if (!empty($build[$name])) {
      $right_elements_exist = TRUE;
      break;
    }
  }
  if ($right_elements_exist) {

    // Create a new container div that spans half of the grid.
    $build['right'] = array(
      '#type' => 'container',
      '#prefix' => '<div class="col-md-6">',
      '#suffix' => '</div>',
      '#weight' => -99,
    );

    // Move the elements into the container.
    foreach ($right_elements as $name) {
      if (!empty($build[$name])) {
        $build['right'][$name] = $build[$name];
        unset($build[$name]);
      }
    }

    // Put everything else into another div and move it to the top so it
    // aligns left.
    $build['left'] = array(
      '#prefix' => '<div class="col-md-6">',
      '#suffix' => '</div>',
      '#weight' => -100,
    );
    $elements = element_children($build);
    foreach ($elements as $element) {
      if (!in_array($element, array('left', 'right', 'views'))) {
        $build['left'][$element] = $build[$element];
        unset($build[$element]);
      }
    }

    // Wrap the Views in a full-width div at the bottom.
    if (!empty($build['views'])) {
      $build['views']['#prefix'] = '<div class="col-md-12">';
      $build['views']['#suffix'] = '</div>';
      $build['views']['#weight'] = 101;
    }
  }
}

/**
 * Implements hook_entityreference_view_widget_rows_alter().
 */
function farm_theme_entityreference_view_widget_rows_alter(&$rows, $entities, $settings) {

  // Fix "Checkbox titles missing with Bootstrap theme" in Entity Reference
  // View Widget. See issue:
  // https://www.drupal.org/project/entityreference_view_widget/issues/2524296
  foreach (element_children($rows) as $key => $child) {
    if ($rows[$key]['target_id']['#type'] == 'checkbox') {
      $rows[$key]['target_id']['#title'] = $rows[$key]['target_id']['#field_suffix'];
    }
  }
}

/**
 * Implements hook_preprocess_bootstrap_panel().
 */
function farm_theme_preprocess_bootstrap_panel(&$vars) {
  drupal_add_js(drupal_get_path('theme', 'farm_theme') . '/js/map_panel.js');
}

/**
 * Implements hook_page_alter().
 */
function farm_theme_page_alter(&$page) {

  // If an access denied page is displayed and the user is not logged in...
  global $user;
  $status = drupal_get_http_header('status');
  if ($status == '403 Forbidden' && empty($user->uid)) {

    // Display a link to the user login page, and redirect back to this page.
    $page['content']['system_main']['login'] = array(
      '#type' => 'markup',
      '#markup' => '<p>' . l('Войти в farmOS', 'user', array('query' => array('destination' => current_path()))) . '</p>',
    );
  }
}

/**
 * Implements hook_block_info_alter().
 */
function farm_theme_block_info_alter(&$blocks, $theme, $code_blocks) {

  // Only affect the farmOS theme.
  if ($theme != 'farm_theme') {
    return;
  }

  // Add farm map block to the page_top region on the front page and
  // farm/assets/*.
  if (!empty($blocks['farm_map']['farm_map'])) {
    $blocks['farm_map']['farm_map']['region'] = 'page_top';
    $blocks['farm_map']['farm_map']['status'] = TRUE;
    $blocks['farm_map']['farm_map']['visibility'] = BLOCK_VISIBILITY_LISTED;
    $blocks['farm_map']['farm_map']['pages'] = "<front>\nfarm/assets/*";
  }
}

/**
 * Implements hook_block_view_alter().
 */
function farm_theme_block_view_alter(&$data, $block) {
  if ($block->delta == 'farm_map' && is_array($data['content'])) {

    // Add CSS and JS when farm_map block is displayed.
    $data['content']['#attached'] = array(
      'css' => array(
        drupal_get_path('theme', 'farm_theme') . '/css/map_header.css',
      ),
      'js' => array(
        drupal_get_path('theme', 'farm_theme') . '/js/map_header.js',
      ),
    );

    // If the block is being displayed on the homepage, show the farm_areas map.
    // Only allow access with the 'access farm dashboard' permission.
    if (drupal_is_front_page()) {
      $data['content']['#map_name'] = 'farm_areas';
      $data['content']['#access'] = user_access('access farm dashboard');
    }

    // Or, if the block is on an asset listing page, show the farm_assets map.
    // Only allow access with the 'view farm assets' permission.
    elseif (strpos(current_path(), 'farm/assets/') === 0) {
      $data['content']['#map_name'] = 'farm_assets';
      $data['content']['#access'] = user_access('view farm assets');
    }
  }
}

/**
 * Implements hook_preprocess_page().
 */
function farm_theme_preprocess_page(&$vars) {

  // Add JS for adding Bootstrap glyphicons throughout the UI.
  $glyphicons_text = array(
    t('Dashboard') => 'dashboard',
    t('Calendar') => 'calendar',
    t('Help') => 'question-sign',
    t('Create new account') =>'user',
    t('My account') => 'user',
    t('Log out') => 'log-out',
    t('Log in') => 'log-in',
    t('Request new password') => 'lock',
    t('Areas') => 'globe',
    t('Assets') => 'grain',
    t('Logs') => 'list',
    t('People') => 'user',
    t('Plans') => 'book',
  );
  drupal_add_js(array('farm_theme' => array('glyphicons_text' => $glyphicons_text)), 'setting');
  drupal_add_js(drupal_get_path('theme', 'farm_theme') . '/js/glyphicons.js');

  // Add Javascript to automatically collapse the help text.
  if (!empty($vars['page']['help'])) {
    drupal_add_js(drupal_get_path('theme', 'farm_theme') . '/js/help.js');
  }

  // Split the farm dashboard into two columns, with the map on the right.
  $current_path = current_path();
  if ($current_path == 'farm') {

    // Only proceed if the metrics group exists.
    if (!empty($vars['page']['content']['system_main']['metrics'])) {

      // Get a list of groups (element children).
      $groups = element_children($vars['page']['content']['system_main']);

      // Create left and right columns.
      $vars['page']['content']['system_main']['left'] = array(
        '#prefix' => '<div class="col-md-6">',
        '#suffix' => '</div>',
      );
      $vars['page']['content']['system_main']['right'] = array(
        '#prefix' => '<div class="col-md-6">',
        '#suffix' => '</div>',
      );

      // Move the map and metrics panes to the right column (and remove them
      // from the groups list).
      $right_panes = array(
        'metrics',
      );
      foreach ($right_panes as $pane) {
        if (!empty($vars['page']['content']['system_main'][$pane])) {
          $vars['page']['content']['system_main']['right'][$pane] = $vars['page']['content']['system_main'][$pane];
          unset($vars['page']['content']['system_main'][$pane]);
          $map_key = array_search($pane, $groups);
          unset($groups[$map_key]);
        }
      }

      // Iterate through the remaining groups and move them to the left column.
      foreach ($groups as $group) {
        $vars['page']['content']['system_main']['left'][$group] = $vars['page']['content']['system_main'][$group];
        unset($vars['page']['content']['system_main'][$group]);
      }
    }
  }

  // When the farm_areas map is added to a page (via farm_area_page_build()),
  // split the page into two columns.
  if (!empty($vars['page']['content']['farm_areas'])) {

    // Wrap map and content in "col-md-6" class so they display in two columns.
    $vars['page']['content']['farm_areas']['#prefix'] = '<div class="col-md-6">';
    $vars['page']['content']['farm_areas']['#suffix'] = '</div>';
    $vars['page']['content']['system_main']['#prefix'] = '<div class="col-md-6">';
    $vars['page']['content']['system_main']['#suffix'] = '</div>';
  }

  // Remove from taxonomy term pages:
  // "There is currently no content classified with this term."
  if (isset($vars['page']['content']['system_main']['no_content'])) {
    unset($vars['page']['content']['system_main']['no_content']);
  }

  // Add "Powered by farmOS" to the footer.
  $vars['page']['footer']['farmos'] = array(
    '#type' => 'markup',
    '#prefix' => '<div style="text-align: center;"><small>',
//    '#markup' => t('Powered by') . ' ' . l(t('farmOS'), 'https://farmos.org'),
    '#suffix' => '</small></div>',
  );
}

/**
 * Implements hook_preprocess_field().
 */
function farm_theme_preprocess_field(&$vars) {

  // Add a clearfix class to field_farm_images to prevent float issues.
  // @see .field-name-field-farm-images .field-item in styles.css.
  if ($vars['element']['#field_name'] == 'field_farm_images') {
    $vars['classes_array'][] = 'clearfix';
  }

  // Customize the quantity measurement field collection display.
  if($vars['element']['#field_name'] == 'field_farm_quantity') {

    // Add a custom template suggestion: field--field-farm-quantity--full.tpl.php
    // @see https://www.drupal.org/node/1137024
    $vars['theme_hook_suggestions'][] = 'field__field_farm_quantity__' . $vars['element']['#view_mode'];

    // Remove the "field-label-inline" class.
    // @todo Change all quantity field instance display settings to show the
    // label "Above" instead of doing this here.
    $class_key = array_search('field-label-inline', $vars['classes_array']);
    if ($class_key !== FALSE) {
      unset($vars['classes_array'][$class_key]);
    }

    // Iterate through the quantities and prepare variables for the template.
    $vars['quantities'] = array();
    foreach ($vars['items'] as $delta => $item) {

      // Grab the values from the item.
      $values = reset($item['entity']['field_collection_item']);

      // Prepare a blank quantity.
      $qty = array(
        'label' => '',
        'measure' => '',
        'value' => '',
        'units' => '',
      );

      // Populate the values that are not empty.
      foreach ($qty as $key => &$value) {
        if (isset($values['field_farm_quantity_' . $key][0]['#markup']) && $values['field_farm_quantity_' . $key][0]['#markup'] != '') {
          $value = $values['field_farm_quantity_' . $key][0]['#markup'];
        }
      }

      // If the value is an empty string, show N/A.
      if ($qty['value'] === '') {
        $qty['value'] = 'N/A';
      }

      // If there is a label, make it bold.
      if (!empty($qty['label'])) {
        $qty['label'] = '<strong>' . $qty['label'] . '</strong>';
      }

      // If there is a label and a measure, wrap the measure in parentheses.
      if (!empty($qty['label']) && !empty($qty['measure'])) {
        $qty['measure'] = '(' . $qty['measure'] . ')';
      }

      // Add the quantity.
      $vars['quantities'][] = $qty;
    }
  }
}

/**
 * Implements hook_preprocess_calendar_item().
 */
function farm_theme_preprocess_calendar_item(&$vars) {

  // If the item has a Log entity associated with it, add the log type as a
  // CSS class.
  if (!empty($vars['item']->entity->type)) {
    $class = drupal_html_class($vars['item']->entity->type);
    if (empty($vars['item']->class)) {
      $vars['item']->class = $class;
    }
    else {
      $vars['item']->class .= ' ' . $class;
    }
  }
}

/**
 * Implements hook_preprocess_calendar_month().
 */
function farm_theme_preprocess_calendar_month(&$vars) {
  farm_theme_calendar_css('month');
}

/**
 * Implements hook_preprocess_calendar_week().
 */
function farm_theme_preprocess_calendar_week_overlap(&$vars) {
  farm_theme_calendar_css('week');
}

/**
 * Implements hook_preprocess_calendar_day().
 */
function farm_theme_preprocess_calendar_day_overlap(&$vars) {
  farm_theme_calendar_css('day');
}

/**
 * Helper function for adding calendar CSS.
 *
 * @param string $period
 *   The calendar period being displayed (year, month, week, or day).
 */
function farm_theme_calendar_css($period) {

  // Add general CSS styles.
  drupal_add_css(drupal_get_path('theme', 'farm_theme') . '/css/calendar.css');

  // Define the log type colors.
  $log_type_colors = array(
    'farm_activity' => '#f7e6d2',
    'farm_harvest' => '#daeace',
    'farm_input' => '#ebdaec',
    'farm_observation' => '#ccebf5',
  );

  // Use the color information to build CSS rules.
  $css = '';
  foreach ($log_type_colors as $log_type => $color) {

    // Convert the log type to a valid CSS class.
    $log_type_class = drupal_html_class($log_type);

    // Build the item selector based on the period.
    switch ($period) {
      case 'month':
        $calendar_item_selector = '.calendar-calendar .month-view .full td.single-day .' . $log_type_class . ' div.monthview, .calendar-calendar .week-view .full td.single-day .' . $log_type_class . ' div.weekview, .calendar-calendar .day-view .full td.single-day .' . $log_type_class . ' div.dayview';
        break;
      case 'week':
      case 'day':
        $calendar_item_selector = '.calendar-calendar .week-view .full div.single-day .' . $log_type_class . ' div.weekview, .calendar-calendar .day-view .full div.single-day .' . $log_type_class . ' div.dayview';
        break;
      default:
        $calendar_item_selector = '';
    }

    // If a selector was found, add the CSS.
    if (!empty($calendar_item_selector)) {
      $css .= $calendar_item_selector . '{background: ' . $color . ';} ';
    }
  }

  // If we have CSS to add, add it.
  if (!empty($css)) {
    drupal_add_css($css, array('type' => 'inline'));
  }
}
