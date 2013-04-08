<?php



/**
 * Implementation of hook_profile_details().
 */
function Mofluid_base_profile_details() {
  return array(
    'name' => 'Mofluid_base',
    'description' => 'An e-commerce Install profile.',
  );
}

/**
 * Implementation of hook_profile_modules().
 */
function Mofluid_base_profile_modules() {
  $modules = array(
     // Drupal core
    'block','filter','node','system','user',
	// core-optional
	'color','dblog','help','menu','path','php','search','syslog','taxonomy','update','upload',
	// other
	'getid3','lightbox2','poormanscron','skinr','taxonomy_super_select','token',
	// webform
	'webform',
	// views
	'better_exposed_filters','views_export','views_ui','views_nivo_slider','views','views_infinite_pager',
	// cck
	'content','content_copy','filefield','filefield_meta','imagefield','fieldgroup',
	// image
	'image_attach','image_gallery','image_import','image_im_advanced','image',
	// imagecache
	'imageapi','imageapi_gd','imageapi_imagemagick','imagecache','imagecache_ui',
	// development
	'profiler_builder',
	// ubercart-core
	'ca','uc_cart','uc_order','uc_product','uc_store',
	// ubercart-core(optional)
	'uc_payment','uc_quote','uc_shipping','uc_reports','uc_roles','uc_taxes','uc_tax_report','uc_attribute',
	// ubercart-payment
	'uc_paypal',
	// ubercart-fulfillment
	'uc_weightquote',
	// ubercart-extra
	'uc_cart_links','uc_product_kit','uc_stock','uc_dropdown_attributes',
	// bestyle custom
	'mofluid_cart','mofluid_custom','import_products',
	//features
	'features',
	//mofluid features
	'mofluid_commerce',
	// user-interface
	'jquery_update',
    // Admin
    'admin_menu',
  );


  return $modules;
}


/**
 * Implementation of hook_profile_task_list().
 */
function Mofluid_base_profile_task_list() {
  $tasks['intranet-modules-batch'] = st('Install Mofluid_base modules');  
  $tasks['intranet-configure-batch'] = st('Configure Mofluid_base');
  return $tasks;
}

/**
 * Implementation of hook_profile_tasks().
 */
function Mofluid_base_profile_tasks(&$task, $url) {
  global $profile, $install_locale;
  
  // Just in case some of the future tasks adds some output
  $output = '';

  // Download and install translation if needed
  if ($task == 'profile') {
    // Rebuild the language list.
    // When running through the CLI, the static language list will be empty
    // unless we repopulate it from the ,newly available, database.
    // language_list('name', TRUE);
    $task = 'intranet-modules';
  }

  // We are running a batch task for this profile so basically do nothing and return page
  if (in_array($task, array('intranet-modules-batch', 'intranet-configure-batch'))) {
    include_once 'includes/batch.inc';
    $output = _batch_page();
  }
    
  // Install some more modules and maybe localization helpers too
  if ($task == 'intranet-modules') {
    $modules = Mofluid_base_profile_modules();
    $files = module_rebuild_cache();
    // Create batch
    foreach ($modules as $module) {
      $batch['operations'][] = array('_install_module_batch', array($module, $files[$module]->info['name']));
    }    
    $batch['finished'] = '_Mofluid_base_profile_batch_finished';
    $batch['title'] = st('Installing @drupal', array('@drupal' => drupal_install_profile_name()));
    $batch['error_message'] = st('The installation has encountered an error.');

    // Start a batch, switch to 'intranet-modules-batch' task. We need to
    // set the variable here, because batch_process() redirects.
    variable_set('install_task', 'intranet-modules-batch');
    batch_set($batch);
    batch_process($url, $url);

    // Just for cli installs. We'll never reach here on interactive installs.
    return;
	$task = 'intranet-configure';
  }
  

  // Run additional configuration tasks
  // @todo Review all the cache/rebuild options at the end, some of them may not be needed
  // @todo Review for localization, the time zone cannot be set that way either
  if ($task == 'intranet-configure') {
    $batch['title'] = st('Configuring @drupal', array('@drupal' => drupal_install_profile_name()));
    $batch['operations'][] = array('_Mofluid_base_intranet_configure', array());
    $batch['operations'][] = array('_Mofluid_base_intranet_configure_check', array());
    $batch['finished'] = '_Mofluid_base_intranet_configure_finished';
    variable_set('install_task', 'intranet-configure-batch');
    batch_set($batch);
    batch_process($url, $url);
    // Jut for cli installs. We'll never reach here on interactive installs.
    return;
  }  

  return $output;
}


/**
 * Configuration. First stage.
 */
