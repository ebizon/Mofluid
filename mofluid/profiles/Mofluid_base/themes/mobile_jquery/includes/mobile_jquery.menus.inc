<?php

function mobile_jquery_menu_tree($tree) {
  return '  <ul data-role="listview" data-inset="' . theme_get_setting('menu_item_inset') . '" data-theme="' . theme_get_setting('menu_item_theme') . '" data-divider-theme="' . theme_get_setting('menu_item_dividertheme') . '"  data-split-theme="' . theme_get_setting('menu_item_splittheme') . '"  data-count-theme="' . theme_get_setting('menu_item_counttheme') . '" class="menu">
' . $tree . '</ul>';
}

function mobile_jquery_menu_item_link($link) {

  if (empty($link['localized_options'])) {
    $link['localized_options'] = array();
  }
  
  if (module_exists('jquerymobile_ui') && $link['module'] == 'menu') {
    $options = _jquerymobile_ui_menu_item_options($link);
    foreach ($options as $key => $value) {
      if ($value != '') {
        $link['localized_options']['attributes'][$key] = $value;
      }
    }
  }
  
  $link['localized_options']['attributes']['class'] .= $link['module'] . '-link-' . $link['mlid'];
  
  return l($link['title'], $link['href'], $link['localized_options']);
}

function mobile_jquery_menu_item($link, $has_children, $menu = '', $in_active_trail = FALSE, $extra_class = NULL) {
  $class = ($menu ? 'expanded' : ($has_children ? 'collapsed' : 'leaf'));
  if (!empty($extra_class)) {
    $class .= ' ' . $extra_class;
  }
  if ($in_active_trail) {
    $class .= ' active-trail';
  }
  
  $submenu = '';
  if (!empty($menu)) {
    $submenu = '<div class="sub-menu">' . $menu . '</div>';
  }
  
  //return '<li class="'. $class .'" data-icon="' . theme_get_setting('menu_item_icon') . '">'. $link . "</li>\n" . $submenu;
  return '<li class="'. $class .'" data-icon="' . theme_get_setting('menu_item_icon') . '">'. $link . $menu . "</li>\n";
}

function mobile_jquery_menu_local_task($link, $active = FALSE) {
  return '<li data-icon="' . theme_get_setting('menu_item_icon') . '">'. $link ."</li>\n";
}

function mobile_jquery_menu_local_tasks() {
  $output = '';

  if ($primary = menu_primary_local_tasks()) {
    $output .= "<div data-role=\"navbar\"><ul>\n". $primary ."</ul></div>\n";
  }
  if ($secondary = menu_secondary_local_tasks()) {
    $output .= "<div data-role=\"navbar\"><ul>\n". $secondary ."</ul></div>\n";
  }

  return $output;
}