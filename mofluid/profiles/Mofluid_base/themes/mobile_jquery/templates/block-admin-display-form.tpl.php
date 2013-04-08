<?php

/**
 * @file block-admin-display-form.tpl.php
 * Default theme implementation to configure blocks.
 *
 * Available variables:
 * - $block_regions: An array of regions. Keyed by name with the title as value.
 * - $block_listing: An array of blocks keyed by region and then delta.
 * - $form_submit: Form submit button.
 * - $throttle: TRUE or FALSE depending on throttle module being enabled.
 *
 * Each $block_listing[$region] contains an array of blocks for that region.
 *
 * Each $data in $block_listing[$region] contains:
 * - $data->region_title: Region title for the listed block.
 * - $data->block_title: Block title.
 * - $data->region_select: Drop-down menu for assigning a region.
 * - $data->weight_select: Drop-down menu for setting weights.
 * - $data->throttle_check: Checkbox to enable throttling.
 * - $data->configure_link: Block configuration link.
 * - $data->delete_link: For deleting user added blocks.
 *
 * @see template_preprocess_block_admin_display_form()
 * @see theme_block_admin_display()
 */
?>
<?php 
if ($throttle) {
  $grid_class = 'ui-grid-e';
} 
else {
  $grid_class = 'ui-grid-d';
}
?>
<div class="<?php print $grid_class; ?>">
      <div class="ui-block-a"><?php print t('Block'); ?></div>
      <div class="ui-block-b"><?php print t('Region'); ?></div>
      <div class="ui-block-c"><?php print t('Weight'); ?></div>
      <div class="ui-block-d"><?php print t('Operations'); ?></div>
      <?php if ($throttle): ?>
      <div class="ui-block-e"><?php print t('Throttle'); ?></div>
      <?php endif; ?>
</div>

<div data-role="collapsible-set">
    <?php $row = 0; ?>
    <?php foreach ($block_regions as $region => $title): ?>
      <div data-role="collapsible"<?php $title === 'Disabled'? print 'data-collapsed="false"': 'data-collapsed="true"'; ?>>
      
        <h3 class="region"><?php print $title; ?></h3>
        
        <div class="<?php print $grid_class; ?> region-message region-<?php print $region?>-message <?php print empty($block_listing[$region]) ? 'region-empty' : 'region-populated'; ?>">
          <div class="ui-block-a"><em><?php print t('No blocks in this region'); ?></em></div>
        </div>

        <?php foreach ($block_listing[$region] as $delta => $data): ?>
        <div class="<?php print $grid_class; ?>">      
          <div class="ui-block-a <?php print $row % 2 == 0 ? 'odd' : 'even'; ?><?php print $data->row_class ? ' '. $data->row_class : ''; ?>"><?php print $data->block_title; ?></div>
          <div class="ui-block-b <?php print $row % 2 == 0 ? 'odd' : 'even'; ?><?php print $data->row_class ? ' '. $data->row_class : ''; ?>"><?php print $data->region_select; ?></div>
          <div class="ui-block-c <?php print $row % 2 == 0 ? 'odd' : 'even'; ?><?php print $data->row_class ? ' '. $data->row_class : ''; ?>"><?php print $data->weight_select; ?></div>
          <div class="ui-block-d <?php print $row % 2 == 0 ? 'odd' : 'even'; ?><?php print $data->row_class ? ' '. $data->row_class : ''; ?>"><?php print $data->configure_link; ?><?php print $data->delete_link; ?></div>
          <?php if ($throttle): ?>
            <div class="ui-block-e <?php print $row % 2 == 0 ? 'odd' : 'even'; ?><?php print $data->row_class ? ' '. $data->row_class : ''; ?>"><?php print $data->throttle_check; ?></div>
          <?php endif; ?>
        </div><!-- end <?php print $grid_class; ?> -->
       
        <?php $row++; ?>
        
        <?php endforeach; ?>
      </div><!-- end collapsible region -->
      
    <?php endforeach; ?>
</div><!-- end collapsible-set -->

<?php print $form_submit; ?>
