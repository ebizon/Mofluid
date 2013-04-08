<?php


/**
 * Theme setting defaults
 */
function mobile_jquery_default_theme_settings() {
  $defaults = array(
    'rebuild_registry'            => 1,
    'use_global'                  => 1,
    
    'global_icon'                  => 'arrow-r',
    'global_inset'                => 'true',
    'global_theme'                => 'a',
    'global_spliticon'            => 'plus',
    
    'list_item_icon'              => 'arrow-r',
    'list_item_inset'              => 'true',
    'list_item_theme'              => 'a',
    'list_item_dividertheme'      => 'a',
    'list_item_counttheme'        => 'a',
    'list_item_splittheme'        => 'a',
    'list_item_spliticon'          => 'plus',
    
    'menu_item_icon'              => 'arrow-r',
    'menu_item_inset'              => 'true',
    'menu_item_theme'              => 'a',
    'menu_item_dividertheme'      => 'a',
    'menu_item_counttheme'        => 'a',
    'menu_item_splittheme'        => 'a',
    'menu_item_spliticon'          => 'plus',
    
    'header_data_theme'            => 'a',
    'header_data_position'        => 'inline',
    'content_data_theme'          => 'a',
    'footer_data_theme'            => 'a',
    'footer_data_position'        => 'inline',
  );

  // Add site-wide theme settings
  $defaults = array_merge($defaults, theme_get_settings());

  return $defaults;
}

/**
 * Initialize theme settings
 */
function mobile_jquery_initialize_theme_settings($theme_name) {
  global $user;
  $theme_settings = theme_get_settings($theme_name);
  if (!isset($theme_settings['global_theme']) || $theme_settings['rebuild_registry'] == 1) {
    static $registry_rebuilt = false;   // avoid multiple rebuilds per page

    // Rebuild theme registry & notify user
    if (isset($theme_settings['rebuild_registry']) && $theme_settings['rebuild_registry'] == 1 && !$registry_rebuilt) {
      drupal_rebuild_theme_registry();
      
    if (in_array('administrator', array_values($user->roles))) {
      drupal_set_message(t('Theme registry has been rebuilt. This feature is only recommended for development sites. <a href="!link">Disable</a>.', array('!link' => url('admin/build/themes/settings/' . $GLOBALS['theme']))), 'warning');
    }
      $registry_rebuilt = TRUE;
  }
    // Retrieve saved or site-wide theme settings
    $theme_setting_name = str_replace('/', '_', 'theme_'. $theme_name .'_settings');
    $settings = (variable_get($theme_setting_name, FALSE)) ? theme_get_settings($theme_name) : theme_get_settings();
    
    // Skip toggle_node_info_ settings
    if (module_exists('node')) {
      foreach (node_get_types() as $type => $name) {
        unset($settings['toggle_node_info_'. $type]);
      }
    }
    
    // Combine default theme settings from .info file & theme-settings.php
    $theme_data = list_themes();   // get theme data for all themes
    $info_theme_settings = ($theme_name && isset($theme_data[$theme_name]->info['settings'])) ? $theme_data[$theme_name]->info['settings'] : array();
    $defaults = array_merge(mobile_jquery_default_theme_settings(), $info_theme_settings);

    // Set combined default & saved theme settings
    variable_set($theme_setting_name, array_merge($defaults, $settings));

    // Force theme settings refresh
    theme_get_setting('', TRUE);
  }
}

