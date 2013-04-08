<?php
define('CUSTOM_CART_REMOVE_CALLBACK', 'custom_cart/remove/item');
drupal_add_js(drupal_get_path('module', 'mofluid_cart') . '/mofluid_cart.js');
$counter = count(element_children($form['items']));
drupal_set_title('SHOPPING CART');
$items = uc_cart_get_contents();
?>

<div class="cart-form">
   <div id="cart-form-products"><?php print drupal_render($form['checkout']); ?></div>

   <?php
   foreach (element_children($form['items']) as $i) {
     $nid = $form['items'][$i]['nid']['#value'];
     $node = node_load($nid);
     $customrenovelink = '<div class="cart-remove"></div>';
     $remove_link = l($customrenovelink, CUSTOM_CART_REMOVE_CALLBACK, array('attributes' => array(
         'class' => 'remove-cart-link',
       ),
       'query' => array(
         'nid' => $nid,
         'destination' => 'cart',
         'data' => $form['items'][$i]['data']['#value'],
         'qty' => $form['items'][$i]['qty']['#value'],
         'action' => 'remove',
       ),
       'html' => true,
         )
     );
     ?>
     <?php
     $shippable = unserialize($form['items'][$i]['data']['#value']);
     //print_r($shippable);
     if ($i < ($counter - 1)) {
       ?>
     <div class="cart-product-info">
       <div id="cart-remove-<?php print $nid;?>" style="display:none;" class="remove-check"><?php print drupal_render($form['items'][$i]['remove']); ?></div>
	   <div id="cart-image"><?php print drupal_render($form['items'][$i]['image']); ?></div>
     <div id="cart-categogy"><?php
    $category = '';
    $terms = taxonomy_node_get_terms_by_vocabulary($node, 5);
    if ($terms) {
      foreach ($terms as $term) {
        $category = $term->name;
      }
    }
    unset($terms);
    print $category;
    ?>
	   </div>
	   <div id="cart-desc"><?php print drupal_render($form['items'][$i]['desc']); ?></div>
	   <div id="cart-total"><?php print t('Price: ').str_replace('.00','',drupal_render($form['items'][$i]['total'])); ?></div>
	   <div id="cart-qty-text-<?php print $nid;?>"><?php print t('Quantity: ').$form['items'][$i]['qty']['#value']; ?></div>
	   <div id="cart-qty-<?php print $nid;?>"  class="cart-qyt" style='display:none;'><?php print t('Quantity: ').drupal_render($form['items'][$i]['qty']); ?></div>
     </div>
     <?php } else { ?>
    <div class="cart-product-info-subtotal">
       <div id="cart-total"><?php print str_replace('.00','',drupal_render($form['items'][$i]['total'])); ?></div>
    </div>
     <?php } ?>

   <div id="cart-form-products"><?php print drupal_render($form['items'][$i]['data']); ?></div>

  <?php if($i < ($counter-1)){ ?>
	  <div id="cart-form-products-link">
	   <?php print $remove_link ;?>
	     <div id="product-qty-<?php print $nid;?>" style='display:none;'>
	       <input type="submit" class="cart-save" value="Save" id="edit-update" name="op">
	    </div>
	   <div id="cart-edit-<?php print $nid;?>" class="cart-edit"><?php print t('Edit'); ?></div>

	  </div>
   <?php } ?>

   <?php  } //print_r(uc_product_get_attributes($node->nid));?>
   <div id="cart-continue-shopping"><?php print drupal_render($form['continue_shopping']); ?></div>
   <div style='display:none;'>
      <?php print drupal_render($form); ?>
    </div>

</div>