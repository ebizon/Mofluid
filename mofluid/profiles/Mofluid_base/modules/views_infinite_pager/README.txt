Description:
------------
  This module amends default Views paging with options for infinite/sliding pager functionality on ajax-enabled Views.
  This functionality is like twitter.com or facebook.com, where the next page pops out *below* the existing content rather than replacing it.
  
  The two ways that this module enables this functionality is by utilizing a link at the bottom or simply scrolling to the bottom:
  - If using the "Infinite pager", your view will create a 'more' button at the bottom. When clicked, the next page loads in place below the current page.
  - If using the "Infinite Auto Load pager", your view will automatically load the next page below the current page as soon as you scroll near the bottom of the view.


Instructions:
-------------
  To install, place the entire Views Infinite Pager folder into your modules directory (sites/all/modules).
  Navigate to your modules page (Administer -> Site building -> Modules)
  enable the Views Infinite Pager module within the Other fieldset.
  
  To activate the infinite scroll functionality on a view, be sure to check the following:
  - Choose one of the two infinite scroll pagers.
  - Activate AJAX by setting "Use AJAX" to "Yes".
  - Set "Items per page" to something other than 0.
  - Make sure you have more items than the set "Items per page". :-)

Alternate implementations:
--------------------------
  For Drupal 5, it looks like http://drupal.org/project/ajax_views has similar functionality.
  
  For Drupal 6, Endless Page (http://drupal.org/project/endless_page) seems to be similar but has been abandoned for >2yr
  
  For Drupal 7 (Views3), there is an implementation by Centogram 
  @ http://www.centogram.com/projects/drupal-infinite-scroll-pager-plugin-views-30.

Todo:
-----
  For an up to date todo list look at the issue tracker at:
  http://drupal.org/project/issues/views_infinite_pager
  
Credits:
--------
  Maintainer: curup
  Previous maintainer: thebuckst0p
  
  This module has been developed with fundings from AF Indurstri AB (www.af.se), Open Source City (www.opensourcecity.org)
  and Karlstad University Library (www.bib.kau.se). Also many thanks to the Drupal community for all of the bug-hunting.
  
  If you feel left out please send me a message thru the contact form 
  on http://drupal.org/user/423896/contact.
  
  If you would like to be a co-maintainer, please let me know in this issue: http://drupal.org/node/937716.

