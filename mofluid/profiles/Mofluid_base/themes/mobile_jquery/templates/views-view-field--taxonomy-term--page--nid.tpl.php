<?php
$node = node_load($output);
global $base_url;
$img = '<img src="'.$base_url.'/'.$node->field_image_cache[0]['filepath'].'" alt='.$node->title.' title='.$node->title.' height="87" width="100">';
?>
  <div class="views-field-field-image-cache-fid">
          <span class="field-content">
          <?php  print l($img,'node/'.$node->nid,array('query' => '#page_top','html'=>TRUE)); ?></span>
  </div>
  
  <div class="views-field-tid">
                <span class="field-content">
                <?php foreach($node->taxonomy as $term){
				   if ($term->vid == 5){
					    print $term->name;
				     }
			      }?>
                </span>
  </div>
  
  <div class="views-field-title">
                <span class="field-content"><?php print l($node->title,'node/'.$node->nid,array('query' => '#page_top'));?></span>
  </div>
  
  <div class="views-field-sell-price">
                <span class="field-content"><?php print str_replace(".00000",'',$node->sell_price);?></span>
  </div>
  
  <div class="views-field-tid-1">
                <span class="field-content"></span>
  </div>
          
   
