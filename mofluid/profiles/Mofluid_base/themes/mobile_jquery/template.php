<?php

/**
* Add include and setting files
*/

require_once(drupal_get_path('theme', 'mobile_jquery') . '/theme-settings.php');
require_once(drupal_get_path('theme', 'mobile_jquery') . '/includes/mobile_jquery.system.inc');
require_once(drupal_get_path('theme', 'mobile_jquery') . '/includes/mobile_jquery.theme.inc');
require_once(drupal_get_path('theme', 'mobile_jquery') . '/includes/mobile_jquery.comments.inc');
require_once(drupal_get_path('theme', 'mobile_jquery') . '/includes/mobile_jquery.forms.inc');
require_once(drupal_get_path('theme', 'mobile_jquery') . '/includes/mobile_jquery.menus.inc');
require_once(drupal_get_path('theme', 'mobile_jquery') . '/includes/mobile_jquery.pager.inc');
require_once(drupal_get_path('theme', 'mobile_jquery') . '/includes/mobile_jquery.filter.inc');
require_once(drupal_get_path('theme', 'mobile_jquery') . '/includes/mobile_jquery.taxonomy.inc');
require_once(drupal_get_path('theme', 'mobile_jquery') . '/includes/mobile_jquery.user.inc');
require_once(drupal_get_path('theme', 'mobile_jquery') . '/includes/mobile_jquery.upload.inc');


/**
 * Initialize theme settings
 */
global $theme_key;
if (db_is_active()) {
  mobile_jquery_initialize_theme_settings($theme_key);
}

/**
 * Implementation of template_preprocess_maintenance_page()
 */
function mobile_jquery_preprocess_maintenance_page(&$vars) {
  if (db_is_active()) {
    mobile_jquery_preprocess_page($vars);
  }
}

/**
 * Implementation of hook_preprocess()
 * 
 * @param $vars
 * @param $hook
 * @return Array
 */
function mobile_jquery_preprocess(&$vars, $hook) {
  // Collect all information for the active theme.
  $themes_active = array();
  global $theme_info;

  $vars['use_global']             = theme_get_setting('use_global');
  
  $vars['global_icon']            = theme_get_setting('global_icon');
  $vars['global_inset']           = theme_get_setting('global_inset');
  $vars['global_theme']           = theme_get_setting('global_theme');
  $vars['global_spliticon']       = theme_get_setting('global_spliticon');
  
  $vars['list_item_icon']         = $vars['use_global']?$vars['global_icon']:theme_get_setting('list_item_icon');
  $vars['list_item_inset']        = $vars['use_global']?$vars['global_inset']:theme_get_setting('list_item_inset');
  $vars['list_item_theme']        = $vars['use_global']?$vars['global_theme']:theme_get_setting('list_item_theme');
  $vars['list_item_dividertheme'] = $vars['use_global']?$vars['global_theme']:theme_get_setting('list_item_dividertheme');
  $vars['list_item_counttheme']   = $vars['use_global']?$vars['global_theme']:theme_get_setting('list_item_counttheme');
  $vars['list_item_splittheme']   = $vars['use_global']?$vars['global_theme']:theme_get_setting('list_item_splittheme');
  $vars['list_item_spliticon']    = $vars['use_global']?$vars['global_spliticon']:theme_get_setting('list_item_spliticon');
  
  $vars['menu_item_icon']         = $vars['use_global']?$vars['global_icon']:theme_get_setting('menu_item_icon');
  $vars['menu_item_inset']        = $vars['use_global']?$vars['global_inset']:theme_get_setting('menu_item_inset');
  $vars['menu_item_theme']        = $vars['use_global']?$vars['global_theme']:theme_get_setting('menu_item_theme');
  $vars['menu_item_dividertheme'] = $vars['use_global']?$vars['global_theme']:theme_get_setting('menu_item_dividertheme');
  $vars['menu_item_counttheme']   = $vars['use_global']?$vars['global_theme']:theme_get_setting('menu_item_counttheme');
  $vars['menu_item_splittheme']   = $vars['use_global']?$vars['global_theme']:theme_get_setting('menu_item_splittheme');
  $vars['menu_item_spliticon']    = $vars['use_global']?$vars['global_spliticon']:theme_get_setting('menu_item_spliticon');
  
  $vars['header_data_theme']      = $vars['use_global']?$vars['global_theme']:theme_get_setting('header_data_theme');
  $vars['content_data_theme']     = $vars['use_global']?$vars['global_theme']:theme_get_setting('content_data_theme');
  $vars['footer_data_theme']      = $vars['use_global']?$vars['global_theme']:theme_get_setting('footer_data_theme');  
  $vars['header_data_position']   = theme_get_setting('header_data_position');
  $vars['footer_data_position']   = theme_get_setting('footer_data_position');

  
  // If there is a base theme, collect the names of all themes that may have 
  // preprocess files to load.
  if ($theme_info->base_theme) {
    global $base_theme_info;
    foreach ($base_theme_info as $base) {
      $themes_active[] = $base->name;
    }
  }

  // Add the active theme to the list of themes that may have preprocess files.
  $themes_active[] = $theme_info->name;
  // Check all active themes for preprocess files that will need to be loaded.
  foreach ($themes_active as $name) {
    if (is_file(drupal_get_path('theme', $name) . '/includes/preprocess-' . str_replace('_', '-', $hook) . '.inc')) {
      include(drupal_get_path('theme', $name) . '/includes/preprocess-' . str_replace('_', '-', $hook) . '.inc');
    }
  }
}

