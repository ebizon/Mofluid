<?php
//$Id$

/*
 * @file
 *  Cart Checkout custom render form
 */
?>
<!--<div class="order-top-most"><?php //print t('Shipping - place order');  ?></div>-->
<div class="order-top">
  <div class="checkout-left" ><?php //print t('SHIPPING ADDRESS');  ?></div>
  <div class="checkout-right" ><?php print t('*required'); ?></div>
</div>

<div class="checkout-main">
  <div class="customer-details" >
    <div class="checkout-form" id="custom_name"><?php print drupal_render($form['panes']['billing']['billing_first_name']); ?></div>
    <div class="checkout-form" ><?php print drupal_render($form['panes']['billing']['billing_last_name']); ?></div>
    <div class="checkout-form" id="custom_email"><?php print drupal_render($form['panes']['customer']['primary_email']); ?></div>
    <div class="checkout-form" id="custom_postal" ><?php print drupal_render($form['panes']['billing']['billing_postal_code']); ?></div>
    <div class="ajax-custom-msg-zip"></div>
    <div class="checkout-form" id="custom_phone"><?php print drupal_render($form['panes']['billing']['billing_phone']); ?></div>
    <div class="checkout-form" id="custom_address" ><?php print drupal_render($form['panes']['billing']['billing_street1']); ?></div>
    <div class="checkout-form" id="custom_city" ><?php print drupal_render($form['panes']['billing']['billing_city']); ?></div>
    <div class="checkout-form" id="custom_country" ><?php print drupal_render($form['panes']['billing']['billing_country']); ?></div>
    <div class="checkout-form" id="custom_state" ><?php print drupal_render($form['panes']['billing']['billing_zone']); ?></div>
  </div>

  <div class="customer-details">
    <div class="checkout-form"><?php print drupal_render($form['continue']); ?></div>
  </div>

  <div class="customer-details" >
    <div class="checkout-form"><?php print drupal_render($form['cancel']); ?></div>
  </div>

  <div class="checkout-form" style="display:none;"><?php print drupal_render($form); ?></div>
</div>