/**
* Implementation of THEMEHOOK_settings() function.
*
* @param $saved_settings
*   array An array of saved settings for this theme.
* @return
*   array A form array.
*/
function mobile_jquery_settings($saved_settings) {
  global $base_url;

  //add some jquery awesomesauce to help the global style functionality
  drupal_add_js(drupal_get_path('theme', 'mobile_jquery') . '/scripts/mobile_jquery.settings.js');

  // Get theme name from url (admin/.../theme_name)
  $theme_name = arg(count(arg()) - 1);

  // Combine default theme settings from .info file & theme-settings.php
  $theme_data = list_themes();   // get data for all themes
  $info_theme_settings = ($theme_name && isset($theme_data[$theme_name]->info['settings'])) ? $theme_data[$theme_name]->info['settings'] : array();
  $defaults = array_merge(mobile_jquery_default_theme_settings(), $info_theme_settings);

  // Combine default and saved theme settings
  $settings = array_merge($defaults, $saved_settings);
 
  //Theming Styles
  $boolean_options   = array(
    'true' => t('True'),
    'false' => t('False'),
  );

  $theme_options = array(
    'a' => t('Black'),
    'b' => t('Blue'),
    'c' => t('White'),
    'd' => t('Grey'),
    'e' => t('Yellow')
  );
  
  if (module_exists('jquerymobile_ui')) {
    $theme_options = array_merge($theme_options, _jquerymobile_ui_get_custom_themes());
  }
  
  $icon_options = array(
   'arrow-r' => t('Right arrow'),
   'arrow-l' => t('Left arrow'),
   'arrow-u' => t('Up arrow'),
   'arrow-d' => t('Down arrow'),
   'delete' => t('Delete'),
   'plus' => t('Plus'),
   'minus' => t('Minus'),
   'check' => t('Check'),
   'gear' => t('Gear'),
   'refresh' => t('Refresh'),
   'forward' => t('Forward'),
   'back' => t('Back'),
   'grid' => t('Grid'),
   'star' => t('Star'),
   'alert' => t('Alert'),
   'info' => t('Info'),
   'home' => t('Home'),
   'search' => t('Search'),
  );
  
  $position_options = array(
    'inline' => t('inline'),
    'fixed' => t('fixed'),
  );
  

// Theme Settings Fieldset
  $form['theme_options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Theme Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['theme_options']['rebuild_registry'] = array(
    '#type' => 'checkbox',
    '#title' => t('Rebuild theme registry for every page.'),
    '#description' => t('<em>Note: Not recommended for production use.</em>'),
    '#default_value' => $settings['rebuild_registry'],
  );
  $form['theme_options']['use_global'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Use global theme'),
    '#description'   => t('This option allows all items to be set to the same swatch rather than set each item individually.'),
    '#default_value' => $settings['use_global'],
  );
    
// GLOBAL  
  $form['theme_options']['global_styles'] = array(
    '#type' => 'fieldset',
    '#title' => t('Global Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => !$settings['use_global'],
  );
    $form['theme_options']['global_styles']['global_theme'] = array(
      '#type'          => 'select',
      '#title'         => t('Global Theme (data-theme)'),
      '#default_value' => $settings['global_theme'],
      '#options'       => $theme_options,
    );
    $form['theme_options']['global_styles']['global_inset'] = array(
      '#type'          => 'radios',
      '#title'         => t('Inset Style Lists/Menus (data-inset)'),
      '#default_value' => $settings['global_inset'],
    '#options'       => $boolean_options,
    );
    $form['theme_options']['global_styles']['global_spliticon'] = array(
      '#type'          => 'select',
      '#title'         => t('Split Button Icon (data-split-icon)'),
      '#default_value' => $settings['global_spliticon'],
      '#options'       => $icon_options,
    );
    $form['theme_options']['global_styles']['global_icon'] = array(
      '#type'          => 'select',
      '#title'         => t('List/Menu Item Icon (data-icon)'),
      '#default_value' => $settings['global_icon'],
      '#options'       => $icon_options,
    );
  
//ITEM LISTS  
  $form['theme_options']['item_list_styles'] = array(
    '#type' => 'fieldset',
    '#title' => t('Item List settings'),
    '#collapsible' => TRUE,
    '#collapsed' => $settings['use_global'],
  );  
    
  $form['theme_options']['item_list_styles']['list_item_theme'] = array(
    '#type'          => 'select',
    '#title'         => t('Theme (data-theme)'),
    '#default_value' => $settings['list_item_theme'],
    '#options'       => $theme_options,
  );
  $form['theme_options']['item_list_styles']['list_item_inset'] = array(
    '#type'          => 'radios',
    '#title'         => t('Inset Lists (data-inset)'),
    '#default_value' => $settings['list_item_inset'],
    '#options'       => $boolean_options,
  );
  $form['theme_options']['item_list_styles']['list_item_icon'] = array(
    '#type'          => 'select',
    '#title'         => t('List Item Icon (data-icon)'),
    '#default_value' => $settings['list_item_icon'],
    '#options'       => $icon_options,
  );
  $form['theme_options']['item_list_styles']['list_item_dividertheme'] = array(
    '#type'          => 'select',
    '#title'         => t('List Divider Theme (data-divider-theme)'),
    '#default_value' => $settings['list_item_dividertheme'],
    '#options'       => $theme_options,
  );   
  $form['theme_options']['item_list_styles']['list_item_counttheme'] = array(
    '#type'          => 'select',
    '#title'         => t('Count Bubble Theme (data-count-theme)'),
    '#default_value' => $settings['list_item_counttheme'],
    '#options'       => $theme_options,
  );  
  $form['theme_options']['item_list_styles']['list_item_splittheme'] = array(
    '#type'          => 'select',
    '#title'         => t('Split Button Theme (data-split-theme)'),
    '#default_value' => $settings['list_item_splittheme'],
    '#options'       => $theme_options,
  );    
  $form['theme_options']['item_list_styles']['list_item_spliticon'] = array(
    '#type'          => 'select',
    '#title'         => t('Slit Button Icon (data-split-icon)'),
    '#default_value' => $settings['list_item_spliticon'],
    '#options'       => $icon_options,
  );
  
//MENU ITEM LIST
  $form['theme_options']['menu_item_list_styles'] = array(
    '#type' => 'fieldset',
    '#title' => t('Menu Item Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => $settings['use_global'],
  );  
    $form['theme_options']['menu_item_list_styles']['menu_item_theme'] = array(
      '#type'          => 'select',
      '#title'         => t('Theme (data-theme)'),
      '#default_value' => $settings['menu_item_theme'],
      '#options'       => $theme_options,
    );  
    $form['theme_options']['menu_item_list_styles']['menu_item_inset'] = array(
      '#type'          => 'radios',
      '#title'         => t('Menu Item Inset (data-inset)'),
      '#default_value' => $settings['menu_item_inset'],
      '#options'       => $boolean_options,
    );
    $form['theme_options']['menu_item_list_styles']['menu_item_icon'] = array(
      '#type'          => 'select',
      '#title'         => t('Menu Item Icon (data-icon)'),
      '#default_value' => $settings['menu_item_icon'],
      '#options'       => $icon_options,
    );  
    $form['theme_options']['menu_item_list_styles']['menu_item_dividertheme'] = array(
      '#type'          => 'select',
      '#title'         => t('Menu Divider Theme (data-divider-theme)'),
      '#default_value' => $settings['menu_item_dividertheme'],
      '#options'       => $theme_options,
    );   
    $form['theme_options']['menu_item_list_styles']['menu_item_counttheme'] = array(
      '#type'          => 'select',
      '#title'         => t('Count Bubble Theme (data-count-theme)'),
      '#default_value' => $settings['menu_item_counttheme'],
      '#options'       => $theme_options,
    );  
    $form['theme_options']['menu_item_list_styles']['menu_item_splittheme'] = array(
      '#type'          => 'select',
      '#title'         => t('Split Button Theme (data-split-theme)'),
      '#default_value' => $settings['menu_item_splittheme'],
      '#options'       => $theme_options,
    );
    $form['theme_options']['menu_item_list_styles']['menu_item_spliticon'] = array(
      '#type'          => 'select',
      '#title'         => t('Split Item Icon (data-split-icon)'),
      '#default_value' => $settings['menu_item_spliticon'],
      '#options'       => $icon_options,
    );  
    
//HEADER  
  $form['theme_options']['header_styles'] = array(
    '#type' => 'fieldset',
    '#title' => t('Header Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => $settings['use_global'],
  );    
    $form['theme_options']['header_styles']['header_data_theme'] = array(
      '#type'          => 'select',
      '#title'         => t('Theme (data-theme)'),
      '#default_value' => $settings['header_data_theme'],
      '#options'       => $theme_options,
    );  
    $form['theme_options']['header_styles']['header_data_position'] = array(
      '#type'          => 'select',
      '#title'         => t('Position (data-position)'),
      '#default_value' => $settings['header_data_position'],
      '#options'       => $position_options,
    );
    
//CONTENT  
  $form['theme_options']['content_styles'] = array(
    '#type' => 'fieldset',
    '#title' => t('Content Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => $settings['use_global'],
  );    
    $form['theme_options']['content_styles']['content_data_theme'] = array(
      '#type'          => 'select',
      '#title'         => t('Theme (data-theme)'),
      '#default_value' => $settings['content_data_theme'],
      '#options'       => $theme_options,
    );
    
//FOOTER  
  $form['theme_options']['footer_styles'] = array(
    '#type' => 'fieldset',
    '#title' => t('Footer Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => $settings['use_global'],
  );    
    $form['theme_options']['footer_styles']['footer_data_theme'] = array(
      '#type'          => 'select',
      '#title'         => t('Theme (data-theme)'),
      '#default_value' => $settings['footer_data_theme'],
      '#options'       => $theme_options,
    );    
    $form['theme_options']['footer_styles']['footer_data_position'] = array(
      '#type'          => 'select',
      '#title'         => t('Position (data-position)'),
      '#default_value' => $settings['footer_data_position'],
      '#options'       => $position_options,
    );
  
  // Return theme settings form
  return $form;
}
