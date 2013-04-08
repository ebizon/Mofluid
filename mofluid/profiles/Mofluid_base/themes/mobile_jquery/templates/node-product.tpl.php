<?php 
//$Id$
/*
 * @file
 *   Product node page.
 */
global $base_url;
$count_attr = count($attributes);
$previous = node_previous_button($node->nid);
$next =  node_next_button($node->nid);
$stock = (unserialize(get_validate_product_stock($node->nid)));
$stock_status = $stock[0]['qty'];
drupal_add_js(drupal_get_path('theme', 'mobile_jquery').'/jquery.js');
//print_r($node);
?>

<div id="product-page">
	<div id="pdt-title"><?php print $node->title;?></div>
	
		<div id="selling-price"><?php print str_replace('Price:','',str_replace('.00','',$node->content['sell_price']['#value']));?></div>
		<?php if($node->list_price > $node->sell_price){ ?>
		<div id="list-price"><?php  print str_replace('List Price:','',str_replace('.00','',$node->content['list_price']['#value']));?></div>
		<?php } ?>
		<div id="percentage-off"><?php print  get_percentage_off($node->list_price,$node->sell_price);?></div>
	
	<div class="stock_status"><?php  if($stock_status == 'false') { print t('Out Of Stock');}//print   $stock_status = get_stock_status($node->nid);?></div>
	
	<div class="zoom">
		<?php //print l("Other View","product-images/$node->nid",array("attributes" => array("id" => "zoomimg"),));?>
		<a id="zoomimg" href="<?php print $base_url?>/product-images/<?php print $node->nid;?>">
          <img src="<?php print $base_url.'/'.path_to_theme().'/images/search-plus.png' ?>" alt="" height="15" width="15">
	    </a>
    </div>
    
    <div class="product-pager-section">
		<?php print $previous;?>
		 <div class="single-image">
           <img  class="smallimage" id="single-img" src="<?php print $base_url.'/'.$node->field_image_cache[0]['filepath'];?>" alt="" height="393" width="393">
           <!--<img  class="bigimage" style="display:none;" src="<?php print $base_url.'/'.$node->field_image_cache[0]['filepath'];?>" alt="" height="800" width="800">-->
         </div>
		<?php //print get_zoom_image($node); ?>
		
		<?php print $next;?>
	</div>
	
	<div class="all-images-img">
						<?php
						for($i = 0;$i < count($node->field_image_cache);$i++) { ?>
						<?php $path =  $base_url.'/'.$node->field_image_cache[$i]['filepath'];?>
						<a href="#" onclick="changeit('<?php print $path ; ?>','single-img','smallimg');return false;" ><img onclick="this.className='off';return false"   id="smallimg"src="<?php print $path;?>" alt="" height="75" width="75"></a>
						<?php } ?>
	</div>
	<div class="add-to-cart">
	    <?php 
	         if($count_attr > 0){
	          $size_opt = module_invoke('mofluid_custom','block','view',0);
	          print $size_opt['subject'];
              print $size_opt['content'];
		   }
        ?>
		<?php print str_replace('size:','Select size (Indian Size)',$node->content['add_to_cart']['#value']); ?>
		<?php //if($stock_status != 'Out Of Stock') { print str_replace('size:','Select size (Indian Size)',$node->content['add_to_cart']['#value']);} ?>
	</div>

	<div id="pdt-brief-des">
		<?php foreach($node->taxonomy as $term){
				if ($term->vid == 5){
					print t('Details for ').$term->name;
				}
			}?>
		<?php print ' - '.$node->title;?>
	</div>
<div class="description">
  <?php print $node->content['body']['#value'];?>
</div>

<?php print $links; ?>
</div>
</div>

