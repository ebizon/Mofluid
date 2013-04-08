<?php

/**
 * This function formats an administrative block for display.
 *
 * @param $block
 *   An array containing information about the block. It should
 *   include a 'title', a 'description' and a formatted 'content'.
 * @ingroup themeable
 */
function mobile_jquery_admin_block($block) {
  // Don't display the block if it has no content to display.
  if (empty($block['content'])) {
    return '';
  }

  $output = <<< EOT
  <div class="admin-panel" data-role="collapsible" data-collapsed="false">
    <h3>
      $block[title] 
      <span class="description">
        - $block[description]
      </span>
    </h3>
    <div class="body">

      $block[content]
    </div>
  </div>
EOT;
  return $output;
}

/**
 * This function formats the content of an administrative block.
 *
 * @param $content
 *   An array containing information about the block. It should
 *   include a 'title', a 'description' and a formatted 'content'.
 * @ingroup themeable
 */
function mobile_jquery_admin_block_content($content) {
  if (!$content) {
    return '';
  }
  $output = array();
  foreach ($content as $item) {
    $item['localized_options']['html'] = TRUE;
    $link = '<h3>' . $item['title'] . '</h3>';
    $link .= '<p>'. $item['description'] .'</p>';
    $output[] = l($link, $item['href'], $item['localized_options']);
  }
  
  return theme('item_list', $output);
}

/**
 * This function formats an administrative page for viewing.
 *
 * @param $blocks
 *   An array of blocks to display. Each array should include a
 *   'title', a 'description', a formatted 'content' and a
 *   'position' which will control which container it will be
 *   in. This is usually 'left' or 'right'.
 * @ingroup themeable
 */
function mobile_jquery_admin_page($blocks) {
  $block_output = '';

  foreach ($blocks as $block) {
    $block_output .= theme('admin_block', $block);
  }
  $output = '<div class="admin clear-block"">';
  $output .= $block_output;
  $output .= '</div>';
  
  return $output;
}

/**
 * Theme output of the dashboard page.
 *
 * @param $menu_items
 *   An array of modules to be displayed.
 * @ingroup themeable
 */
function mobile_jquery_system_admin_by_module($menu_items) {
  $stripe = 0;
  $output = '';
  $block_output = '';

  // Iterate over all modules
  foreach ($menu_items as $module => $block) {
    list($description, $items) = $block;

    // Output links
    if (count($items)) {
      $block = array();
      $block['title'] = $module;
      $block['content'] = theme('item_list', $items);
      $block['description'] = t($description);

      $block_output .= theme('admin_block', $block);
    }
  }

  $output = '<div class="admin clear-block">';
  $output .= $block_output;
  $output .= '</div>';

  return $output;
}
