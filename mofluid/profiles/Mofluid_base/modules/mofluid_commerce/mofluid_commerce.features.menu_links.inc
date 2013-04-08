<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function mofluid_commerce_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: admin_menu:<front>
  $menu_links['admin_menu:<front>'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => '<img class="admin-menu-icon" src="/try/misc/favicon.ico" width="16" height="16" alt="Home" />',
    'options' => array(
      'extra class' => 'admin-menu-icon',
      'html' => TRUE,
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-100',
  );
  // Exported menu link: admin_menu:admin/build
  $menu_links['admin_menu:admin/build'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build',
    'router_path' => 'admin/build',
    'link_title' => 'Site building',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
  );
  // Exported menu link: admin_menu:admin/build/block
  $menu_links['admin_menu:admin/build/block'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/block',
    'router_path' => 'admin/build/block',
    'link_title' => 'Blocks',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin_menu:admin/build/block/add
  $menu_links['admin_menu:admin/build/block/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/block/add',
    'router_path' => 'admin/build/block/add',
    'link_title' => 'Add block',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/block',
  );
  // Exported menu link: admin_menu:admin/build/block/list
  $menu_links['admin_menu:admin/build/block/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/block/list',
    'router_path' => 'admin/build/block/list',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/build/block',
  );
  // Exported menu link: admin_menu:admin/build/block/list/garland
  $menu_links['admin_menu:admin/build/block/list/garland'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/block/list/garland',
    'router_path' => 'admin/build/block/list/garland',
    'link_title' => 'Garland',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/block/list',
  );
  // Exported menu link: admin_menu:admin/build/features
  $menu_links['admin_menu:admin/build/features'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/features',
    'router_path' => 'admin/build/features',
    'link_title' => 'Features',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin_menu:admin/build/features/create
  $menu_links['admin_menu:admin/build/features/create'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/features/create',
    'router_path' => 'admin/build/features/create',
    'link_title' => 'Create feature',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'admin/build/features',
  );
  // Exported menu link: admin_menu:admin/build/features/manage
  $menu_links['admin_menu:admin/build/features/manage'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/features/manage',
    'router_path' => 'admin/build/features/manage',
    'link_title' => 'Manage',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/features',
  );
  // Exported menu link: admin_menu:admin/build/imagecache
  $menu_links['admin_menu:admin/build/imagecache'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/imagecache',
    'router_path' => 'admin/build/imagecache',
    'link_title' => 'ImageCache',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin_menu:admin/build/imagecache/add
  $menu_links['admin_menu:admin/build/imagecache/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/imagecache/add',
    'router_path' => 'admin/build/imagecache/add',
    'link_title' => 'Add new preset',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/imagecache',
  );
  // Exported menu link: admin_menu:admin/build/imagecache/list
  $menu_links['admin_menu:admin/build/imagecache/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/imagecache/list',
    'router_path' => 'admin/build/imagecache/list',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/build/imagecache',
  );
  // Exported menu link: admin_menu:admin/build/menu
  $menu_links['admin_menu:admin/build/menu'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/menu',
    'router_path' => 'admin/build/menu',
    'link_title' => 'Menus',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin_menu:admin/build/menu/add
  $menu_links['admin_menu:admin/build/menu/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/menu/add',
    'router_path' => 'admin/build/menu/add',
    'link_title' => 'Add menu',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/menu',
  );
  // Exported menu link: admin_menu:admin/build/menu/list
  $menu_links['admin_menu:admin/build/menu/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/menu/list',
    'router_path' => 'admin/build/menu/list',
    'link_title' => 'List menus',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/build/menu',
  );
  // Exported menu link: admin_menu:admin/build/menu/settings
  $menu_links['admin_menu:admin/build/menu/settings'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/menu/settings',
    'router_path' => 'admin/build/menu/settings',
    'link_title' => 'Settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin/build/menu',
  );
  // Exported menu link: admin_menu:admin/build/modules
  $menu_links['admin_menu:admin/build/modules'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/modules',
    'router_path' => 'admin/build/modules',
    'link_title' => 'Modules',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin_menu:admin/build/modules/list
  $menu_links['admin_menu:admin/build/modules/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/modules/list',
    'router_path' => 'admin/build/modules/list',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/modules',
  );
  // Exported menu link: admin_menu:admin/build/modules/uninstall
  $menu_links['admin_menu:admin/build/modules/uninstall'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/modules/uninstall',
    'router_path' => 'admin/build/modules/uninstall',
    'link_title' => 'Uninstall',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/modules',
  );
  // Exported menu link: admin_menu:admin/build/path
  $menu_links['admin_menu:admin/build/path'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/path',
    'router_path' => 'admin/build/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin_menu:admin/build/path/add
  $menu_links['admin_menu:admin/build/path/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/path/add',
    'router_path' => 'admin/build/path/add',
    'link_title' => 'Add alias',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/path',
  );
  // Exported menu link: admin_menu:admin/build/path/list
  $menu_links['admin_menu:admin/build/path/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/path/list',
    'router_path' => 'admin/build/path/list',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/build/path',
  );
  // Exported menu link: admin_menu:admin/build/themes
  $menu_links['admin_menu:admin/build/themes'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/themes',
    'router_path' => 'admin/build/themes',
    'link_title' => 'Themes',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin_menu:admin/build/themes/select
  $menu_links['admin_menu:admin/build/themes/select'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/themes/select',
    'router_path' => 'admin/build/themes/select',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'admin/build/themes',
  );
  // Exported menu link: admin_menu:admin/build/themes/settings
  $menu_links['admin_menu:admin/build/themes/settings'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/themes/settings',
    'router_path' => 'admin/build/themes/settings',
    'link_title' => 'Configure',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/themes',
  );
  // Exported menu link: admin_menu:admin/build/themes/settings/garland
  $menu_links['admin_menu:admin/build/themes/settings/garland'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/themes/settings/garland',
    'router_path' => 'admin/build/themes/settings/garland',
    'link_title' => 'Garland',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/themes/settings',
  );
  // Exported menu link: admin_menu:admin/build/themes/settings/global
  $menu_links['admin_menu:admin/build/themes/settings/global'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/themes/settings/global',
    'router_path' => 'admin/build/themes/settings/global',
    'link_title' => 'Global settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'admin/build/themes/settings',
  );
  // Exported menu link: admin_menu:admin/build/views
  $menu_links['admin_menu:admin/build/views'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/views',
    'router_path' => 'admin/build/views',
    'link_title' => 'Views',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin_menu:admin/build/views/add
  $menu_links['admin_menu:admin/build/views/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/views/add',
    'router_path' => 'admin/build/views/add',
    'link_title' => 'Add',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/views',
  );
  // Exported menu link: admin_menu:admin/build/views/import
  $menu_links['admin_menu:admin/build/views/import'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/views/import',
    'router_path' => 'admin/build/views/import',
    'link_title' => 'Import',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/views',
  );
  // Exported menu link: admin_menu:admin/build/views/list
  $menu_links['admin_menu:admin/build/views/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/views/list',
    'router_path' => 'admin/build/views/list',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'admin/build/views',
  );
  // Exported menu link: admin_menu:admin/build/views/tools
  $menu_links['admin_menu:admin/build/views/tools'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/views/tools',
    'router_path' => 'admin/build/views/tools',
    'link_title' => 'Tools',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/views',
  );
  // Exported menu link: admin_menu:admin/build/views/tools/basic
  $menu_links['admin_menu:admin/build/views/tools/basic'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/views/tools/basic',
    'router_path' => 'admin/build/views/tools/basic',
    'link_title' => 'Basic',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/build/views/tools',
  );
  // Exported menu link: admin_menu:admin/build/views/tools/convert
  $menu_links['admin_menu:admin/build/views/tools/convert'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/views/tools/convert',
    'router_path' => 'admin/build/views/tools/convert',
    'link_title' => 'Convert',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/build/views/tools',
  );
  // Exported menu link: admin_menu:admin/build/views/tools/export
  $menu_links['admin_menu:admin/build/views/tools/export'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/views/tools/export',
    'router_path' => 'admin/build/views/tools/export',
    'link_title' => 'Bulk export',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/views/tools',
  );
  // Exported menu link: admin_menu:admin/build/views/tools/export/results
  $menu_links['admin_menu:admin/build/views/tools/export/results'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/build/views/tools/export/results',
    'router_path' => 'admin/build/views/tools/export/results',
    'link_title' => 'Bulk export results',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build/views/tools/export',
  );
  // Exported menu link: admin_menu:admin/by-module
  $menu_links['admin_menu:admin/by-module'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/by-module',
    'router_path' => 'admin/by-module',
    'link_title' => 'By module',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/content
  $menu_links['admin_menu:admin/content'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content management',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
  );
  // Exported menu link: admin_menu:admin/content/image
  $menu_links['admin_menu:admin/content/image'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/image',
    'router_path' => 'admin/content/image',
    'link_title' => 'Image galleries',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin_menu:admin/content/image/add
  $menu_links['admin_menu:admin/content/image/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/image/add',
    'router_path' => 'admin/content/image/add',
    'link_title' => 'Add gallery',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/image',
  );
  // Exported menu link: admin_menu:admin/content/image/list
  $menu_links['admin_menu:admin/content/image/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/image/list',
    'router_path' => 'admin/content/image/list',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/content/image',
  );
  // Exported menu link: admin_menu:admin/content/image_import
  $menu_links['admin_menu:admin/content/image_import'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/image_import',
    'router_path' => 'admin/content/image_import',
    'link_title' => 'Image import',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin_menu:admin/content/node
  $menu_links['admin_menu:admin/content/node'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node',
    'router_path' => 'admin/content/node',
    'link_title' => 'Content',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin_menu:admin/content/node-settings
  $menu_links['admin_menu:admin/content/node-settings'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-settings',
    'router_path' => 'admin/content/node-settings',
    'link_title' => 'Post settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin_menu:admin/content/node-type/image
  $menu_links['admin_menu:admin/content/node-type/image'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/image',
    'router_path' => 'admin/content/node-type/image',
    'link_title' => 'Edit !content-type',
    'options' => array(
      't' => array(
        '!content-type' => 'Image',
      ),
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/types',
  );
  // Exported menu link: admin_menu:admin/content/node-type/image/display
  $menu_links['admin_menu:admin/content/node-type/image/display'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/image/display',
    'router_path' => 'admin/content/node-type/image/display',
    'link_title' => 'Display fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'admin/content/node-type/image',
  );
  // Exported menu link: admin_menu:admin/content/node-type/image/display/basic
  $menu_links['admin_menu:admin/content/node-type/image/display/basic'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/image/display/basic',
    'router_path' => 'admin/content/node-type/image/display/basic',
    'link_title' => 'Basic',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/node-type/image/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/image/display/rss
  $menu_links['admin_menu:admin/content/node-type/image/display/rss'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/image/display/rss',
    'router_path' => 'admin/content/node-type/image/display/rss',
    'link_title' => 'RSS',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/image/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/image/display/search
  $menu_links['admin_menu:admin/content/node-type/image/display/search'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/image/display/search',
    'router_path' => 'admin/content/node-type/image/display/search',
    'link_title' => 'Search',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/image/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/image/display/token
  $menu_links['admin_menu:admin/content/node-type/image/display/token'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/image/display/token',
    'router_path' => 'admin/content/node-type/image/display/token',
    'link_title' => 'Token',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/image/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/image/fields
  $menu_links['admin_menu:admin/content/node-type/image/fields'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/image/fields',
    'router_path' => 'admin/content/node-type/image/fields',
    'link_title' => 'Manage fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/image',
  );
  // Exported menu link: admin_menu:admin/content/node-type/page
  $menu_links['admin_menu:admin/content/node-type/page'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/page',
    'router_path' => 'admin/content/node-type/page',
    'link_title' => 'Edit !content-type',
    'options' => array(
      't' => array(
        '!content-type' => 'Page',
      ),
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/types',
  );
  // Exported menu link: admin_menu:admin/content/node-type/page/display
  $menu_links['admin_menu:admin/content/node-type/page/display'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/page/display',
    'router_path' => 'admin/content/node-type/page/display',
    'link_title' => 'Display fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'admin/content/node-type/page',
  );
  // Exported menu link: admin_menu:admin/content/node-type/page/display/basic
  $menu_links['admin_menu:admin/content/node-type/page/display/basic'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/page/display/basic',
    'router_path' => 'admin/content/node-type/page/display/basic',
    'link_title' => 'Basic',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/node-type/page/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/page/display/rss
  $menu_links['admin_menu:admin/content/node-type/page/display/rss'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/page/display/rss',
    'router_path' => 'admin/content/node-type/page/display/rss',
    'link_title' => 'RSS',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/page/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/page/display/search
  $menu_links['admin_menu:admin/content/node-type/page/display/search'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/page/display/search',
    'router_path' => 'admin/content/node-type/page/display/search',
    'link_title' => 'Search',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/page/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/page/display/token
  $menu_links['admin_menu:admin/content/node-type/page/display/token'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/page/display/token',
    'router_path' => 'admin/content/node-type/page/display/token',
    'link_title' => 'Token',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/page/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/page/fields
  $menu_links['admin_menu:admin/content/node-type/page/fields'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/page/fields',
    'router_path' => 'admin/content/node-type/page/fields',
    'link_title' => 'Manage fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/page',
  );
  // Exported menu link: admin_menu:admin/content/node-type/page/fields/field_image_cache
  $menu_links['admin_menu:admin/content/node-type/page/fields/field_image_cache'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/page/fields/field_image_cache',
    'router_path' => 'admin/content/node-type/page/fields/field_image_cache',
    'link_title' => 'Image',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/node-type/page/fields',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product
  $menu_links['admin_menu:admin/content/node-type/product'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product',
    'router_path' => 'admin/content/node-type/product',
    'link_title' => 'Edit !content-type',
    'options' => array(
      't' => array(
        '!content-type' => 'Product',
      ),
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/types',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product-kit
  $menu_links['admin_menu:admin/content/node-type/product-kit'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product-kit',
    'router_path' => 'admin/content/node-type/product-kit',
    'link_title' => 'Edit !content-type',
    'options' => array(
      't' => array(
        '!content-type' => 'Product kit',
      ),
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/types',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product-kit/display
  $menu_links['admin_menu:admin/content/node-type/product-kit/display'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product-kit/display',
    'router_path' => 'admin/content/node-type/product-kit/display',
    'link_title' => 'Display fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'admin/content/node-type/product-kit',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product-kit/display/basic
  $menu_links['admin_menu:admin/content/node-type/product-kit/display/basic'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product-kit/display/basic',
    'router_path' => 'admin/content/node-type/product-kit/display/basic',
    'link_title' => 'Basic',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/node-type/product-kit/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product-kit/display/rss
  $menu_links['admin_menu:admin/content/node-type/product-kit/display/rss'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product-kit/display/rss',
    'router_path' => 'admin/content/node-type/product-kit/display/rss',
    'link_title' => 'RSS',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/product-kit/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product-kit/display/search
  $menu_links['admin_menu:admin/content/node-type/product-kit/display/search'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product-kit/display/search',
    'router_path' => 'admin/content/node-type/product-kit/display/search',
    'link_title' => 'Search',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/product-kit/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product-kit/display/token
  $menu_links['admin_menu:admin/content/node-type/product-kit/display/token'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product-kit/display/token',
    'router_path' => 'admin/content/node-type/product-kit/display/token',
    'link_title' => 'Token',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/product-kit/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product-kit/fields
  $menu_links['admin_menu:admin/content/node-type/product-kit/fields'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product-kit/fields',
    'router_path' => 'admin/content/node-type/product-kit/fields',
    'link_title' => 'Manage fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/product-kit',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product-kit/fields/field_image_cache
  $menu_links['admin_menu:admin/content/node-type/product-kit/fields/field_image_cache'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product-kit/fields/field_image_cache',
    'router_path' => 'admin/content/node-type/product-kit/fields/field_image_cache',
    'link_title' => 'Image',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/node-type/product-kit/fields',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product/display
  $menu_links['admin_menu:admin/content/node-type/product/display'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product/display',
    'router_path' => 'admin/content/node-type/product/display',
    'link_title' => 'Display fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'admin/content/node-type/product',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product/display/basic
  $menu_links['admin_menu:admin/content/node-type/product/display/basic'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product/display/basic',
    'router_path' => 'admin/content/node-type/product/display/basic',
    'link_title' => 'Basic',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/node-type/product/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product/display/rss
  $menu_links['admin_menu:admin/content/node-type/product/display/rss'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product/display/rss',
    'router_path' => 'admin/content/node-type/product/display/rss',
    'link_title' => 'RSS',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/product/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product/display/search
  $menu_links['admin_menu:admin/content/node-type/product/display/search'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product/display/search',
    'router_path' => 'admin/content/node-type/product/display/search',
    'link_title' => 'Search',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/product/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product/display/token
  $menu_links['admin_menu:admin/content/node-type/product/display/token'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product/display/token',
    'router_path' => 'admin/content/node-type/product/display/token',
    'link_title' => 'Token',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/product/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product/fields
  $menu_links['admin_menu:admin/content/node-type/product/fields'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product/fields',
    'router_path' => 'admin/content/node-type/product/fields',
    'link_title' => 'Manage fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/product',
  );
  // Exported menu link: admin_menu:admin/content/node-type/product/fields/field_image_cache
  $menu_links['admin_menu:admin/content/node-type/product/fields/field_image_cache'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/product/fields/field_image_cache',
    'router_path' => 'admin/content/node-type/product/fields/field_image_cache',
    'link_title' => 'Image',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/node-type/product/fields',
  );
  // Exported menu link: admin_menu:admin/content/node-type/slider
  $menu_links['admin_menu:admin/content/node-type/slider'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/slider',
    'router_path' => 'admin/content/node-type/slider',
    'link_title' => 'Edit !content-type',
    'options' => array(
      't' => array(
        '!content-type' => 'Slider',
      ),
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/types',
  );
  // Exported menu link: admin_menu:admin/content/node-type/slider/display
  $menu_links['admin_menu:admin/content/node-type/slider/display'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/slider/display',
    'router_path' => 'admin/content/node-type/slider/display',
    'link_title' => 'Display fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'admin/content/node-type/slider',
  );
  // Exported menu link: admin_menu:admin/content/node-type/slider/display/basic
  $menu_links['admin_menu:admin/content/node-type/slider/display/basic'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/slider/display/basic',
    'router_path' => 'admin/content/node-type/slider/display/basic',
    'link_title' => 'Basic',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/node-type/slider/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/slider/display/rss
  $menu_links['admin_menu:admin/content/node-type/slider/display/rss'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/slider/display/rss',
    'router_path' => 'admin/content/node-type/slider/display/rss',
    'link_title' => 'RSS',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/slider/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/slider/display/search
  $menu_links['admin_menu:admin/content/node-type/slider/display/search'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/slider/display/search',
    'router_path' => 'admin/content/node-type/slider/display/search',
    'link_title' => 'Search',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/slider/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/slider/display/token
  $menu_links['admin_menu:admin/content/node-type/slider/display/token'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/slider/display/token',
    'router_path' => 'admin/content/node-type/slider/display/token',
    'link_title' => 'Token',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/slider/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/slider/fields
  $menu_links['admin_menu:admin/content/node-type/slider/fields'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/slider/fields',
    'router_path' => 'admin/content/node-type/slider/fields',
    'link_title' => 'Manage fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/slider',
  );
  // Exported menu link: admin_menu:admin/content/node-type/slider/fields/field_slider_images
  $menu_links['admin_menu:admin/content/node-type/slider/fields/field_slider_images'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/slider/fields/field_slider_images',
    'router_path' => 'admin/content/node-type/slider/fields/field_slider_images',
    'link_title' => 'Slider Images',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/node-type/slider/fields',
  );
  // Exported menu link: admin_menu:admin/content/node-type/webform
  $menu_links['admin_menu:admin/content/node-type/webform'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/webform',
    'router_path' => 'admin/content/node-type/webform',
    'link_title' => 'Edit !content-type',
    'options' => array(
      't' => array(
        '!content-type' => 'Webform',
      ),
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/types',
  );
  // Exported menu link: admin_menu:admin/content/node-type/webform/display
  $menu_links['admin_menu:admin/content/node-type/webform/display'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/webform/display',
    'router_path' => 'admin/content/node-type/webform/display',
    'link_title' => 'Display fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'admin/content/node-type/webform',
  );
  // Exported menu link: admin_menu:admin/content/node-type/webform/display/basic
  $menu_links['admin_menu:admin/content/node-type/webform/display/basic'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/webform/display/basic',
    'router_path' => 'admin/content/node-type/webform/display/basic',
    'link_title' => 'Basic',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/node-type/webform/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/webform/display/rss
  $menu_links['admin_menu:admin/content/node-type/webform/display/rss'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/webform/display/rss',
    'router_path' => 'admin/content/node-type/webform/display/rss',
    'link_title' => 'RSS',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/webform/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/webform/display/search
  $menu_links['admin_menu:admin/content/node-type/webform/display/search'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/webform/display/search',
    'router_path' => 'admin/content/node-type/webform/display/search',
    'link_title' => 'Search',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/webform/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/webform/display/token
  $menu_links['admin_menu:admin/content/node-type/webform/display/token'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/webform/display/token',
    'router_path' => 'admin/content/node-type/webform/display/token',
    'link_title' => 'Token',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/webform/display',
  );
  // Exported menu link: admin_menu:admin/content/node-type/webform/fields
  $menu_links['admin_menu:admin/content/node-type/webform/fields'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node-type/webform/fields',
    'router_path' => 'admin/content/node-type/webform/fields',
    'link_title' => 'Manage fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/content/node-type/webform',
  );
  // Exported menu link: admin_menu:admin/content/node/overview
  $menu_links['admin_menu:admin/content/node/overview'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/node/overview',
    'router_path' => 'admin/content/node/overview',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/content/node',
  );
  // Exported menu link: admin_menu:admin/content/rss-publishing
  $menu_links['admin_menu:admin/content/rss-publishing'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/rss-publishing',
    'router_path' => 'admin/content/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin_menu:admin/content/taxonomy
  $menu_links['admin_menu:admin/content/taxonomy'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/taxonomy',
    'router_path' => 'admin/content/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin_menu:admin/content/taxonomy/add/vocabulary
  $menu_links['admin_menu:admin/content/taxonomy/add/vocabulary'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/taxonomy/add/vocabulary',
    'router_path' => 'admin/content/taxonomy/add/vocabulary',
    'link_title' => 'Add vocabulary',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/taxonomy',
  );
  // Exported menu link: admin_menu:admin/content/taxonomy/list
  $menu_links['admin_menu:admin/content/taxonomy/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/taxonomy/list',
    'router_path' => 'admin/content/taxonomy/list',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/content/taxonomy',
  );
  // Exported menu link: admin_menu:admin/content/types
  $menu_links['admin_menu:admin/content/types'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/types',
    'router_path' => 'admin/content/types',
    'link_title' => 'Content types',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin_menu:admin/content/types/add
  $menu_links['admin_menu:admin/content/types/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/types/add',
    'router_path' => 'admin/content/types/add',
    'link_title' => 'Add content type',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/types',
  );
  // Exported menu link: admin_menu:admin/content/types/export
  $menu_links['admin_menu:admin/content/types/export'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/types/export',
    'router_path' => 'admin/content/types/export',
    'link_title' => 'Export',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'admin/content/types',
  );
  // Exported menu link: admin_menu:admin/content/types/fields
  $menu_links['admin_menu:admin/content/types/fields'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/types/fields',
    'router_path' => 'admin/content/types/fields',
    'link_title' => 'Fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/types',
  );
  // Exported menu link: admin_menu:admin/content/types/import
  $menu_links['admin_menu:admin/content/types/import'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/types/import',
    'router_path' => 'admin/content/types/import',
    'link_title' => 'Import',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'admin/content/types',
  );
  // Exported menu link: admin_menu:admin/content/types/list
  $menu_links['admin_menu:admin/content/types/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/types/list',
    'router_path' => 'admin/content/types/list',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/content/types',
  );
  // Exported menu link: admin_menu:admin/content/webform
  $menu_links['admin_menu:admin/content/webform'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/webform',
    'router_path' => 'admin/content/webform',
    'link_title' => 'Webforms',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin_menu:admin/help
  $menu_links['admin_menu:admin/help'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/help',
    'router_path' => 'admin/help',
    'link_title' => 'Help',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '9',
  );
  // Exported menu link: admin_menu:admin/reports
  $menu_links['admin_menu:admin/reports'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: admin_menu:admin/reports/access-denied
  $menu_links['admin_menu:admin/reports/access-denied'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/reports/access-denied',
    'router_path' => 'admin/reports/access-denied',
    'link_title' => 'Top \'access denied\' errors',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: admin_menu:admin/reports/dblog
  $menu_links['admin_menu:admin/reports/dblog'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log entries',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: admin_menu:admin/reports/page-not-found
  $menu_links['admin_menu:admin/reports/page-not-found'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/reports/page-not-found',
    'router_path' => 'admin/reports/page-not-found',
    'link_title' => 'Top \'page not found\' errors',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: admin_menu:admin/reports/search
  $menu_links['admin_menu:admin/reports/search'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: admin_menu:admin/reports/status
  $menu_links['admin_menu:admin/reports/status'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: admin_menu:admin/reports/status/run-cron
  $menu_links['admin_menu:admin/reports/status/run-cron'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/reports/status/run-cron',
    'router_path' => 'admin/reports/status/run-cron',
    'link_title' => 'Run cron',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '50',
    'parent_path' => '<front>',
  );
  // Exported menu link: admin_menu:admin/reports/updates
  $menu_links['admin_menu:admin/reports/updates'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/reports/updates',
    'router_path' => 'admin/reports/updates',
    'link_title' => 'Available updates',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: admin_menu:admin/reports/updates/list
  $menu_links['admin_menu:admin/reports/updates/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/reports/updates/list',
    'router_path' => 'admin/reports/updates/list',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports/updates',
  );
  // Exported menu link: admin_menu:admin/reports/updates/settings
  $menu_links['admin_menu:admin/reports/updates/settings'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/reports/updates/settings',
    'router_path' => 'admin/reports/updates/settings',
    'link_title' => 'Settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports/updates',
  );
  // Exported menu link: admin_menu:admin/settings
  $menu_links['admin_menu:admin/settings'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings',
    'router_path' => 'admin/settings',
    'link_title' => 'Site configuration',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
  );
  // Exported menu link: admin_menu:admin/settings/actions
  $menu_links['admin_menu:admin/settings/actions'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/actions',
    'router_path' => 'admin/settings/actions',
    'link_title' => 'Actions',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/actions/manage
  $menu_links['admin_menu:admin/settings/actions/manage'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/actions/manage',
    'router_path' => 'admin/settings/actions/manage',
    'link_title' => 'Manage actions',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-2',
    'parent_path' => 'admin/settings/actions',
  );
  // Exported menu link: admin_menu:admin/settings/admin
  $menu_links['admin_menu:admin/settings/admin'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/admin',
    'router_path' => 'admin/settings/admin',
    'link_title' => 'Administration theme',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/admin_menu
  $menu_links['admin_menu:admin/settings/admin_menu'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/admin_menu',
    'router_path' => 'admin/settings/admin_menu',
    'link_title' => 'Administration menu',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/clean-urls
  $menu_links['admin_menu:admin/settings/clean-urls'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/clean-urls',
    'router_path' => 'admin/settings/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/date-time
  $menu_links['admin_menu:admin/settings/date-time'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/date-time',
    'router_path' => 'admin/settings/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/error-reporting
  $menu_links['admin_menu:admin/settings/error-reporting'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/error-reporting',
    'router_path' => 'admin/settings/error-reporting',
    'link_title' => 'Error reporting',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/file-system
  $menu_links['admin_menu:admin/settings/file-system'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/file-system',
    'router_path' => 'admin/settings/file-system',
    'link_title' => 'File system',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/filters
  $menu_links['admin_menu:admin/settings/filters'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/filters',
    'router_path' => 'admin/settings/filters',
    'link_title' => 'Input formats',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/filters/add
  $menu_links['admin_menu:admin/settings/filters/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/filters/add',
    'router_path' => 'admin/settings/filters/add',
    'link_title' => 'Add input format',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/settings/filters',
  );
  // Exported menu link: admin_menu:admin/settings/filters/list
  $menu_links['admin_menu:admin/settings/filters/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/filters/list',
    'router_path' => 'admin/settings/filters/list',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings/filters',
  );
  // Exported menu link: admin_menu:admin/settings/getid3
  $menu_links['admin_menu:admin/settings/getid3'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/getid3',
    'router_path' => 'admin/settings/getid3',
    'link_title' => 'getID3()',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/image
  $menu_links['admin_menu:admin/settings/image'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/image',
    'router_path' => 'admin/settings/image',
    'link_title' => 'Images',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/image-toolkit
  $menu_links['admin_menu:admin/settings/image-toolkit'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/image-toolkit',
    'router_path' => 'admin/settings/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/image/image_attach
  $menu_links['admin_menu:admin/settings/image/image_attach'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/image/image_attach',
    'router_path' => 'admin/settings/image/image_attach',
    'link_title' => 'Image attach',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings/image',
  );
  // Exported menu link: admin_menu:admin/settings/image/image_gallery
  $menu_links['admin_menu:admin/settings/image/image_gallery'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/image/image_gallery',
    'router_path' => 'admin/settings/image/image_gallery',
    'link_title' => 'Image gallery',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings/image',
  );
  // Exported menu link: admin_menu:admin/settings/image/image_import
  $menu_links['admin_menu:admin/settings/image/image_import'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/image/image_import',
    'router_path' => 'admin/settings/image/image_import',
    'link_title' => 'Image import',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings/image',
  );
  // Exported menu link: admin_menu:admin/settings/image/nodes
  $menu_links['admin_menu:admin/settings/image/nodes'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/image/nodes',
    'router_path' => 'admin/settings/image/nodes',
    'link_title' => 'Files and sizes',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/settings/image',
  );
  // Exported menu link: admin_menu:admin/settings/imageapi
  $menu_links['admin_menu:admin/settings/imageapi'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/imageapi',
    'router_path' => 'admin/settings/imageapi',
    'link_title' => 'ImageAPI',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/imageapi/config
  $menu_links['admin_menu:admin/settings/imageapi/config'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/imageapi/config',
    'router_path' => 'admin/settings/imageapi/config',
    'link_title' => 'Configure',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings/imageapi',
  );
  // Exported menu link: admin_menu:admin/settings/imageapi/config/imageapi_gd
  $menu_links['admin_menu:admin/settings/imageapi/config/imageapi_gd'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/imageapi/config/imageapi_gd',
    'router_path' => 'admin/settings/imageapi/config/imageapi_gd',
    'link_title' => '@name',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings/imageapi/config',
  );
  // Exported menu link: admin_menu:admin/settings/imageapi/config/imageapi_imagemagick
  $menu_links['admin_menu:admin/settings/imageapi/config/imageapi_imagemagick'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/imageapi/config/imageapi_imagemagick',
    'router_path' => 'admin/settings/imageapi/config/imageapi_imagemagick',
    'link_title' => '@name',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings/imageapi/config',
  );
  // Exported menu link: admin_menu:admin/settings/imageapi/list
  $menu_links['admin_menu:admin/settings/imageapi/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/imageapi/list',
    'router_path' => 'admin/settings/imageapi/list',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'admin/settings/imageapi',
  );
  // Exported menu link: admin_menu:admin/settings/jquery_update
  $menu_links['admin_menu:admin/settings/jquery_update'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/jquery_update',
    'router_path' => 'admin/settings/jquery_update',
    'link_title' => 'jQuery Update',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/lightbox2
  $menu_links['admin_menu:admin/settings/lightbox2'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/lightbox2',
    'router_path' => 'admin/settings/lightbox2',
    'link_title' => 'Lightbox2',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/lightbox2/automatic
  $menu_links['admin_menu:admin/settings/lightbox2/automatic'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/lightbox2/automatic',
    'router_path' => 'admin/settings/lightbox2/automatic',
    'link_title' => 'Automatic image handling',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'admin/settings/lightbox2',
  );
  // Exported menu link: admin_menu:admin/settings/lightbox2/general
  $menu_links['admin_menu:admin/settings/lightbox2/general'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/lightbox2/general',
    'router_path' => 'admin/settings/lightbox2/general',
    'link_title' => 'General',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings/lightbox2',
  );
  // Exported menu link: admin_menu:admin/settings/lightbox2/html_content
  $menu_links['admin_menu:admin/settings/lightbox2/html_content'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/lightbox2/html_content',
    'router_path' => 'admin/settings/lightbox2/html_content',
    'link_title' => 'HTML Content',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'admin/settings/lightbox2',
  );
  // Exported menu link: admin_menu:admin/settings/lightbox2/slideshow
  $menu_links['admin_menu:admin/settings/lightbox2/slideshow'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/lightbox2/slideshow',
    'router_path' => 'admin/settings/lightbox2/slideshow',
    'link_title' => 'Slideshow',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/settings/lightbox2',
  );
  // Exported menu link: admin_menu:admin/settings/logging
  $menu_links['admin_menu:admin/settings/logging'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/logging',
    'router_path' => 'admin/settings/logging',
    'link_title' => 'Logging and alerts',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/logging/dblog
  $menu_links['admin_menu:admin/settings/logging/dblog'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/logging/dblog',
    'router_path' => 'admin/settings/logging/dblog',
    'link_title' => 'Database logging',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings/logging',
  );
  // Exported menu link: admin_menu:admin/settings/logging/syslog
  $menu_links['admin_menu:admin/settings/logging/syslog'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/logging/syslog',
    'router_path' => 'admin/settings/logging/syslog',
    'link_title' => 'Syslog',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings/logging',
  );
  // Exported menu link: admin_menu:admin/settings/performance
  $menu_links['admin_menu:admin/settings/performance'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/performance',
    'router_path' => 'admin/settings/performance',
    'link_title' => 'Performance',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/profiler_builder
  $menu_links['admin_menu:admin/settings/profiler_builder'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/profiler_builder',
    'router_path' => 'admin/settings/profiler_builder',
    'link_title' => 'Profiler Builder',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/search
  $menu_links['admin_menu:admin/settings/search'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/search',
    'router_path' => 'admin/settings/search',
    'link_title' => 'Search settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/site-information
  $menu_links['admin_menu:admin/settings/site-information'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/site-information',
    'router_path' => 'admin/settings/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/site-maintenance
  $menu_links['admin_menu:admin/settings/site-maintenance'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/site-maintenance',
    'router_path' => 'admin/settings/site-maintenance',
    'link_title' => 'Site maintenance',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/skinr
  $menu_links['admin_menu:admin/settings/skinr'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/skinr',
    'router_path' => 'admin/settings/skinr',
    'link_title' => 'Skinr',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/skinr/export
  $menu_links['admin_menu:admin/settings/skinr/export'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/skinr/export',
    'router_path' => 'admin/settings/skinr/export',
    'link_title' => 'Export',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'admin/settings/skinr',
  );
  // Exported menu link: admin_menu:admin/settings/skinr/import
  $menu_links['admin_menu:admin/settings/skinr/import'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/skinr/import',
    'router_path' => 'admin/settings/skinr/import',
    'link_title' => 'Import',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/settings/skinr',
  );
  // Exported menu link: admin_menu:admin/settings/skinr/settings
  $menu_links['admin_menu:admin/settings/skinr/settings'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/skinr/settings',
    'router_path' => 'admin/settings/skinr/settings',
    'link_title' => 'Settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/settings/skinr',
  );
  // Exported menu link: admin_menu:admin/settings/uploads
  $menu_links['admin_menu:admin/settings/uploads'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/uploads',
    'router_path' => 'admin/settings/uploads',
    'link_title' => 'File uploads',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/webform
  $menu_links['admin_menu:admin/settings/webform'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/webform',
    'router_path' => 'admin/settings/webform',
    'link_title' => 'Webform settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/store
  $menu_links['admin_menu:admin/store'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store',
    'router_path' => 'admin/store',
    'link_title' => 'Store administration',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: admin_menu:admin/store/attributes
  $menu_links['admin_menu:admin/store/attributes'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/attributes',
    'router_path' => 'admin/store/attributes',
    'link_title' => 'Attributes',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'admin/store',
  );
  // Exported menu link: admin_menu:admin/store/attributes/add
  $menu_links['admin_menu:admin/store/attributes/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/attributes/add',
    'router_path' => 'admin/store/attributes/add',
    'link_title' => 'Add an attribute',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin/store/attributes',
  );
  // Exported menu link: admin_menu:admin/store/attributes/overview
  $menu_links['admin_menu:admin/store/attributes/overview'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/attributes/overview',
    'router_path' => 'admin/store/attributes/overview',
    'link_title' => 'Overview',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/attributes',
  );
  // Exported menu link: admin_menu:admin/store/ca
  $menu_links['admin_menu:admin/store/ca'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/ca',
    'router_path' => 'admin/store/ca',
    'link_title' => 'Conditional actions',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin/store',
  );
  // Exported menu link: admin_menu:admin/store/ca/add
  $menu_links['admin_menu:admin/store/ca/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/ca/add',
    'router_path' => 'admin/store/ca/add',
    'link_title' => 'Add a predicate',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin/store/ca',
  );
  // Exported menu link: admin_menu:admin/store/ca/convert
  $menu_links['admin_menu:admin/store/ca/convert'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/ca/convert',
    'router_path' => 'admin/store/ca/convert',
    'link_title' => 'Convert configurations',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'admin/store/ca',
  );
  // Exported menu link: admin_menu:admin/store/ca/overview
  $menu_links['admin_menu:admin/store/ca/overview'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/ca/overview',
    'router_path' => 'admin/store/ca/overview',
    'link_title' => 'Overview',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/ca',
  );
  // Exported menu link: admin_menu:admin/store/ca/overview/class
  $menu_links['admin_menu:admin/store/ca/overview/class'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/ca/overview/class',
    'router_path' => 'admin/store/ca/overview/class',
    'link_title' => 'By class',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin/store/ca/overview',
  );
  // Exported menu link: admin_menu:admin/store/ca/overview/trigger
  $menu_links['admin_menu:admin/store/ca/overview/trigger'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/ca/overview/trigger',
    'router_path' => 'admin/store/ca/overview/trigger',
    'link_title' => 'By trigger',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/ca/overview',
  );
  // Exported menu link: admin_menu:admin/store/customers
  $menu_links['admin_menu:admin/store/customers'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/customers',
    'router_path' => 'admin/store/customers',
    'link_title' => 'Customers',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-6',
    'parent_path' => 'admin/store',
  );
  // Exported menu link: admin_menu:admin/store/customers/search
  $menu_links['admin_menu:admin/store/customers/search'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/customers/search',
    'router_path' => 'admin/store/customers/search',
    'link_title' => 'Search customers',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/customers',
  );
  // Exported menu link: admin_menu:admin/store/customers/view
  $menu_links['admin_menu:admin/store/customers/view'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/customers/view',
    'router_path' => 'admin/store/customers/view',
    'link_title' => 'View customers',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/customers',
  );
  // Exported menu link: admin_menu:admin/store/help
  $menu_links['admin_menu:admin/store/help'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/help',
    'router_path' => 'admin/store/help',
    'link_title' => 'Help',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'admin/store',
  );
  // Exported menu link: admin_menu:admin/store/help/cart_links
  $menu_links['admin_menu:admin/store/help/cart_links'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/help/cart_links',
    'router_path' => 'admin/store/help/cart_links',
    'link_title' => 'Creating cart links',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/help',
  );
  // Exported menu link: admin_menu:admin/store/help/tokens
  $menu_links['admin_menu:admin/store/help/tokens'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/help/tokens',
    'router_path' => 'admin/store/help/tokens',
    'link_title' => 'Using tokens',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/help',
  );
  // Exported menu link: admin_menu:admin/store/orders
  $menu_links['admin_menu:admin/store/orders'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/orders',
    'router_path' => 'admin/store/orders',
    'link_title' => 'Orders',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store',
  );
  // Exported menu link: admin_menu:admin/store/orders/create
  $menu_links['admin_menu:admin/store/orders/create'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/orders/create',
    'router_path' => 'admin/store/orders/create',
    'link_title' => 'Create order',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/orders',
  );
  // Exported menu link: admin_menu:admin/store/orders/search
  $menu_links['admin_menu:admin/store/orders/search'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/orders/search',
    'router_path' => 'admin/store/orders/search',
    'link_title' => 'Search orders',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/orders',
  );
  // Exported menu link: admin_menu:admin/store/orders/view
  $menu_links['admin_menu:admin/store/orders/view'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/orders/view',
    'router_path' => 'admin/store/orders/view',
    'link_title' => 'View orders',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/orders',
  );
  // Exported menu link: admin_menu:admin/store/products
  $menu_links['admin_menu:admin/store/products'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/products',
    'router_path' => 'admin/store/products',
    'link_title' => 'Products',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-2',
    'parent_path' => 'admin/store',
  );
  // Exported menu link: admin_menu:admin/store/products/classes
  $menu_links['admin_menu:admin/store/products/classes'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/products/classes',
    'router_path' => 'admin/store/products/classes',
    'link_title' => 'Manage classes',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-2',
    'parent_path' => 'admin/store/products',
  );
  // Exported menu link: admin_menu:admin/store/products/view
  $menu_links['admin_menu:admin/store/products/view'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/products/view',
    'router_path' => 'admin/store/products/view',
    'link_title' => 'View products',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/products',
  );
  // Exported menu link: admin_menu:admin/store/reports
  $menu_links['admin_menu:admin/store/reports'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/reports',
    'router_path' => 'admin/store/reports',
    'link_title' => 'Reports',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'admin/store',
  );
  // Exported menu link: admin_menu:admin/store/reports/cart_links
  $menu_links['admin_menu:admin/store/reports/cart_links'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/reports/cart_links',
    'router_path' => 'admin/store/reports/cart_links',
    'link_title' => 'Cart links clicks',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/reports',
  );
  // Exported menu link: admin_menu:admin/store/reports/customers
  $menu_links['admin_menu:admin/store/reports/customers'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/reports/customers',
    'router_path' => 'admin/store/reports/customers',
    'link_title' => 'Customer reports',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/reports',
  );
  // Exported menu link: admin_menu:admin/store/reports/products
  $menu_links['admin_menu:admin/store/reports/products'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/reports/products',
    'router_path' => 'admin/store/reports/products',
    'link_title' => 'Product reports',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/reports',
  );
  // Exported menu link: admin_menu:admin/store/reports/products/custom
  $menu_links['admin_menu:admin/store/reports/products/custom'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/reports/products/custom',
    'router_path' => 'admin/store/reports/products/custom',
    'link_title' => 'Custom product report',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/reports/products',
  );
  // Exported menu link: admin_menu:admin/store/reports/products/summary
  $menu_links['admin_menu:admin/store/reports/products/summary'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/reports/products/summary',
    'router_path' => 'admin/store/reports/products/summary',
    'link_title' => 'Product report',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/reports/products',
  );
  // Exported menu link: admin_menu:admin/store/reports/sales
  $menu_links['admin_menu:admin/store/reports/sales'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/reports/sales',
    'router_path' => 'admin/store/reports/sales',
    'link_title' => 'Sales reports',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/reports',
  );
  // Exported menu link: admin_menu:admin/store/reports/sales/custom
  $menu_links['admin_menu:admin/store/reports/sales/custom'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/reports/sales/custom',
    'router_path' => 'admin/store/reports/sales/custom',
    'link_title' => 'Custom sales summary',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'admin/store/reports/sales',
  );
  // Exported menu link: admin_menu:admin/store/reports/sales/summary
  $menu_links['admin_menu:admin/store/reports/sales/summary'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/reports/sales/summary',
    'router_path' => 'admin/store/reports/sales/summary',
    'link_title' => 'Sales summary',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/reports/sales',
  );
  // Exported menu link: admin_menu:admin/store/reports/sales/year
  $menu_links['admin_menu:admin/store/reports/sales/year'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/reports/sales/year',
    'router_path' => 'admin/store/reports/sales/year',
    'link_title' => 'Sales per year',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-7',
    'parent_path' => 'admin/store/reports/sales',
  );
  // Exported menu link: admin_menu:admin/store/reports/stock
  $menu_links['admin_menu:admin/store/reports/stock'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/reports/stock',
    'router_path' => 'admin/store/reports/stock',
    'link_title' => 'Stock reports',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/reports',
  );
  // Exported menu link: admin_menu:admin/store/reports/tax
  $menu_links['admin_menu:admin/store/reports/tax'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/reports/tax',
    'router_path' => 'admin/store/reports/tax',
    'link_title' => 'Sales tax report',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/reports',
  );
  // Exported menu link: admin_menu:admin/store/settings
  $menu_links['admin_menu:admin/store/settings'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings',
    'router_path' => 'admin/store/settings',
    'link_title' => 'Configuration',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '6',
    'parent_path' => 'admin/store',
  );
  // Exported menu link: admin_menu:admin/store/settings/attributes
  $menu_links['admin_menu:admin/store/settings/attributes'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/attributes',
    'router_path' => 'admin/store/settings/attributes',
    'link_title' => 'Attribute settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/cart
  $menu_links['admin_menu:admin/store/settings/cart'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/cart',
    'router_path' => 'admin/store/settings/cart',
    'link_title' => 'Cart settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/cart/edit
  $menu_links['admin_menu:admin/store/settings/cart/edit'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/cart/edit',
    'router_path' => 'admin/store/settings/cart/edit',
    'link_title' => 'Edit',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/cart',
  );
  // Exported menu link: admin_menu:admin/store/settings/cart/edit/basic
  $menu_links['admin_menu:admin/store/settings/cart/edit/basic'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/cart/edit/basic',
    'router_path' => 'admin/store/settings/cart/edit/basic',
    'link_title' => 'Cart settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/cart/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/cart/edit/block
  $menu_links['admin_menu:admin/store/settings/cart/edit/block'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/cart/edit/block',
    'router_path' => 'admin/store/settings/cart/edit/block',
    'link_title' => 'Cart block',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings/cart/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/cart/edit/panes
  $menu_links['admin_menu:admin/store/settings/cart/edit/panes'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/cart/edit/panes',
    'router_path' => 'admin/store/settings/cart/edit/panes',
    'link_title' => 'Cart panes',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/cart/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/cart/overview
  $menu_links['admin_menu:admin/store/settings/cart/overview'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/cart/overview',
    'router_path' => 'admin/store/settings/cart/overview',
    'link_title' => 'Overview',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/cart',
  );
  // Exported menu link: admin_menu:admin/store/settings/cart_links
  $menu_links['admin_menu:admin/store/settings/cart_links'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/cart_links',
    'router_path' => 'admin/store/settings/cart_links',
    'link_title' => 'Cart links settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/checkout
  $menu_links['admin_menu:admin/store/settings/checkout'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/checkout',
    'router_path' => 'admin/store/settings/checkout',
    'link_title' => 'Checkout settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/checkout/edit
  $menu_links['admin_menu:admin/store/settings/checkout/edit'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/checkout/edit',
    'router_path' => 'admin/store/settings/checkout/edit',
    'link_title' => 'Edit',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/checkout',
  );
  // Exported menu link: admin_menu:admin/store/settings/checkout/edit/basic
  $menu_links['admin_menu:admin/store/settings/checkout/edit/basic'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/checkout/edit/basic',
    'router_path' => 'admin/store/settings/checkout/edit/basic',
    'link_title' => 'Checkout settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/checkout/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/checkout/edit/fields
  $menu_links['admin_menu:admin/store/settings/checkout/edit/fields'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/checkout/edit/fields',
    'router_path' => 'admin/store/settings/checkout/edit/fields',
    'link_title' => 'Address fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin/store/settings/checkout/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/checkout/edit/messages
  $menu_links['admin_menu:admin/store/settings/checkout/edit/messages'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/checkout/edit/messages',
    'router_path' => 'admin/store/settings/checkout/edit/messages',
    'link_title' => 'Checkout messages',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings/checkout/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/checkout/edit/panes
  $menu_links['admin_menu:admin/store/settings/checkout/edit/panes'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/checkout/edit/panes',
    'router_path' => 'admin/store/settings/checkout/edit/panes',
    'link_title' => 'Checkout panes',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/checkout/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/checkout/overview
  $menu_links['admin_menu:admin/store/settings/checkout/overview'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/checkout/overview',
    'router_path' => 'admin/store/settings/checkout/overview',
    'link_title' => 'Overview',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/checkout',
  );
  // Exported menu link: admin_menu:admin/store/settings/countries
  $menu_links['admin_menu:admin/store/settings/countries'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/countries',
    'router_path' => 'admin/store/settings/countries',
    'link_title' => 'Country settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/countries/edit
  $menu_links['admin_menu:admin/store/settings/countries/edit'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/countries/edit',
    'router_path' => 'admin/store/settings/countries/edit',
    'link_title' => 'Edit',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/countries',
  );
  // Exported menu link: admin_menu:admin/store/settings/countries/edit/formats
  $menu_links['admin_menu:admin/store/settings/countries/edit/formats'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/countries/edit/formats',
    'router_path' => 'admin/store/settings/countries/edit/formats',
    'link_title' => 'Country formats',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/countries/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/countries/edit/import
  $menu_links['admin_menu:admin/store/settings/countries/edit/import'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/countries/edit/import',
    'router_path' => 'admin/store/settings/countries/edit/import',
    'link_title' => 'Import countries',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/countries/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/countries/overview
  $menu_links['admin_menu:admin/store/settings/countries/overview'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/countries/overview',
    'router_path' => 'admin/store/settings/countries/overview',
    'link_title' => 'Overview',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/countries',
  );
  // Exported menu link: admin_menu:admin/store/settings/orders
  $menu_links['admin_menu:admin/store/settings/orders'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/orders',
    'router_path' => 'admin/store/settings/orders',
    'link_title' => 'Order settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/orders/edit
  $menu_links['admin_menu:admin/store/settings/orders/edit'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/orders/edit',
    'router_path' => 'admin/store/settings/orders/edit',
    'link_title' => 'Edit',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/orders',
  );
  // Exported menu link: admin_menu:admin/store/settings/orders/edit/basic
  $menu_links['admin_menu:admin/store/settings/orders/edit/basic'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/orders/edit/basic',
    'router_path' => 'admin/store/settings/orders/edit/basic',
    'link_title' => 'Order settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/orders/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/orders/edit/panes
  $menu_links['admin_menu:admin/store/settings/orders/edit/panes'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/orders/edit/panes',
    'router_path' => 'admin/store/settings/orders/edit/panes',
    'link_title' => 'Order panes',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings/orders/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/orders/edit/workflow
  $menu_links['admin_menu:admin/store/settings/orders/edit/workflow'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/orders/edit/workflow',
    'router_path' => 'admin/store/settings/orders/edit/workflow',
    'link_title' => 'Order workflow',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/orders/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/orders/overview
  $menu_links['admin_menu:admin/store/settings/orders/overview'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/orders/overview',
    'router_path' => 'admin/store/settings/orders/overview',
    'link_title' => 'Overview',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/orders',
  );
  // Exported menu link: admin_menu:admin/store/settings/payment
  $menu_links['admin_menu:admin/store/settings/payment'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/payment',
    'router_path' => 'admin/store/settings/payment',
    'link_title' => 'Payment settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/payment/edit
  $menu_links['admin_menu:admin/store/settings/payment/edit'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/payment/edit',
    'router_path' => 'admin/store/settings/payment/edit',
    'link_title' => 'Edit',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/payment',
  );
  // Exported menu link: admin_menu:admin/store/settings/payment/edit/basic
  $menu_links['admin_menu:admin/store/settings/payment/edit/basic'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/payment/edit/basic',
    'router_path' => 'admin/store/settings/payment/edit/basic',
    'link_title' => 'Payment settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/payment/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/payment/edit/gateways
  $menu_links['admin_menu:admin/store/settings/payment/edit/gateways'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/payment/edit/gateways',
    'router_path' => 'admin/store/settings/payment/edit/gateways',
    'link_title' => 'Payment gateways',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings/payment/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/payment/edit/methods
  $menu_links['admin_menu:admin/store/settings/payment/edit/methods'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/payment/edit/methods',
    'router_path' => 'admin/store/settings/payment/edit/methods',
    'link_title' => 'Payment methods',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/payment/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/payment/overview
  $menu_links['admin_menu:admin/store/settings/payment/overview'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/payment/overview',
    'router_path' => 'admin/store/settings/payment/overview',
    'link_title' => 'Overview',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/payment',
  );
  // Exported menu link: admin_menu:admin/store/settings/price-handlers
  $menu_links['admin_menu:admin/store/settings/price-handlers'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/price-handlers',
    'router_path' => 'admin/store/settings/price-handlers',
    'link_title' => 'Price handler settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/products
  $menu_links['admin_menu:admin/store/settings/products'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/products',
    'router_path' => 'admin/store/settings/products',
    'link_title' => 'Product settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/products/edit
  $menu_links['admin_menu:admin/store/settings/products/edit'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/products/edit',
    'router_path' => 'admin/store/settings/products/edit',
    'link_title' => 'Edit',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/products',
  );
  // Exported menu link: admin_menu:admin/store/settings/products/edit/features
  $menu_links['admin_menu:admin/store/settings/products/edit/features'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/products/edit/features',
    'router_path' => 'admin/store/settings/products/edit/features',
    'link_title' => 'Product features',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings/products/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/products/edit/fields
  $menu_links['admin_menu:admin/store/settings/products/edit/fields'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/products/edit/fields',
    'router_path' => 'admin/store/settings/products/edit/fields',
    'link_title' => 'Product fields',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/products/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/products/edit/general
  $menu_links['admin_menu:admin/store/settings/products/edit/general'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/products/edit/general',
    'router_path' => 'admin/store/settings/products/edit/general',
    'link_title' => 'Product settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/products/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/products/edit/product-kits
  $menu_links['admin_menu:admin/store/settings/products/edit/product-kits'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/products/edit/product-kits',
    'router_path' => 'admin/store/settings/products/edit/product-kits',
    'link_title' => 'Product kits',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'admin/store/settings/products/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/products/overview
  $menu_links['admin_menu:admin/store/settings/products/overview'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/products/overview',
    'router_path' => 'admin/store/settings/products/overview',
    'link_title' => 'Overview',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/products',
  );
  // Exported menu link: admin_menu:admin/store/settings/quotes
  $menu_links['admin_menu:admin/store/settings/quotes'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/quotes',
    'router_path' => 'admin/store/settings/quotes',
    'link_title' => 'Shipping quote settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/quotes/edit
  $menu_links['admin_menu:admin/store/settings/quotes/edit'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/quotes/edit',
    'router_path' => 'admin/store/settings/quotes/edit',
    'link_title' => 'Quote settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-8',
    'parent_path' => 'admin/store/settings/quotes',
  );
  // Exported menu link: admin_menu:admin/store/settings/quotes/methods
  $menu_links['admin_menu:admin/store/settings/quotes/methods'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/quotes/methods',
    'router_path' => 'admin/store/settings/quotes/methods',
    'link_title' => 'Quote methods',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/quotes',
  );
  // Exported menu link: admin_menu:admin/store/settings/quotes/methods/general
  $menu_links['admin_menu:admin/store/settings/quotes/methods/general'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/quotes/methods/general',
    'router_path' => 'admin/store/settings/quotes/methods/general',
    'link_title' => 'General settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/quotes/methods',
  );
  // Exported menu link: admin_menu:admin/store/settings/quotes/methods/weightquote
  $menu_links['admin_menu:admin/store/settings/quotes/methods/weightquote'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/quotes/methods/weightquote',
    'router_path' => 'admin/store/settings/quotes/methods/weightquote',
    'link_title' => 'Weight quote',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings/quotes/methods',
  );
  // Exported menu link: admin_menu:admin/store/settings/quotes/overview
  $menu_links['admin_menu:admin/store/settings/quotes/overview'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/quotes/overview',
    'router_path' => 'admin/store/settings/quotes/overview',
    'link_title' => 'Overview',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/quotes',
  );
  // Exported menu link: admin_menu:admin/store/settings/reports
  $menu_links['admin_menu:admin/store/settings/reports'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/reports',
    'router_path' => 'admin/store/settings/reports',
    'link_title' => 'Report settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/stock
  $menu_links['admin_menu:admin/store/settings/stock'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/stock',
    'router_path' => 'admin/store/settings/stock',
    'link_title' => 'Stock settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/store
  $menu_links['admin_menu:admin/store/settings/store'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/store',
    'router_path' => 'admin/store/settings/store',
    'link_title' => 'Store settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/store/edit
  $menu_links['admin_menu:admin/store/settings/store/edit'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/store/edit',
    'router_path' => 'admin/store/settings/store/edit',
    'link_title' => 'Edit',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/store',
  );
  // Exported menu link: admin_menu:admin/store/settings/store/edit/contact
  $menu_links['admin_menu:admin/store/settings/store/edit/contact'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/store/edit/contact',
    'router_path' => 'admin/store/settings/store/edit/contact',
    'link_title' => 'Contact settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/store/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/store/edit/display
  $menu_links['admin_menu:admin/store/settings/store/edit/display'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/store/edit/display',
    'router_path' => 'admin/store/settings/store/edit/display',
    'link_title' => 'Display settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin/store/settings/store/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/store/edit/format
  $menu_links['admin_menu:admin/store/settings/store/edit/format'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/store/edit/format',
    'router_path' => 'admin/store/settings/store/edit/format',
    'link_title' => 'Format settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings/store/edit',
  );
  // Exported menu link: admin_menu:admin/store/settings/store/initials
  $menu_links['admin_menu:admin/store/settings/store/initials'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/store/initials',
    'router_path' => 'admin/store/settings/store/initials',
    'link_title' => 'User initials',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings/store',
  );
  // Exported menu link: admin_menu:admin/store/settings/store/overview
  $menu_links['admin_menu:admin/store/settings/store/overview'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/store/overview',
    'router_path' => 'admin/store/settings/store/overview',
    'link_title' => 'Overview',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/store/settings/store',
  );
  // Exported menu link: admin_menu:admin/store/settings/taxes
  $menu_links['admin_menu:admin/store/settings/taxes'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/taxes',
    'router_path' => 'admin/store/settings/taxes',
    'link_title' => 'Tax rates and settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings',
  );
  // Exported menu link: admin_menu:admin/store/settings/taxes/add
  $menu_links['admin_menu:admin/store/settings/taxes/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/taxes/add',
    'router_path' => 'admin/store/settings/taxes/add',
    'link_title' => 'Add a tax rate',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin/store/settings/taxes',
  );
  // Exported menu link: admin_menu:admin/store/settings/taxes/overview
  $menu_links['admin_menu:admin/store/settings/taxes/overview'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/store/settings/taxes/overview',
    'router_path' => 'admin/store/settings/taxes/overview',
    'link_title' => 'Overview',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/store/settings/taxes',
  );
  // Exported menu link: admin_menu:admin/user
  $menu_links['admin_menu:admin/user'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user',
    'router_path' => 'admin/user',
    'link_title' => 'User management',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: admin_menu:admin/user/permissions
  $menu_links['admin_menu:admin/user/permissions'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/permissions',
    'router_path' => 'admin/user/permissions',
    'link_title' => 'Permissions',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: admin_menu:admin/user/roles
  $menu_links['admin_menu:admin/user/roles'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/roles',
    'router_path' => 'admin/user/roles',
    'link_title' => 'Roles',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: admin_menu:admin/user/rules
  $menu_links['admin_menu:admin/user/rules'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/rules',
    'router_path' => 'admin/user/rules',
    'link_title' => 'Access rules',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: admin_menu:admin/user/rules/add
  $menu_links['admin_menu:admin/user/rules/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/rules/add',
    'router_path' => 'admin/user/rules/add',
    'link_title' => 'Add rule',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user/rules',
  );
  // Exported menu link: admin_menu:admin/user/rules/check
  $menu_links['admin_menu:admin/user/rules/check'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/rules/check',
    'router_path' => 'admin/user/rules/check',
    'link_title' => 'Check rules',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user/rules',
  );
  // Exported menu link: admin_menu:admin/user/rules/list
  $menu_links['admin_menu:admin/user/rules/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/rules/list',
    'router_path' => 'admin/user/rules/list',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/user/rules',
  );
  // Exported menu link: admin_menu:admin/user/settings
  $menu_links['admin_menu:admin/user/settings'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/settings',
    'router_path' => 'admin/user/settings',
    'link_title' => 'User settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: admin_menu:admin/user/user
  $menu_links['admin_menu:admin/user/user'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/user',
    'router_path' => 'admin/user/user',
    'link_title' => 'Users',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: admin_menu:admin/user/user/create
  $menu_links['admin_menu:admin/user/user/create'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/user/create',
    'router_path' => 'admin/user/user/create',
    'link_title' => 'Add user',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user/user',
  );
  // Exported menu link: admin_menu:admin/user/user/expiration
  $menu_links['admin_menu:admin/user/user/expiration'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/user/expiration',
    'router_path' => 'admin/user/user/expiration',
    'link_title' => 'Role expiration',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user/user',
  );
  // Exported menu link: admin_menu:admin/user/user/list
  $menu_links['admin_menu:admin/user/user/list'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/user/list',
    'router_path' => 'admin/user/user/list',
    'link_title' => 'List',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/user/user',
  );
  // Exported menu link: admin_menu:admin_menu/flush-cache
  $menu_links['admin_menu:admin_menu/flush-cache'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin_menu/flush-cache',
    'router_path' => 'admin_menu/flush-cache',
    'link_title' => 'Flush all caches',
    'options' => array(
      'alter' => TRUE,
      'query' => 'destination',
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '20',
    'parent_path' => '<front>',
  );
  // Exported menu link: admin_menu:admin_menu/flush-cache/admin_menu
  $menu_links['admin_menu:admin_menu/flush-cache/admin_menu'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin_menu/flush-cache/admin_menu',
    'router_path' => 'admin_menu/flush-cache',
    'link_title' => 'Administration menu',
    'options' => array(
      'alter' => TRUE,
      'query' => 'destination',
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin_menu/flush-cache',
  );
  // Exported menu link: admin_menu:admin_menu/flush-cache/cache
  $menu_links['admin_menu:admin_menu/flush-cache/cache'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin_menu/flush-cache/cache',
    'router_path' => 'admin_menu/flush-cache',
    'link_title' => 'Cache tables',
    'options' => array(
      'alter' => TRUE,
      'query' => 'destination',
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin_menu/flush-cache',
  );
  // Exported menu link: admin_menu:admin_menu/flush-cache/menu
  $menu_links['admin_menu:admin_menu/flush-cache/menu'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin_menu/flush-cache/menu',
    'router_path' => 'admin_menu/flush-cache',
    'link_title' => 'Menu',
    'options' => array(
      'alter' => TRUE,
      'query' => 'destination',
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin_menu/flush-cache',
  );
  // Exported menu link: admin_menu:admin_menu/flush-cache/requisites
  $menu_links['admin_menu:admin_menu/flush-cache/requisites'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin_menu/flush-cache/requisites',
    'router_path' => 'admin_menu/flush-cache',
    'link_title' => 'Page requisites',
    'options' => array(
      'alter' => TRUE,
      'query' => 'destination',
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin_menu/flush-cache',
  );
  // Exported menu link: admin_menu:admin_menu/flush-cache/theme
  $menu_links['admin_menu:admin_menu/flush-cache/theme'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin_menu/flush-cache/theme',
    'router_path' => 'admin_menu/flush-cache',
    'link_title' => 'Theme registry',
    'options' => array(
      'alter' => TRUE,
      'query' => 'destination',
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin_menu/flush-cache',
  );
  // Exported menu link: admin_menu:admin_menu/toggle-modules
  $menu_links['admin_menu:admin_menu/toggle-modules'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin_menu/toggle-modules',
    'router_path' => 'admin_menu/toggle-modules',
    'link_title' => 'Disable developer modules',
    'options' => array(
      'query' => 'destination',
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '88',
    'parent_path' => '<front>',
  );
  // Exported menu link: admin_menu:http://drupal.org
  $menu_links['admin_menu:http://drupal.org'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org',
    'router_path' => '',
    'link_title' => 'Drupal.org',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '100',
    'parent_path' => '<front>',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/admin_menu
  $menu_links['admin_menu:http://drupal.org/project/issues/admin_menu'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/admin_menu',
    'router_path' => '',
    'link_title' => 'Administration menu issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/better_exposed_filters
  $menu_links['admin_menu:http://drupal.org/project/issues/better_exposed_filters'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/better_exposed_filters',
    'router_path' => '',
    'link_title' => 'Better Exposed Filters issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/cck
  $menu_links['admin_menu:http://drupal.org/project/issues/cck'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/cck',
    'router_path' => '',
    'link_title' => 'Content issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/delete_all
  $menu_links['admin_menu:http://drupal.org/project/issues/delete_all'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/delete_all',
    'router_path' => '',
    'link_title' => 'Delete content and users issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/drupal
  $menu_links['admin_menu:http://drupal.org/project/issues/drupal'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/drupal',
    'router_path' => '',
    'link_title' => 'Drupal issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/features
  $menu_links['admin_menu:http://drupal.org/project/issues/features'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/features',
    'router_path' => '',
    'link_title' => 'Features issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/filefield
  $menu_links['admin_menu:http://drupal.org/project/issues/filefield'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/filefield',
    'router_path' => '',
    'link_title' => 'FileField issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/filefield_sources
  $menu_links['admin_menu:http://drupal.org/project/issues/filefield_sources'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/filefield_sources',
    'router_path' => '',
    'link_title' => 'FileField Sources issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/getid3
  $menu_links['admin_menu:http://drupal.org/project/issues/getid3'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/getid3',
    'router_path' => '',
    'link_title' => 'getID3() issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/gmap
  $menu_links['admin_menu:http://drupal.org/project/issues/gmap'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/gmap',
    'router_path' => '',
    'link_title' => 'GMap issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/hide_submit
  $menu_links['admin_menu:http://drupal.org/project/issues/hide_submit'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/hide_submit',
    'router_path' => '',
    'link_title' => 'Hide submit button issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/image
  $menu_links['admin_menu:http://drupal.org/project/issues/image'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/image',
    'router_path' => '',
    'link_title' => 'Image issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/imageapi
  $menu_links['admin_menu:http://drupal.org/project/issues/imageapi'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/imageapi',
    'router_path' => '',
    'link_title' => 'ImageAPI issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/imagecache
  $menu_links['admin_menu:http://drupal.org/project/issues/imagecache'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/imagecache',
    'router_path' => '',
    'link_title' => 'ImageCache issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/imagefield
  $menu_links['admin_menu:http://drupal.org/project/issues/imagefield'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/imagefield',
    'router_path' => '',
    'link_title' => 'ImageField issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/jquery_update
  $menu_links['admin_menu:http://drupal.org/project/issues/jquery_update'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/jquery_update',
    'router_path' => '',
    'link_title' => 'jQuery Update issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/lightbox2
  $menu_links['admin_menu:http://drupal.org/project/issues/lightbox2'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/lightbox2',
    'router_path' => '',
    'link_title' => 'Lightbox2 issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/location
  $menu_links['admin_menu:http://drupal.org/project/issues/location'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/location',
    'router_path' => '',
    'link_title' => 'Location issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/poormanscron
  $menu_links['admin_menu:http://drupal.org/project/issues/poormanscron'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/poormanscron',
    'router_path' => '',
    'link_title' => 'Poormanscron issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/profiler_builder
  $menu_links['admin_menu:http://drupal.org/project/issues/profiler_builder'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/profiler_builder',
    'router_path' => '',
    'link_title' => 'Profiler Builder issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/skinr
  $menu_links['admin_menu:http://drupal.org/project/issues/skinr'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/skinr',
    'router_path' => '',
    'link_title' => 'Skinr issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/taxonomy_csv
  $menu_links['admin_menu:http://drupal.org/project/issues/taxonomy_csv'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/taxonomy_csv',
    'router_path' => '',
    'link_title' => 'Taxonomy CSV import/export issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/taxonomy_defaults
  $menu_links['admin_menu:http://drupal.org/project/issues/taxonomy_defaults'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/taxonomy_defaults',
    'router_path' => '',
    'link_title' => 'Taxonomy Defaults issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/taxonomy_super_select
  $menu_links['admin_menu:http://drupal.org/project/issues/taxonomy_super_select'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/taxonomy_super_select',
    'router_path' => '',
    'link_title' => 'Taxonomy Super Select issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/token
  $menu_links['admin_menu:http://drupal.org/project/issues/token'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/token',
    'router_path' => '',
    'link_title' => 'Token issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/ubercart
  $menu_links['admin_menu:http://drupal.org/project/issues/ubercart'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/ubercart',
    'router_path' => '',
    'link_title' => 'Conditional Actions issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/uc_ajax_cart
  $menu_links['admin_menu:http://drupal.org/project/issues/uc_ajax_cart'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/uc_ajax_cart',
    'router_path' => '',
    'link_title' => 'Ajax Driven Cart issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/uc_dropdown_attributes
  $menu_links['admin_menu:http://drupal.org/project/issues/uc_dropdown_attributes'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/uc_dropdown_attributes',
    'router_path' => '',
    'link_title' => 'Dropdown attributes issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/uc_extra_fields_pane
  $menu_links['admin_menu:http://drupal.org/project/issues/uc_extra_fields_pane'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/uc_extra_fields_pane',
    'router_path' => '',
    'link_title' => 'Extra Fields Pane issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/views
  $menu_links['admin_menu:http://drupal.org/project/issues/views'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/views',
    'router_path' => '',
    'link_title' => 'Views issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/views_infinite_pager
  $menu_links['admin_menu:http://drupal.org/project/issues/views_infinite_pager'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/views_infinite_pager',
    'router_path' => '',
    'link_title' => 'Views Infinite Pager issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/views_infinite_scroll
  $menu_links['admin_menu:http://drupal.org/project/issues/views_infinite_scroll'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/views_infinite_scroll',
    'router_path' => '',
    'link_title' => 'Views Infinite Scroll issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/views_nivo_slider
  $menu_links['admin_menu:http://drupal.org/project/issues/views_nivo_slider'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/views_nivo_slider',
    'router_path' => '',
    'link_title' => 'Views Nivo Slider issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/webform
  $menu_links['admin_menu:http://drupal.org/project/issues/webform'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/webform',
    'router_path' => '',
    'link_title' => 'Webform issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/webrupee
  $menu_links['admin_menu:http://drupal.org/project/issues/webrupee'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/webrupee',
    'router_path' => '',
    'link_title' => 'WebRupee issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: admin_menu:logout
  $menu_links['admin_menu:logout'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Log out @username',
    'options' => array(
      'extra class' => 'admin-menu-action admin-menu-logout',
      't' => array(),
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-100',
  );
  // Exported menu link: admin_menu:node/add
  $menu_links['admin_menu:node/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Create content',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin_menu:node/add/image
  $menu_links['admin_menu:node/add/image'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/image',
    'router_path' => 'node/add/image',
    'link_title' => 'Image',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/page
  $menu_links['admin_menu:node/add/page'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/product
  $menu_links['admin_menu:node/add/product'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/product',
    'router_path' => 'node/add/product',
    'link_title' => 'Product',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/product-kit
  $menu_links['admin_menu:node/add/product-kit'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/product-kit',
    'router_path' => 'node/add/product-kit',
    'link_title' => 'Product kit',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/slider
  $menu_links['admin_menu:node/add/slider'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/slider',
    'router_path' => 'node/add/slider',
    'link_title' => 'Slider',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/webform
  $menu_links['admin_menu:node/add/webform'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:update.php
  $menu_links['admin_menu:update.php'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'update.php',
    'router_path' => '',
    'link_title' => 'Run updates',
    'options' => array(
      'external' => TRUE,
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '50',
    'parent_path' => '<front>',
  );
  // Exported menu link: admin_menu:user
  $menu_links['admin_menu:user'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'icon_users',
    'options' => array(
      'extra class' => 'admin-menu-action admin-menu-icon admin-menu-users',
      'html' => TRUE,
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-90',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<img class="admin-menu-icon" src="/try/misc/favicon.ico" width="16" height="16" alt="Home" />');
  t('@name');
  t('Access rules');
  t('Actions');
  t('Add');
  t('Add a predicate');
  t('Add a tax rate');
  t('Add alias');
  t('Add an attribute');
  t('Add block');
  t('Add content type');
  t('Add gallery');
  t('Add input format');
  t('Add menu');
  t('Add new preset');
  t('Add rule');
  t('Add user');
  t('Add vocabulary');
  t('Address fields');
  t('Administration menu');
  t('Administration menu issue queue');
  t('Administration theme');
  t('Ajax Driven Cart issue queue');
  t('Attribute settings');
  t('Attributes');
  t('Automatic image handling');
  t('Available updates');
  t('Basic');
  t('Better Exposed Filters issue queue');
  t('Blocks');
  t('Bulk export');
  t('Bulk export results');
  t('By class');
  t('By module');
  t('By trigger');
  t('Cache tables');
  t('Cart block');
  t('Cart links clicks');
  t('Cart links settings');
  t('Cart panes');
  t('Cart settings');
  t('Check rules');
  t('Checkout messages');
  t('Checkout panes');
  t('Checkout settings');
  t('Clean URLs');
  t('Conditional Actions issue queue');
  t('Conditional actions');
  t('Configuration');
  t('Configure');
  t('Contact settings');
  t('Content');
  t('Content issue queue');
  t('Content management');
  t('Content types');
  t('Convert');
  t('Convert configurations');
  t('Country formats');
  t('Country settings');
  t('Create content');
  t('Create feature');
  t('Create order');
  t('Creating cart links');
  t('Custom product report');
  t('Custom sales summary');
  t('Customer reports');
  t('Customers');
  t('Database logging');
  t('Date and time');
  t('Delete content and users issue queue');
  t('Disable developer modules');
  t('Display fields');
  t('Display settings');
  t('Dropdown attributes issue queue');
  t('Drupal issue queue');
  t('Drupal.org');
  t('Edit');
  t('Edit !content-type');
  t('Error reporting');
  t('Export');
  t('Extra Fields Pane issue queue');
  t('Features');
  t('Features issue queue');
  t('Fields');
  t('File system');
  t('File uploads');
  t('FileField Sources issue queue');
  t('FileField issue queue');
  t('Files and sizes');
  t('Flush all caches');
  t('Format settings');
  t('GMap issue queue');
  t('Garland');
  t('General');
  t('General settings');
  t('Global settings');
  t('HTML Content');
  t('Help');
  t('Hide submit button issue queue');
  t('Image');
  t('Image attach');
  t('Image galleries');
  t('Image gallery');
  t('Image import');
  t('Image issue queue');
  t('Image toolkit');
  t('ImageAPI');
  t('ImageAPI issue queue');
  t('ImageCache');
  t('ImageCache issue queue');
  t('ImageField issue queue');
  t('Images');
  t('Import');
  t('Import countries');
  t('Input formats');
  t('Lightbox2');
  t('Lightbox2 issue queue');
  t('List');
  t('List menus');
  t('Location issue queue');
  t('Log out @username');
  t('Logging and alerts');
  t('Manage');
  t('Manage actions');
  t('Manage classes');
  t('Manage fields');
  t('Menu');
  t('Menus');
  t('Modules');
  t('Order panes');
  t('Order settings');
  t('Order workflow');
  t('Orders');
  t('Overview');
  t('Page');
  t('Page requisites');
  t('Payment gateways');
  t('Payment methods');
  t('Payment settings');
  t('Performance');
  t('Permissions');
  t('Poormanscron issue queue');
  t('Post settings');
  t('Price handler settings');
  t('Product');
  t('Product features');
  t('Product fields');
  t('Product kit');
  t('Product kits');
  t('Product report');
  t('Product reports');
  t('Product settings');
  t('Products');
  t('Profiler Builder');
  t('Profiler Builder issue queue');
  t('Quote methods');
  t('Quote settings');
  t('RSS');
  t('RSS publishing');
  t('Recent log entries');
  t('Report settings');
  t('Reports');
  t('Role expiration');
  t('Roles');
  t('Run cron');
  t('Run updates');
  t('Sales per year');
  t('Sales reports');
  t('Sales summary');
  t('Sales tax report');
  t('Search');
  t('Search customers');
  t('Search orders');
  t('Search settings');
  t('Settings');
  t('Shipping quote settings');
  t('Site building');
  t('Site configuration');
  t('Site information');
  t('Site maintenance');
  t('Skinr');
  t('Skinr issue queue');
  t('Slider');
  t('Slider Images');
  t('Slideshow');
  t('Status report');
  t('Stock reports');
  t('Stock settings');
  t('Store administration');
  t('Store settings');
  t('Syslog');
  t('Tax rates and settings');
  t('Taxonomy');
  t('Taxonomy CSV import/export issue queue');
  t('Taxonomy Defaults issue queue');
  t('Taxonomy Super Select issue queue');
  t('Theme registry');
  t('Themes');
  t('Token');
  t('Token issue queue');
  t('Tools');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top search phrases');
  t('URL aliases');
  t('Uninstall');
  t('User initials');
  t('User management');
  t('User settings');
  t('Users');
  t('Using tokens');
  t('View customers');
  t('View orders');
  t('View products');
  t('Views');
  t('Views Infinite Pager issue queue');
  t('Views Infinite Scroll issue queue');
  t('Views Nivo Slider issue queue');
  t('Views issue queue');
  t('WebRupee issue queue');
  t('Webform');
  t('Webform issue queue');
  t('Webform settings');
  t('Webforms');
  t('Weight quote');
  t('getID3()');
  t('getID3() issue queue');
  t('icon_users');
  t('jQuery Update');
  t('jQuery Update issue queue');


  return $menu_links;
}
