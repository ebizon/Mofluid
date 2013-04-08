<?php

/**
 * @file comment-wrapper.tpl.php
 * Default theme implementation to wrap comments.
 *
 * Available variables:
 * - $content: All comments for a given page. Also contains sorting controls
 *   and comment forms if the site is configured for it.
 *
 * The following variables are provided for contextual information.
 * - $node: Node object the comments are attached to.
 * The constants below the variables show the possible values and should be
 * used for comparison.
 * - $display_mode
 *   - COMMENT_MODE_FLAT_COLLAPSED
 *   - COMMENT_MODE_FLAT_EXPANDED
 *   - COMMENT_MODE_THREADED_COLLAPSED
 *   - COMMENT_MODE_THREADED_EXPANDED
 * - $display_order
 *   - COMMENT_ORDER_NEWEST_FIRST
 *   - COMMENT_ORDER_OLDEST_FIRST
 * - $comment_controls_state
 *   - COMMENT_CONTROLS_ABOVE
 *   - COMMENT_CONTROLS_BELOW
 *   - COMMENT_CONTROLS_ABOVE_BELOW
 *   - COMMENT_CONTROLS_HIDDEN
 *
 * @see template_preprocess_comment_wrapper()
 * @see theme_comment_wrapper()
 */
?>
<?php 
  switch ($display_mode) {
    case COMMENT_MODE_FLAT_COLLAPSED:
      $data_role = 'collapsible';
      $data_collapsed = 'true';
      break;
    case COMMENT_MODE_FLAT_EXPANDED:
      $data_role = 'collapsible';
      $data_collapsed = 'false';
      break;
    case COMMENT_MODE_THREADED_COLLAPSED:
      $data_role = 'collapsible-set';
      $data_collapsed = 'true';
      break;
    case COMMENT_MODE_THREADED_EXPANDED:
      $data_role = 'collapsible-set';
      $data_collapsed = 'false';
      break;
  }
?>
<div id="comments" data-role="<?php print $data_role; ?>" data-collapsed="<?php print $data_collapsed; ?>">
  <h3>Comments</h3>
  <?php print $content; ?>
</div>