function mobile_jquery_get_styles() {
  return array(
    'all' => array(
      'module' => array(
        'modules/node/node.css' => 1,
        'modules/system/defaults.css' => 1,
        'modules/system/system.css' => 1,
        'modules/system/system-menus.css' => 1,
        'modules/user/user.css' => 1,
        'sites/all/modules/admin/includes/admin.toolbar.base.css' => 1,
        'sites/all/modules/admin/includes/admin.toolbar.css' => 1,
        'sites/all/modules/admin/includes/admin.menu.css' => 1,
        'sites/all/modules/admin/includes/admin.devel.css' => 1,
        'sites/all/modules/devel/devel.css' => 1,
      ),
    ),
  );
}

function mobile_jquery_get_scripts() {
  return array(
    'module' => array(
      'misc/farbtastic/farbtastic.js' => 'farbtastic.js',
      'misc/teaser.js' => 'teaser.js',
      'misc/jquery.form.js' => 'jquery.form.js',
      'misc/ahah.js' => 'ahah.js',
      'misc/tabledrag.js' => 'tabledrag.js',
      'misc/autocomplete.js' => 'autocomplete.js',
      'sites/all/modules/admin/includes/jquery.drilldown.js' => 'admin.toolbar.js',
      'sites/all/modules/admin/includes/admin.toolbar.js' => 'admin.toolbar.js',
      'sites/all/modules/admin/includes/admin.menu.js' => 'admin.menu.js',
      'sites/all/modules/admin/includes/admin.devel.js' => 'admin.devel.js',
    ),
    'core' => array(
      'misc/tabledrag.js' => 'tabledrag.js',
    ),
  );
}
function phptemplate_breadcrumb($breadcrumb) {
	//$breadcrumb[] = l('Home','<front>');
	if (arg(0) == 'taxonomy' && arg(1) == 'term'){
		$arg = arg(2);
		$myterm = taxonomy_get_term($arg);
		$parent = taxonomy_get_parents($arg);
		
	    foreach ($parent as $parent_term) {
			$parentparent = taxonomy_get_parents($parent_term->tid);
			foreach($parentparent as $pp){
	                $breadcrumb[]="<div id='parent-name'>".l($pp->name,'sub_category/'.$pp->tid)."</div>";
		         }
			$breadcrumb[]="<div id='parent-name'>".l($parent_term->name,'sub_sub_category/'.$parent_term->tid)."</div>";
			$breadcrumb[]="<strong>".drupal_get_title()."</strong>";
		}
	} else if(arg(0) == 'cart' && arg(1) == 'checkout'){
		$breadcrumb[]="<div id='parent-name'>".t('Shipping - order detail')."</div>";
	} else if(arg(2) == 'review'){
		$breadcrumb[]="<div id='parent-name'>".t('Shipping - place order')."</div>";
	} else if(arg(0) == 'node' && is_numeric(arg(1))){
		$node = node_load(arg(1));
		foreach($node->taxonomy as $term){
			if($term->vid == 8)	{
				$tid = $term->tid;	
			}
		}
		$myterm = taxonomy_get_term($tid);
		$parenttrem = taxonomy_get_parents($tid);
		$child = taxonomy_get_children($tid);
		foreach($parenttrem as $p){
			$parentofparent = taxonomy_get_parents($p->tid);
			 foreach($parentofparent as $pop){
	                $breadcrumb[]="<div id='parent-name'>".l($pop->name,'sub_category/'.$pop->tid)."</div>";
		         }
			$breadcrumb[]="<div id='parent-name'>".l($p->name,'sub_sub_category/'.$p->tid)."</div>";
		}
		
	    $breadcrumb[]="<div id='parent-name'>".l($myterm->name,'taxonomy/term/'.$myterm->tid)."</div>";
		$breadcrumb[]="<strong>".drupal_get_title()."</strong>";
	} 
	if (!empty($breadcrumb)) {
		$breadcrumb = array_unique($breadcrumb);
        return '<div class="breadcrumb">'. implode("<div id='pipe_symbol'>".' | '."</div>", $breadcrumb) .'</div>';
    }
}


