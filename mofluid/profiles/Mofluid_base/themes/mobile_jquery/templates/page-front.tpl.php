<?php
global $base_url;
?>
<!DOCTYPE html> 
<html> 
	<head> 
		<meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no" />
		<title><?php print $head_title; ?></title>
		<?php print $styles; ?>
		<?php print $scripts; ?>
		<?php /*   if (!empty($jqm_scripts)) { print $jqm_scripts; }  */ ?>
    <?php global $base_url;?>
<style>
.swipe li img {
max-width: 100%;
}

</style>
	</head>
	<?php //print custom_uc_cart_get_contents();?>
	<body class="<?php print $body_classes; ?>" onorientationchange="changeOrientation(event);" onload="changeOrientation(event)"> 
		<div id="header" data-role="page" class="<?php print $node_classes; ?>">
			<div data-role="header" data-theme="<?php print $header_data_theme; ?>" data-position="<?php print $header_data_position; ?>"> 
				<div id="header-left">
					<a  class = "site-logo" href ="<?php print $base_url;?>"><?php print $site_name; ?></a>
					<?php if (!$is_front) : ?>
					<a href="../../" data-icon="back" data-iconpos="notext" data-direction="reverse" title="Back" data-rel="back">Back</a>
					<a href="../../" data-icon="home" data-iconpos="notext" data-direction="reverse" title="Home">Home</a>
					<?php endif; ?>
					<?php if ($tabs): print $tabs; endif; ?>
					<?php if ($tabs2): print $tabs2; endif; ?>
				</div>
				<div class="cart-items">
					<?php if($headertop){ print $headertop;}?>
				</div>	
			</div><!-- /header -->   
			 
			<div id="search-bar"> 
				 <div id="search">
					<form action="<?php print $base_url;?>/product" method="get">
						<input type="text" class="form-text" value="<?php print $_REQUEST['title'];?>" size="30" id="edit-title" name="title" maxlength="128">
						 <input type="submit" class="form-submit" value="" id="edit-submit-search-products">
					</form> 	
				  </div>
			</div>  
			<div id='banner'>
               <?php if($banner){
				    print $banner;
				   }
				?>
             </div>
            </div>
		    </div>
			<div id="content" data-role="content" data-theme="<?php print $content_data_theme; ?>">
				<div class="content-primary">
					<?php if ($mission && $is_front): print '<div id="mission">'. $mission .'</div>'; endif; ?>
					<?php if ($show_messages && $messages): print $messages; endif; ?>
					<?php print $help; ?>
					<div id="main-category">
						<?php print $content; ?>
					</div>
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
            <script src='<?php print $base_url;?>/profiles/Mofluid_base/libraries/swipejs/swipe.js'></script>
            <script>
            var slider1 = new Swipe(document.getElementById('slider1'), {
              auto:1500,
                speed: 500,
              callback: function(event, index, elem) {

                         // do something cool
                   //
                }
            
            });
            </script>
		</div><!-- /page --> 
	</body> 
</html> 

