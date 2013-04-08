<?php

/**
 * Return a themed form element.
 *
 * @param element
 *   An associative array containing the properties of the element.
 *   Properties used: title, description, id, required
 * @param $value
 *   The form element's data.
 * @return
 *   A string representing the form element.
 *
 * @ingroup themeable
 */
function mobile_jquery_form_element($element, $value) {
  // This is also used in the installer, pre-database setup.
  
  $t = get_t(); 
  $output = '';
  $required = !empty($element['#required']) ? '<span class="form-required" title="'. $t('This field is required.') .'">*</span>' : '';

  if (!empty($element['#title'])) {
    $title = $element['#title'];
    if (!empty($element['#id'])) {
      $output .= ' <label for="'. $element['#id'] .'">'. $t('!title: !required', array('!title' => filter_xss_admin($title), '!required' => $required)) ."</label>\n";
    }
    else {
      $output .= ' <label>'. $t('!title: !required', array('!title' => filter_xss_admin($title), '!required' => $required)) ."</label>\n";
    }
  }
  
  $output .= " $value\n";

  if (!empty($element['#description'])) {
    $output .= ' <div class="description">'. $element['#description'] ."</div>\n";
  }
  

  switch ($element['#type']) {
    case 'textarea':
    case 'textfield':
    case 'select':
      $output = '<div data-role="fieldcontain">' . $output . '</div>';
      break;
  }


  return $output;
}

/**
 * Format a form item.
 *
 * @param $element
 *   An associative array containing the properties of the element.
 *   Properties used:  title, value, description, required, error
 * @return
 *   A themed HTML string representing the form item.
 *
 * @ingroup themeable
 */
function mobile_jquery_item($element) {
  return theme('form_element', $element, $element['#value'] . (!empty($element['#children']) ? $element['#children'] : ''));
}

/**
 * Theme function for jquerymobile_ui_checkbox type.
 */
function mobile_jquery_checkbox($element) {
  $checkbox = '<input ';
  $checkbox .= 'type="checkbox" ';
  $checkbox .= 'name="'. $element['#name'] .'" ';
  $checkbox .= 'id="'. $element['#id'] .'" ' ;
  $checkbox .= 'value="'. $element['#return_value'] .'" ';
  $checkbox .= $element['#value'] ? ' checked="checked" ' : ' ';
  $checkbox .= drupal_attributes($element['#attributes']) .' />';

/*
  if (!is_null($element['#title'])) {
    $checkbox = $checkbox . "\n" .'<label class="option" for="'. $element['#id'] .'">'. $element['#title'] .'</label>';
  }

  unset($element['#title']);
*/

  return theme('form_element', $element, $checkbox);
}


function mobile_jquery_checkboxes($element) {
  $element['#children'] = !empty($element['#children']) ? $element['#children'] : '';
  
  if ($element['#title'] || $element['#description']) {
    unset($element['#id']);
    return '<div data-role="fieldcontain"><fieldset data-role="controlgroup">' . theme('form_element', $element, $element['#children']) . '</fieldset></div>';
  }
  else {
    return '<div data-role="fieldcontain"><fieldset data-role="controlgroup">' . $element['#children'] . '</fieldset></div>';
  }
}

/**
 * Format a radio button.
 *
 * @param $element
 *   An associative array containing the properties of the element.
 *   Properties used: required, return_value, value, attributes, title, description
 * @return
 *   A themed HTML string representing the form item group.
 *
 * @ingroup themeable
 */
function mobile_jquery_radio($element) {
  $output = '<input type="radio" ';
  $output .= 'id="'. $element['#id'] .'" ';
  $output .= 'name="'. $element['#name'] .'" ';
  $output .= 'value="'. $element['#return_value'] .'" ';
  $output .= (check_plain($element['#value']) == $element['#return_value']) ? ' checked="checked" ' : ' ';
  $output .= drupal_attributes($element['#attributes']) .' />';
  if (!is_null($element['#title'])) {
    $output = $output .'<label class="option" for="'. $element['#id'] .'">'. $element['#title'] .'</label>';
  }

  unset($element['#title']);
  return theme('form_element', $element, $output);
}

/**
 * Format a set of radio buttons.
 *
 * @param $element
 *   An associative array containing the properties of the element.
 *   Properties used: title, value, options, description, required and attributes.
 * @return
 *   A themed HTML string representing the radio button set.
 *
 * @ingroup themeable
 */
function mobile_jquery_radios($element) {
  if (isset($element['#attributes']['class'])) {
    $class .= ' '. $element['#attributes']['class'];
  }
  //$element['#children'] = '<div class="'. $class .'">'. (!empty($element['#children']) ? $element['#children'] : '') .'</div>';
  if ($element['#title'] || $element['#description']) {
    unset($element['#id']);
    return '<div data-role="fieldcontain"><fieldset data-role="controlgroup">' . theme('form_element', $element, $element['#children']) . '</fieldset></div>';
  }
  else {
    return '<div data-role="fieldcontain"><fieldset data-role="controlgroup">' . $element['#children'] . '</fieldset></div>';
  }
}

