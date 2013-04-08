
<!DOCTYPE html> 
<html> 
 
<head> 
  <meta name="viewport" content="width=device-width, initial-scale=1"> 
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <?php if (!empty($jqm_scripts)) { print $jqm_scripts; } ?>
</head> 
 
<body class="<?php print $body_classes; ?>"> 

 <div data-role="page" class="<?php print $node_classes; ?>">

  <div data-role="header" data-theme="<?php print $header_data_theme; ?>" data-position="<?php print $header_data_position; ?>"> 
    <h1><?php print $site_name; ?></h1>
    <?php if (!$is_front) : ?>
    <a href="../../" data-icon="back" data-iconpos="notext" data-direction="reverse" title="Back" data-rel="back">Back</a>
    <a href="../../" data-icon="home" data-iconpos="notext" data-direction="reverse" title="Home">Home</a>
    <?php endif; ?>
    <?php if ($tabs): print $tabs; endif; ?>
    <?php if ($tabs2): print $tabs2; endif; ?>

  </div><!-- /header -->   
  
  <div data-role="content" data-theme="<?php print $content_data_theme; ?>">
    <div class="content-primary">
      <?php if ($mission && $is_front): print '<div id="mission">'. $mission .'</div>'; endif; ?>
      <?php if ($show_messages && $messages): print $messages; endif; ?>
      <?php print $help; ?>

      <?php print $content; ?>
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
  <div data-role="footer" data-theme="<?php print $footer_data_theme; ?>" data-position="<?php print $footer_data_position; ?>"> 
    <?php print $footer; ?>
  </div><!-- /footer --> 
  <?php endif; ?>
  
</div><!-- /page --> 
  
</body> 
</html> 