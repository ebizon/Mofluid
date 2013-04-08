<?php
  
  if (module_exists('jquerymobile_ui')) {
     $vars['jqm_scripts'] = jquerymobile_ui_load_files($vars); 
  }
  
  // Unset stylesheets.
  if (!empty($vars['css'])) {
  
    $css = $vars['css'];
    foreach (mobile_jquery_get_styles() as $site => $name) {
      foreach ($name as $type => $group) {
          foreach ($group as $style => $sheet) {
            unset($css[$site][$type][$style]);
          }
      }
    }
    $vars['styles'] = drupal_get_css($css);
  
  }
  
  //Unset javascripts
  if (!empty($vars['scripts'])) {
      $scripts = drupal_add_js();
  
      // Loop through each of the required replacements.
      foreach (mobile_jquery_get_scripts() as $type => $replacements) {
        foreach ($replacements as $find => $replace) {
          // If the file to replace is loaded on this page...
          if (isset($scripts[$type][$find])) {
            // Create a new entry for the replacement file, and unset the original one.
            unset($scripts[$type][$find]);
          }
        }
      }
  
      $vars['scripts'] = drupal_get_js('header', $scripts);
  
  }
  
  $vars['node_classes'] = '';
  if ($vars['is_front']) {
    $vars['node_classes'] = 'type-home';
  } 
else {
    $vars['node_classes'] = 'type-interior';
  }

