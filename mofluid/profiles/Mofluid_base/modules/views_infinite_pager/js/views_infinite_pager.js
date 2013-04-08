// $Id

/** 
 *  SLIDING/INFINITE PAGER FUNCTIONALITY:
 *  override ajax_view.js, Drupal.behaviors.ViewsAjaxView
 * 
 *  INSTEAD of replacing content w/ new content, APPEND it at the bottom, like a slider, (twitter.com style)
 *  also need to remove the just-run pager so the same piece doesn't load over and over...
 *  the new content will have its own pager if necessary
 */


/**
 * replaces (and adapted from) Drupal.Views.Ajax.ajaxViewResponse
 * An ajax responder that accepts a packet of JSON data and acts appropriately.
 *
 * The following fields control behavior.
 * - 'display': Display the associated data in the view area.
 */
Drupal.Views.Ajax.alternateAjaxViewResponse = function(target, response) {

  if (response.debug) {  
      alert(response.debug);  
  }  
  
  var $view = $(target);
  
  // Check the 'display' for data.
  if (response.status && response.display) {
    	
		var $newView = $(response.display);		
	
		//check to see if this is an infinite pager - if not, it's normal and should not apprend a page		
		//not sure this is the best method - but so far target != string when using a infinite pager
		if($view.hasClass('infinite-pager') && !isString(target)){

			$view.find('.view-content').insertBefore($newView.find('.view-content').addClass('infinite-page'));
			//append new view to current view's parent
			$view.parent().append($newView);
			//slide down
			$newView.find('.view-content:last').hide().slideDown(1000);
						
		}else{
			// normal views function
			$view.parent().append($newView);
		}			
		
		$view.remove();
		
		//normal views
		$view = $newView;
		Drupal.attachBehaviors($view);	
		Drupal.attachBehaviors($view.parent());	
  }
 
  if (response.messages) {
    // Show any messages (but first remove old ones, if there are any).
    $view.find('.views-messages').remove().end().prepend(response.messages);
  }
};

/**
 * helper function to check if target is a string
 */
function isString(a) {
    return typeof a == 'string';
}

/**
 * replaces (and adapted from) Drupal.behaviors.ViewsAjaxView
 * Ajax behavior for views.
 */
