<?php

/**
 * Format a link to the more extensive filter tips.
 *
 * @ingroup themeable
 */
function mobile_jquery_filter_tips_more_info() {
  $options = array(
    'data-rel' => 'dialog',
    'data-transition' => 'pop',
    'data-role' => 'button',
    'data-inline' => 'true', 
  );
  return '<a href="/filter/tips" data-role="button" data-inline="true" data-rel="dialog" data-transition="pop" >' . t('More information about formatting options') . '</a>';
}