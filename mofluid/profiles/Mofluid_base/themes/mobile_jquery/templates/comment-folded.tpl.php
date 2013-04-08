<?php

/**
 * @file comment-folded.tpl.php
 * Default theme implementation for folded comments.
 *
 * Available variables:
 * - $title: Linked title to full comment.
 * - $new: New comment marker.
 * - $author: Comment author. Can be link or plain text.
 * - $date: Date and time of posting.
 * - $comment: Full comment object.
 *
 * @see template_preprocess_comment_folded()
 * @see theme_comment_folded()
 */
?>

<div data-role="collapsible" data-collapsed="true" class="comment<?php print $comment->new ? ' comment-new' : ''; print ' '. $status; ?> clear-block">
  <h3>
  <?php print $title ?>  
  <?php if ($comment->new): ?>
    <span class="new"><?php print $new ?></span>
  <?php endif; ?>
  </h3>
  <div class="content-wrapper">

  <div class="submitted">
    <?php print $picture ?>
    <?php print $submitted ?>
  </div>

  <div class="content">
    <?php print $content ?>
    <?php if ($signature): ?>
    <div class="user-signature clear-block">
      <?php print $signature ?>
    </div>
    <?php endif; ?>
  </div>

    <?php if (!empty($links)): ?>
    <?php print $links ?>
    <?php endif; ?>
  
  </div>
</div>
