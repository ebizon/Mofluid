<!DOCTYPE html> 
<html> 
	<head> 
<!--		
<meta name="viewport" content="width=device-width, initial-scale=1"> 
-->

<?php if(arg(0) == 'product-images'){?>
		<meta name="viewport" content="initial-scale=1.0" />
<?php } else {?>
         <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no" />
      <?php } ?>
		<title><?php print $head_title; ?></title>
		<?php print $styles; ?>
		<?php print $scripts; ?>
		<?php   if (!empty($jqm_scripts)) { print $jqm_scripts; }  ?>
		<?php global $base_url;?>
	</head> 
	<?php
	 //echo custom_uc_cart_get_contents();
	//$product_count = count(uc_cart_get_contents());
	//print_r(uc_cart_get_contents());
   $custom_style = '';
	if((arg(0) == 'cart' && arg(1) == 'checkout' && arg(2) == '')){
		$custom_style = 'primary-info';
	} else if(arg(2) == 'review'){
		$custom_style = 'primary-info-review';
	} else if(arg(2) == 'complete'){
		$custom_style = 'primary-info-thank';
	}
	?>
	<body class="<?php print $body_classes .' '. $custom_style; ?>" id="innersub" onorientationchange="changeOrientation(event);" onload="changeOrientation(event)"> 
	<?php //print $node->nid; 
	//print $call_function = mobile_jquery_active_taxonomy($node->nid);die; ?>
	<?php //print $terms;die;?>
		<div id="header" data-role="page" class="<?php print $node_classes; ?>">
			<div data-role="header" data-theme="<?php print $header_data_theme; ?>" data-position="<?php print $header_data_position; ?>"> 
				<div id="header-left">
					<a class = "site-logo" href ="<?php print $base_url;?>"><?php print $site_name; ?></a>
					<?php if ($tabs): print $tabs; endif; ?>
					<?php if ($tabs2): print $tabs2; endif; ?>
				</div>
				<div class="cart-items">
				     
					<?php if($headertop){ print $headertop;}?>
				</div>	
			</div><!-- /header -->   
			<div id="search-bar-inner">
				<div id="back-page">
						<?php if(arg(2) == 'complete'){ ?>
				        <a href="<?php print $base_url ?>" data-icon="home" data-iconpos="notext" data-direction="reverse" title="Home">Home</a>
				        <?php } else { ?>
				         <a href="javascript:history.go(-1);" data-icon="back" data-iconpos="notext" data-direction="reverse" title="Back" data-rel="back">Back</a>
				        <?php } ?>
				 </div>
				   
				<div id="search">
					<form action="<?php print $base_url;?>/product" method="get">
						<input type="text" class="form-text" value="<?php print $_REQUEST['title'];?>" size="30" id="edit-title" name="title" maxlength="128">
						<input type="submit" class="form-submit" value="" id="edit-submit-search-products">
					</form>    
				 </div>
				
			</div>
			<div id="content" data-role="content" data-theme="<?php print $content_data_theme; ?>">
				<div class="content-primary">
					<?php if ($mission && $is_front): print '<div id="mission">'. $mission .'</div>'; endif; ?>
					<?php if ($show_messages && $messages): print $messages; endif; ?>
					<?php print $help; ?>
					<a name="page_top"></a>
					<?php print $breadcrumb;?>
					<?php print append_custom_div();?>
					<div id="title"><?php print mofluid_custom_title($title); ?></div>
					<?php if(arg(0) == 'sub_category'){?>
					<div id="sub_ctg_page">
					<?php print $content; ?>
					</div>	
					<?php }else{?>
					<div id="other-page">
					<?php print $content;?>
					</div>
					<?php }?>
					
				</div>
				<div class="content-secondary">
					<?php if (!empty($first)): ?>
						<div class="first-sidebar">
							<?php print $first; ?>
						</div>
					<?php endif; ?>
					<?php if (!empty($second)): ?>
						<div class="second-sidebar">
							<?php print $second; ?>
						</div>
					<?php endif; ?>
				</div>
			</div><!-- /data-role="content" --> 
			<?php if (!empty($footer)): ?>
				<div id="footer" data-role="footer" data-theme="<?php print $footer_data_theme; ?>" data-position="<?php print $footer_data_position; ?>"> 
					<?php print $footer; ?>
				</div><!-- /footer --> 
			<?php endif; ?>
	    </div><!-- /page --> 
	</body> 
</html> 
<div id="check_not_front" style="display:none;"><?php print arg(0);?></div>
