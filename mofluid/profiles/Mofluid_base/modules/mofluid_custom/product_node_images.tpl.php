<?php
//$Id$

/*
 * @file
 *  Product node images
 */
global $base_url;
drupal_add_js(drupal_get_path('theme', 'mobile_jquery') . '/jquery.js');
//drupal_add_css(drupal_get_path('module', 'mofluid_custom').'/mofluid_custom.css');
//drupal_add_js(drupal_get_path('module', 'mofluid_custom').'/iscroll.js');
?>
<div class="product-node-images-main">
  <div class="product-node-images">
    <div class="product-node-images-inner">
      <img  class="smallimage" id="single-img" src="<?php print $base_url . '/' . $node->field_image_cache[0]['filepath']; ?>" alt="" height="350" width="350">
    </div>
  </div>

  <div class="all-images-img">
    <?php for ($i = 0; $i < count($node->field_image_cache); $i++) { ?>
      <?php $path = $base_url . '/' . $node->field_image_cache[$i]['filepath']; ?>
      <a href="#" onclick="changeit('<?php print $path; ?>','single-img','smallimg');return false;" ><img onclick="this.className='off';return false"   id="smallimg"src="<?php print $path; ?>" alt="" height="75" width="75"></a>
      <?php } ?>
  </div>
</div>