function _Mofluid_base_intranet_configure() {
  global $install_locale;
  // Add some basic permissions for anonymous and authenticated users.
     db_query("UPDATE {permission} SET perm = CONCAT(perm, ', view catalog, view cart links report, create orders') WHERE rid = 1");
     db_query("UPDATE {permission} set perm = 'access content, view catalog, view own orders' WHERE rid = 2");
	 db_query("UPDATE {system} SET weight = '-1' WHERE type='module' and name='uc_cart'");
  // Import database dump file.
  $dump_file = dirname(__FILE__) . '/tables_dump.sql';
  $success = import_dump($dump_file);
  
    if (!$success) {
    return;
  }


}

/**
 * Configuration. Second stage.
 */
function _Mofluid_base_intranet_configure_check() {
  // This isn't actually necessary as there are no node_access() entries,
  // but we run it to prevent the "rebuild node access" message from being
  // shown on install.
  node_access_rebuild();

  // Rebuild key tables/caches
  drupal_flush_all_caches();

  // Set default theme. This must happen after drupal_flush_all_caches(), which
  // will run system_theme_data() without detecting themes in the install
  // profile directory.
  _Mofluid_base_system_theme_data();
  //db_query("UPDATE {blocks} SET status = 0, region = ''"); // disable all DB blocks
  //db_query("UPDATE {system} SET status = 0 WHERE type = 'theme' and name ='%s'", 'garland');
  //db_query("UPDATE {system} SET status = 0 WHERE type = 'theme' and name ='%s'", 'mobile_jquery');
  //theme_enable(array('mobile_jquery'));
  variable_set('theme_default', 'mobile_jquery');
  variable_set('admin_theme', 'garland');
  variable_set('site_frontpage','category');
  variable_set('getid3_path','profiles/Mofluid_base/libraries/getid3/getid3');
  // Set a default footer message.
  variable_set('site_footer', st('Built with <a href="@oalink">Mofluid</a>', array('@oalink' => 'http://www.mofluid.com')));

 }



/**
 * Finished callback for the modules install batch.
 *
 * Advance installer task to language import.
 */
function _Mofluid_base_profile_batch_finished($success, $results) {
  variable_set('install_task', 'intranet-configure');
}


/**
 * Finish configuration batch
 * 
 * @todo Handle error condition
 */
function _Mofluid_base_intranet_configure_finished($success, $results) {
  //variable_set('atrium_install', 1);
  if ($success) {
    variable_set('install_task', 'profile-finished');
  }
}

/**
 * Alter some forms implementing hooks in system module namespace
 * This is a trick for hooks to get called, otherwise we cannot alter forms
 */

/**
 * @TODO: This might be impolite/too aggressive. We should at least check that
 * other install profiles are not present to ensure we don't collide with a
 * similar form alter in their profile.
 *
 * Set Mofluid_base as default install profile.
 */
function system_form_install_select_profile_form_alter(&$form, $form_state) {
  foreach($form['profile'] as $key => $element) {
    $form['profile'][$key]['#value'] = 'Mofluid_base';
  }
}

/**
 * Set English as default language.
 * 
 * If no language selected, the installation crashes. I guess English should be the default 
 * but it isn't in the default install. @todo research, core bug?
 */
function system_form_install_select_locale_form_alter(&$form, $form_state) {
  $form['locale']['en']['#value'] = 'en';
}

/**
 * Alter the install profile configuration form and provide timezone location options.
 */
function system_form_install_configure_form_alter(&$form, $form_state) {
  $form['site_information']['site_name']['#default_value'] = 'Mofluid';
  $form['site_information']['site_mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST'];
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  // $form['admin_account']['account']['mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST'];

//  if (function_exists('date_timezone_names') && function_exists('date_timezone_update_site')) {
//    $form['server_settings']['date_default_timezone']['#access'] = FALSE;
//    $form['server_settings']['#element_validate'] = array('date_timezone_update_site');
//    $form['server_settings']['date_default_timezone_name'] = array(
//      '#type' => 'select',
//      '#title' => t('Default time zone'),
//      '#default_value' => NULL,
//      '#options' => date_timezone_names(FALSE, TRUE),
//      '#description' => t('Select the default site time zone. If in doubt, choose the timezone that is closest to your location which has the same rules for daylight saving time.'),
//      '#required' => TRUE,
//    );
//  }
}

