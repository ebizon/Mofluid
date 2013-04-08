<?php
  $node = $vars['node'];
  
  $vars['content_primary'] = theme('blocks', 'first');
  $vars['content_secondary'] = theme('blocks', 'second');
  $vars['content_footer'] = theme('blocks', 'footer');

  //does jquerymobile_ui exist and is it turned on
  if (!module_exists('jquerymobile_ui')) {
    drupal_add_css('sites/all/libraries/jquery.mobile-1.0b1/jquery.mobile-1.0b1.css', 'theme', 'all', FALSE);
    drupal_add_js('sites/all/libraries/jquery-1.6.1.js', 'theme', 'header', FALSE, TRUE, FALSE);
    drupal_add_js(drupal_get_path('theme', 'mobile_jquery') . '/scripts/mobile_jquery.js', 'theme', 'header', FALSE, TRUE, FALSE);
    drupal_add_js('sites/all/libraries/jquery.mobile-1.0b1/jquery.mobile-1.0b1.js', 'theme', 'header', FALSE, TRUE, FALSE);
  }