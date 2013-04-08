<?php

/**
 * Implementation of theme_item_list()
 *
 * @param $items
 *   An array of items to be displayed in the list. If an item is a string,
 *   then it is used as is. If an item is an array, then the "data" element of
 *   the array is used as the contents of the list item. If an item is an array
 *   with a "children" element, those children are displayed in a nested list.
 *   All other elements are treated as attributes of the list item element.
 * @param $title
 *   The title of the list.
 * @param $type
 *   The type of list to return (e.g. "ul", "ol")
 * @param $attributes
 *   The attributes applied to the list element.
 * @return
 *   A string containing the list output.
 */
function mobile_jquery_item_list($items = array(), $title = NULL, $type = 'ul', $attributes = NULL) {
  $output = '';
  
  if (!empty($items)) {
    $output .= "<$type". drupal_attributes($attributes) .' data-role="listview" data-inset="' . theme_get_setting('list_item_inset') . '" data-theme="' . theme_get_setting('list_item_theme') . '" data-divider-theme="' . theme_get_setting('list_item_dividertheme') . '"  data-split-theme="' . theme_get_setting('list_item_splittheme') . '"  data-count-theme="' . theme_get_setting('list_item_counttheme') . '" data-split-icon="' . theme_get_setting('list_item_spliticon') . '">';
    if (isset($title)) {
      $output .= '<li data-role="list-divider">'. $title .'</li>';
    }
    $num_items = count($items);
    foreach ($items as $i => $item) {
      $attributes = array();
      $children = array();
      
      if (is_array($item)) {
        foreach ($item as $key => $value) {
          if ($key == 'data') {
            $data = $value;
          }
          elseif ($key == 'children') {
            $children = $value;
          }
          else {
            $attributes[$key] = $value;
          }
        }
      }
      else {
        $data = $item;
      }
      
      if (count($children) > 0) {
        $data .= theme_item_list($children, NULL, $type, $attributes) . '<!-- sub-list -->'; // Render nested list
      }
$attributes['class'] .= ' list';
      $output .= '<li'. drupal_attributes($attributes) .' data-icon="' . theme_get_setting('list_item_icon') . '">'. $data ."</li>\n";
    }
    $output .= "</$type>";
  }
  $output .= "\n";
  return $output;
}

/**
 * Implementation of theme_links()
 * 
 * Return a themed set of links.
 *
 * @param $links
 *   A keyed array of links to be themed.
 * @param $attributes
 *   A keyed array of attributes
 * @return
 *   A string containing an unordered list of links.
 */
function mobile_jquery_links($links, $attributes = array('class' => 'links')) {
  global $language;
  $output = '';
  
  foreach ($links as $key => $value) {
    if (isset($links[$key]['fragment'])) {
      unset($links[$key]['fragment']);
    }
  }
  
  if (count($links) > 0) {
    $output = '<ul data-role="listview" data-inset="' . theme_get_setting('menu_item_inset') . '" data-theme="' . theme_get_setting('menu_item_theme') . '" data-divider-theme="' . theme_get_setting('menu_item_dividertheme') . '"  data-split-theme="' . theme_get_setting('menu_item_splittheme') . '"  data-count-theme="' . theme_get_setting('menu_item_counttheme') . '" data-icon="' . theme_get_setting('menu_item_icon') . '">';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = $key;
      
      // Add first, last and active classes to the list of links to help out themers.
      if ($i == 1) {
        $class .= ' first';
      }
      if ($i == $num_links) {
        $class .= ' last';
      }
      if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page()))
          && (empty($link['language']) || $link['language']->language == $language->language)) {
        $class .= ' active';
      }
      $output .= '<li'. drupal_attributes(array('class' => $class)) .' data-icon="' . theme_get_setting('list_item_icon') . '">';

      if (isset($link['href'])) {
        // Pass in $link as $options, they share the same keys.
        $output .= l($link['title'], $link['href'], $link);
      }
      elseif (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for adding title and class attributes
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        $span_attributes = '';
        if (isset($link['attributes'])) {
          $span_attributes = drupal_attributes($link['attributes']);
        }
        $output .= '<span'. $span_attributes .'>'. $link['title'] .'</span>';
      }

      $i++;
      $output .= "</li>\n";
    }

    $output .= '</ul>';
  }

  return $output;
}

/**
 * Returns code that emits the 'more help'-link.
 */
function mobile_jquery_more_help_link($url) {
  return '<div class="more-help-link">'. t('[<a href="@link" data-rel="dialog">more help...</a>]', array('@link' => check_url($url))) .'</div>';
}