Drupal.behaviors.alternateViewsAjaxView = function() {
  if (Drupal.settings && Drupal.settings.views && Drupal.settings.views.ajaxViews) {
    var ajax_path = Drupal.settings.views.ajax_path;
    // If there are multiple views this might've ended up showing up multiple times.
    if (ajax_path.constructor.toString().indexOf("Array") != -1) {
      ajax_path = ajax_path[0];
    }
    $.each(Drupal.settings.views.ajaxViews, function(i, settings) {
      var view = '.view-dom-id-' + settings.view_dom_id;
      if (!$(view).size()) {
        // Backward compatibility: if 'views-view.tpl.php' is old and doesn't
        // contain the 'view-dom-id-#' class, we fall back to the old way of
        // locating the view:
        view = '.view-id-' + settings.view_name + '.view-display-id-' + settings.view_display_id;
      }
	  
      // Process exposed filter forms.
      $('form#views-exposed-form-' + settings.view_name.replace(/_/g, '-') + '-' + settings.view_display_id.replace(/_/g, '-'))
      .filter(':not(.views-processed)')
      .each(function () {
        // remove 'q' from the form; it's there for clean URLs
        // so that it submits to the right place with regular submit
        // but this method is submitting elsewhere.
        $('input[name=q]', this).remove();
        var form = this;
        // ajaxSubmit doesn't accept a data argument, so we have to
        // pass additional fields this way.
        $.each(settings, function(key, setting) {
          $(form).append('<input type="hidden" name="'+ key + '" value="'+ setting +'"/>');
        });
      })
      .addClass('views-processed')
      .submit(function () {
        $('input[type=submit], button', this).after('<span class="views-throbbing">&nbsp</span>');
        var object = this;
        $(this).ajaxSubmit({
          url: ajax_path,
          type: 'GET',
          success: function(response) {
            // Call all callbacks.
            if (response.__callbacks) {
              $.each(response.__callbacks, function(i, callback) {
                eval(callback)(view, response);
              });
              $('.views-throbbing', object).remove();
            }
          },
          error: function(xhr) { Drupal.Views.Ajax.handleErrors(xhr, ajax_path); $('.views-throbbing', object).remove(); },
          dataType: 'json'
        });

        return false;
      });

      $(view).filter(':not(.views-processed)')
        // Don't attach to nested views. Doing so would attach multiple behaviors
        // to a given element.
        .filter(function() {
          // If there is at least one parent with a view class, this view
          // is nested (e.g., an attachment). Bail.
          return !$(this).parents('.view').size();
        })
        .each(function() {
          // Set a reference that will work in subsequent calls.
          var target = this;
          $(this)
            .addClass('views-processed')
            // Process pager, tablesort, and attachment summary links.
            .find('ul.pager > li > a, th.views-field a, .attachment .views-summary a')
            .each(function () {
              var viewData = { 'js': 1 };
              // Construct an object using the settings defaults and then overriding
              // with data specific to the link.
              $.extend(
                viewData,
                Drupal.Views.parseQueryString($(this).attr('href')),
                // Extract argument data from the URL.
                Drupal.Views.parseViewArgs($(this).attr('href'), settings.view_base_path),
                // Settings must be used last to avoid sending url aliases to the server.
                settings
              );
              $(this).click(function () {
                $.extend(viewData, Drupal.Views.parseViewArgs($(this).attr('href'), settings.view_base_path));
                $(this).addClass('views-throbbing');
                $.ajax({
                  url: ajax_path,
                  type: 'GET',
                  data: viewData,
                  success: function(response) {
                    $(this).removeClass('views-throbbing');
                    // (this won't matter anymore b/c the pager is removed after appending)

                    // REMOVED 'Scroll to the top of the view' functionality
                    
                    // Call all callbacks.
                    if (response.__callbacks) {
                      $.each(response.__callbacks, function(i, callback) {
                        eval(callback)(target, response);
                      });
                    }
                  },
                  error: function(xhr) { $(this).removeClass('views-throbbing'); Drupal.Views.Ajax.handleErrors(xhr, ajax_path); },
                  dataType: 'json'
                });

                return false;
              });
            }); // .each function () {
      }); // $view.filter().each
    }); // .each Drupal.settings.views.ajaxViews
  } // if
};


/**
 * Automatically load the next page when the user scrolls to the bottom of the view.
 */
var viewsInfinitePagerMoreLink;
var viewsInfinitePagerViewHeight;	
Drupal.behaviors.viewsInfinitePagerAutoLoad = function() {
  viewsInfinitePagerMoreLink = $('.infinite-auto-load-pager ul.infinite-pager a');
  if (viewsInfinitePagerMoreLink.length == 1) {
	var preloadMargin = 200; // TODO: make this a setting in the Views UI.
	viewsInfinitePagerViewHeight = $(window).height() + preloadMargin;
	// Execute once when loading the page or after an ajax load.
	// Bind the scroll event if the ajax loader has not been triggered.
	if (!viewsInfinitePagerClick()) {
	  // Bind scroll event.
	  $(window).bind('scroll', viewsInfinitePagerClick);
	}
  }
  else{
	//unbind if we ajax load a non-infinite-auto-load-pager
	$(window).unbind('scroll', viewsInfinitePagerClick);  
  }
};


/**
 * Helper function for Drupal.behaviors.viewsInfinitePagerAutoLoad.
 * Check if the bottom of the view has been reached and trigger the ajax loader.
 * Return true if the ajax loader has been triggered.
 */
function viewsInfinitePagerClick() {
  var relativePosition = viewsInfinitePagerMoreLink.offset().top - $(window).scrollTop();
  if (relativePosition < viewsInfinitePagerViewHeight) {
    $(window).unbind('scroll', viewsInfinitePagerClick);
    viewsInfinitePagerMoreLink.click();
    return true;
  }
}

// TEMPORARY (??) until we figure out how to do this w/o overriding the whole functions!
Drupal.Views.Ajax.ajaxViewResponse = Drupal.Views.Ajax.alternateAjaxViewResponse;
Drupal.behaviors.ViewsAjaxView = Drupal.behaviors.alternateViewsAjaxView;
