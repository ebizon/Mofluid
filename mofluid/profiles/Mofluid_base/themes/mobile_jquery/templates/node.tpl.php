<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block">

<?php print $picture ?>
  <?php if (!$page): ?>
    <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  <?php else: ?>
    <h2><?php print $title ?></h2>
  <?php endif; ?>
  
  <div class="meta">
  <?php if ($submitted): ?>
    <span class="submitted"><?php print $submitted ?></span>
  <?php endif; ?>
  </div>
  
  <div class="content">
    <?php print $content ?>
  </div>
    <?php print $links; ?>
  <?php if ($terms): ?>
    <div data-role="collapsible" data-collapsed="true" class="terms">
    <h3>Terms</h3>
    <?php print $terms ?>
    </div>
  <?php endif;?>
  
  
</div>