/**
 * Theme the checkout review order page.
 *
 * @param $panes
 *   An associative array for each checkout pane that has information to add to
 *   the review page.  The key is the pane's title and the value is either the
 *   data returned for that pane or an array of returned data.
 * @param $form
 *   The HTML version of the form that by default includes the 'Back' and
 *   'Submit order' buttons at the bottom of the review page.
 * @return
 *   A string of HTML for the page contents.
 * @ingroup themeable
 */
function mobile_jquery_uc_cart_checkout_review($panes, $form) {
    $items = uc_cart_get_contents();
    $custom_address = explode("||",$panes['Billing information'][0]['data']);
	$custom_address = array_filter($custom_address);
	
	$custom_address[6] = get_state_fullname_zone_code($custom_address[6]);
	$final_address = implode("<br>",$custom_address);
	drupal_add_js('$(document).ready(function(){ $("#edit-back").hide();});','inline');
   /* $output  ='<div class="order-top-most">'.t('Shipping - Confirm Order').'</div>
			   <div class="order-top">
					 <div class="checkout-right" >'. t('CONFIRM ORDER').'</div>
			    </div>'; */
    
    $output  .= '<div class="checkout-main">';
    foreach($items as $item){
		$price = ($item->price * $item->qty);
		$output  .='<div class="cart-list"><div class="cart-list-items"><span><b>'.t('Title: ').'</b></span><span class="product-title">'.$item->title.'</span></div>';
		$output  .='<div class="cart-list-items"><span><b>'.t('Delivery:').'</b></span>'.t('2-3 business days').'</div>';
		$output  .='<div class="cart-list-items"><span><b>'.t('Price: ').'</b></span><span class="uc-price"></span> '.$item->price.'</div>';
		$output  .='<div class="cart-list-items"><span><b>'.t('Quantity: ').'</b></span>'.$item->qty.'</div>';
		$output  .='<div class="cart-list-items"><span><b>'.t('Amount Payable: ').'</b></span><span class="uc-price"></span> '.$price.'</div></div>';
		}
        
		$output  .= '<div class="cart-amount">'.t('Total Amount Payable: ').str_replace('.00','',$panes['Payment method'][1]['data']).'</div>';
		
		$output  .= '<div class="cart-shipping"><div class="cart-shipping-heading">'.t('SHIPPING ADDRESS').'</div>';
		$output  .= '<div class="cart-shipping-data">'.$final_address.'</div></div>';
        $output  .= '<div class="cart-amount"><b>'.t('Your mode of payment is Cash on Delivery').'</b></div>';
        $output  .= '<div class="cart-button">'.$form.'</div>';
        $output  .= '</div>';
      return $output;
}