function import_dump($filename) {
  // Open dump file.
  if (!file_exists($filename) || !($fp = fopen($filename, 'r'))) {
    drupal_set_message(t('Unable to open dump file %filename.', array('%filename' => $filename)), 'error');
    return FALSE;
  }
// Drop existing tables.
   db_query("DROP TABLE %s", 'vocabulary');
   db_query("DROP TABLE %s", 'vocabulary_node_types');
   db_query("DROP TABLE %s", 'term_data');
   db_query("DROP TABLE %s", 'term_hierarchy');
   db_query("DROP TABLE %s", 'imagecache_action');
   db_query("DROP TABLE %s", 'imagecache_preset');
   db_query("DROP TABLE %s", 'blocks');
   db_query("DROP TABLE %s", 'blocks_roles');
   
     // Load data from dump file.
  $success = TRUE;
  $query = '';
  $new_line = TRUE;

  while (!feof($fp)) {
    // Better performance on PHP 5.2.x when leaving out buffer size to
    // fgets().
    $data = fgets($fp);
    if ($data === FALSE) {
      break;
    }
    // Skip empty lines (including lines that start with a comment).
    if ($new_line && ($data == "\n" || !strncmp($data, '--', 2) || !strncmp($data, '#', 1))) {
      continue;
    }

    $query .= $data;
    $len = strlen($data);
    if ($data[$len - 1] == "\n") {
      if ($data[$len - 2] == ';') {
        // Reached the end of a query, now execute it.
        if (!_db_query($query, FALSE)) {
          $success = FALSE;
        }
        $query = '';
      }
      $new_line = TRUE;
    }
    else {
      // Continue adding data from the same line.
      $new_line = FALSE;
    }
  }
  fclose($fp);

  if (!$success) {
    drupal_set_message(t('Failed importing database from %filename.', array('%filename' => $filename)), 'error');
  }

  return $success;
}
/**
 * Reimplementation of system_theme_data(). The core function's static cache
 * is populated during install prior to active install profile awareness.
 * This workaround makes enabling themes in profiles/[profile]/themes possible.
 */
function _Mofluid_base_system_theme_data() {
  global $profile;
  $profile = 'Mofluid_base';

  $themes = drupal_system_listing('\.info$', 'themes');
  $engines = drupal_system_listing('\.engine$', 'themes/engines');

  $defaults = system_theme_default();

  $sub_themes = array();
  foreach ($themes as $key => $theme) {
    $themes[$key]->info = drupal_parse_info_file($theme->filename) + $defaults;

    if (!empty($themes[$key]->info['base theme'])) {
      $sub_themes[] = $key;
    }

    $engine = $themes[$key]->info['engine'];
    if (isset($engines[$engine])) {
      $themes[$key]->owner = $engines[$engine]->filename;
      $themes[$key]->prefix = $engines[$engine]->name;
      $themes[$key]->template = TRUE;
    }

    // Give the stylesheets proper path information.
    $pathed_stylesheets = array();
    foreach ($themes[$key]->info['stylesheets'] as $media => $stylesheets) {
      foreach ($stylesheets as $stylesheet) {
        $pathed_stylesheets[$media][$stylesheet] = dirname($themes[$key]->filename) .'/'. $stylesheet;
      }
    }
    $themes[$key]->info['stylesheets'] = $pathed_stylesheets;

    // Give the scripts proper path information.
    $scripts = array();
    foreach ($themes[$key]->info['scripts'] as $script) {
      $scripts[$script] = dirname($themes[$key]->filename) .'/'. $script;
    }
    $themes[$key]->info['scripts'] = $scripts;

    // Give the screenshot proper path information.
    if (!empty($themes[$key]->info['screenshot'])) {
      $themes[$key]->info['screenshot'] = dirname($themes[$key]->filename) .'/'. $themes[$key]->info['screenshot'];
    }
  }

  foreach ($sub_themes as $key) {
    $themes[$key]->base_themes = system_find_base_themes($themes, $key);
    // Don't proceed if there was a problem with the root base theme.
    if (!current($themes[$key]->base_themes)) {
      continue;
    }
    $base_key = key($themes[$key]->base_themes);
    foreach (array_keys($themes[$key]->base_themes) as $base_theme) {
      $themes[$base_theme]->sub_themes[$key] = $themes[$key]->info['name'];
    }
    // Copy the 'owner' and 'engine' over if the top level theme uses a
    // theme engine.
    if (isset($themes[$base_key]->owner)) {
      if (isset($themes[$base_key]->info['engine'])) {
        $themes[$key]->info['engine'] = $themes[$base_key]->info['engine'];
        $themes[$key]->owner = $themes[$base_key]->owner;
        $themes[$key]->prefix = $themes[$base_key]->prefix;
      }
      else {
        $themes[$key]->prefix = $key;
      }
    }
  }

  // Extract current files from database.
  system_get_files_database($themes, 'theme');
  db_query("DELETE FROM {system} WHERE type = 'theme'");
  foreach ($themes as $theme) {
    $theme->owner = !isset($theme->owner) ? '' : $theme->owner;
    db_query("INSERT INTO {system} (name, owner, info, type, filename, status, throttle, bootstrap) VALUES ('%s', '%s', '%s', '%s', '%s', %d, %d, %d)", $theme->name, $theme->owner, serialize($theme->info), 'theme', $theme->filename, isset($theme->status) ? $theme->status : 0, 0, 0);
  }
}

