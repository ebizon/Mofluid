var $jqm = jQuery.noConflict();

$jqm(document).bind("mobileinit", function() {
  $jqm.mobile.ns = '';
  $jqm.mobile.autoInitializePage = true;
  $jqm.mobile.subPageUrlKey = 'ui-page';
  $jqm.mobile.activePageClass = 'ui-page-active';
  $jqm.mobile.activeBtnClass = 'ui-btn-active'; 
  $jqm.mobile.ajaxEnabled = true;
  $jqm.mobile.hashListeningEnabled = true;
  $jqm.mobile.defaultPageTransition = 'slide';
  $jqm.mobile.defaultDialogTransition = 'pop';
  $jqm.mobile.minScrollBack = '150';
  $jqm.mobile.loadingMessage = 'loading';
  $jqm.mobile.pageLoadErrorMessage = 'Error';
});