/**
 * Format a textarea.
 *
 * @param $element
 *   An associative array containing the properties of the element.
 *   Properties used: title, value, description, rows, cols, required, attributes
 * @return
 *   A themed HTML string representing the textarea.
 *
 * @ingroup themeable
 *
 * TODO: modify teaser.js
 */
function mobile_jquery_textarea($element) {

  // Add teaser behavior (must come before resizable)
  if (!empty($element['#teaser'])) {
    drupal_add_js('misc/teaser.js');
    // Note: arrays are merged in drupal_get_js().
    drupal_add_js(array('teaserCheckbox' => array($element['#id'] => $element['#teaser_checkbox'])), 'setting');
    drupal_add_js(array('teaser' => array($element['#id'] => $element['#teaser'])), 'setting');
    $class[] = 'teaser';
  }

$output = '<textarea cols="'. $element['#cols'] .'" rows="'. $element['#rows'] .'" name="'. $element['#name'] .'" id="'. $element['#id'] .'" '. drupal_attributes($element['#attributes']) .'>'. check_plain($element['#value']) .'</textarea>';

  return theme('form_element', $element, $output);
}

/**
 * Format a textfield.
 *
 * @param $element
 *   An associative array containing the properties of the element.
 *   Properties used:  title, value, description, size, maxlength, required, attributes autocomplete_path
 * @return
 *   A themed HTML string representing the textfield.
 *
 * @ingroup themeable
 */
function mobile_jquery_textfield($element) {
  $size = empty($element['#size']) ? '' : ' size="'. $element['#size'] .'"';
  $maxlength = empty($element['#maxlength']) ? '' : ' maxlength="'. $element['#maxlength'] .'"';
  $class = array('form-text');
  $extra = '';
  $output = '';

  if ($element['#autocomplete_path'] && menu_valid_path(array('link_path' => $element['#autocomplete_path']))) {
    drupal_add_js('misc/autocomplete.js');
    $class[] = 'form-autocomplete';
    $extra =  '<input class="autocomplete" type="hidden" id="'. $element['#id'] .'-autocomplete" value="'. check_url(url($element['#autocomplete_path'], array('absolute' => TRUE))) .'" disabled="disabled" />';
  }
  _form_set_class($element, $class);

  if (isset($element['#field_prefix'])) {
    $output .= '<span class="field-prefix">'. $element['#field_prefix'] .'</span> ';
  }

  $output .= '<input type="text"'. $maxlength .' name="'. $element['#name'] .'" id="'. $element['#id'] .'"'. $size .' value="'. check_plain($element['#value']) .'"'. drupal_attributes($element['#attributes']) .' />';

  if (isset($element['#field_suffix'])) {
    $output .= ' <span class="field-suffix">'. $element['#field_suffix'] .'</span>';
  }
  
  return theme('form_element', $element, $output) . $extra;
}

function mobile_jquery_select($element) {
  $select = '';
  $size = $element['#size'] ? ' size="'. $element['#size'] .'"' : '';
  _form_set_class($element, array('form-select'));
  $multiple = $element['#multiple'];
  return theme('form_element', $element, '<select name="'. $element['#name'] .''. ($multiple ? '[]' : '') .'"'. ($multiple ? ' multiple="multiple" ' : '') . drupal_attributes($element['#attributes']) .' id="'. $element['#id'] .'" '. $size .'>'. form_select_options($element) .'</select>');
}

function mobile_jquery_fieldset($element) {
  if (!empty($element['#collapsible'])) {
    if (!isset($element['#attributes']['class'])) {
      $element['#attributes']['class'] = '';
    }
    if (!isset($element['#attributes']['data-role'])) {
      $element['#attributes']['data-role'] = '';
    }
    if (!isset($element['#attributes']['data-collapsed'])) {
      $element['#attributes']['data-collapsed'] = '';
    }

    $element['#attributes']['data-role'] = 'collapsible';
    $element['#attributes']['class'] .= ' collapsible';
    
    if (!empty($element['#collapsed'])) {
      $element['#attributes']['class'] .= ' collapsed';
      $element['#attributes']['data-collapsed'] = 'true';      
    }
  }

  return '<div' . drupal_attributes($element['#attributes']) . '>' . ($element['#title'] ? '<h3>' . $element['#title'] . '</h3>' : '') . (isset($element['#description']) && $element['#description'] ? '<div class="description">' . $element['#description'] . '</div>' : '') . (!empty($element['#children']) ? $element['#children'] : '') . (isset($element['#value']) ? $element['#value'] : '') . "</div>\n";
}
