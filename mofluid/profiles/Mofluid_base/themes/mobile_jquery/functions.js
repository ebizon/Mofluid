function changeit(path,id, smallimg){
	document.getElementById(id).src = path;
	document.getElementById('zoomimg').href = path;
}

$(document).ready(function(){
  
  //show_hide_images();

 $('input#edit-continue').removeAttr("disabled");

 $('input.form-submit').click(function(){
    $(this).css('opacity','0.6');
 });


/* change banner in portrait and lanscape mode end */

 /* Ajax call for PIN code validation */
  $('#edit-panes-billing-billing-postal-code').blur(function() {
    var zipcode = $(this).val(); 
    validate_pincode(zipcode);
  });
 /* Ajax call End */
 $('#custom_name').children().removeAttr('data-role');
 $('#custom_email').children().removeAttr('data-role');
 $('#custom_phone').children().removeAttr('data-role');
 $('#custom_address').children().removeAttr('data-role');
 $('#custom_postal').children().removeAttr('data-role');
 $('#custom_city').children().removeAttr('data-role');
 $('#custom_state').children().removeAttr('data-role');

 
$('.views-field-sell-price .field-content').each(function(){
  var str = $(this).text();
  $(this).text(str.replace('Rs',''));
});

$('.uc-price').each(function(){
  var str_rupee = $(this).text();
  $(this).text(str_rupee.replace('Rs',''));
});



/* set maxlength for zip and phone number */
$("#edit-panes-billing-billing-postal-code").attr('maxlength','6');
$("#edit-panes-billing-billing-phone").attr('maxlength','10');
/* set maxlength for zip and phone number end */  
  if($('#check_not_front').html() == 'sub_category'){
     $('#innersub').addClass('inner_page');
  }
 $('#cart-continue-shopping a').text('');
  //change_button_bg();
  validate_checkout_fields();
  validate_fields();
});


/* On click on submit button there would be yellow backgroud of button.*/
function change_button_bg(){
  $('input.form-submit').click(function(){
     $(this).css('background','gray');
  });
}

/* On product checkout page there is a validation of name, address, email and zip .*/
function validate_checkout_fields(){
 $('.checkout-form #edit-continue').click(function(){
    var fname = $('#edit-panes-billing-billing-first-name').val();
    var customer_email = $('#edit-panes-customer-primary-email').val();
    var customer_zip = $('#edit-panes-billing-billing-postal-code').val();
    var customer_phone = $('#edit-panes-billing-billing-phone').val();
    var customer_address = $('#edit-panes-billing-billing-street1').val().length;
    var customer_city = $('#edit-panes-billing-billing-city').val();
    var customer_state = $('#edit-panes-billing-billing-zone').val();
    var arr = [ fname, customer_email,customer_zip, customer_phone, customer_address, customer_city, customer_state ];
     
     jQuery.each(arr, function(i) {
       if(arr[0] == '' && i == 0 ){
         if ($('div.custom-error').length == 0) {
$('<div class="custom-error">Name field is required.</div>').insertAfter('input#edit-panes-billing-billing-first-name');
         }
        }
        
        if(arr[1] == '' && i == 1){
           if ($('div.custom-error-email').length == 0) {
$('<div class="custom-error-email">Email field is required.</div>').insertAfter('input#edit-panes-customer-primary-email');
            }
          }

        if(arr[2] == '' && i == 2){
           if ($('div.custom-error-zip').length == 0) {
$('<div class="custom-error-zip">PIN Code field is required.</div>').insertAfter('input#edit-panes-billing-billing-postal-code');
        }
       }

        if(arr[3] == '' && i == 3){
          if ($('div.custom-error-phone').length == 0) {
$('<div class="custom-error-phone">Phone field is required.</div>').insertAfter('input#edit-panes-billing-billing-phone');
          }        
        }

if((arr[4] == '' ||  arr[4] == 0 ) && i == 4){
    
    if ($('div.custom-error-address').length == 0) {
         $('<div class="custom-error-address">Address field is required.</div>').insertAfter('textarea#edit-panes-billing-billing-street1');
        }
      }

if(arr[5] == '' && i == 5){
    if ($('div.custom-error-city').length == 0) {
         $('<div class="custom-error-city">City field is required.</div>').insertAfter('input#edit-panes-billing-billing-city');
        }
      }

if(arr[6] == '' && i == 6){
    if ($('div.custom-error-zone').length == 0) {
         $('<div class="custom-error-zone">State field is required.</div>').insertAfter('select#edit-panes-billing-billing-zone');
        }
      }
   $('#edit-continue').css('opacity','1');
});
    
    


/* Validate customer name */  
  if(fname == '' || fname == null){
     return false;
    } else {
      $('div.custom-error').text('');
    }


/* Validate customer email address */   
 if(IsEmail(customer_email) == false){
   var err_str = 'Email field is required.';
       if(customer_email != ''){
           err_str = 'Invalid email address.';
        }
       if ($('div.custom-error-email').length == 0) {
            $('<div class="custom-error-email">'+err_str+'</div>').insertAfter('input#edit-panes-customer-primary-email');
       } else {
            $('div.custom-error-email').text(err_str);
       }
      return false;
  } else {
      $('div.custom-error-email').text('');
    }



/* Validate customer postal code */  
if(customer_zip == '' || customer_zip == null){ 
   return false;
  }
else if(isNaN(customer_zip)) {
$('div.custom-error-zip').text('PIN Code should be only numeric.');
  return false;
}
else if((customer_zip.length != 6)) {
 $('div.custom-error-zip').text('PIN Code should be 6 digits.');
  return false;
}
else {
      $('div.custom-error-zip').text('');
  }


/* Validate customer phone number */  
  if(customer_phone == '' || customer_phone == null){
   return false;
  } else if(isNaN(customer_phone)) {
     if ($('div.custom-error-phone').length == 0) {
      $('<div class="custom-error-phone">Phone should be only numeric.</div>').insertAfter('input#edit-panes-billing-billing-phone');
       } else {
        $('div.custom-error-phone').text('Phone should be only numeric.');
       }
     return false;
 } else if((customer_phone.length != 10)) {
       $('div.custom-error-phone').text('Phone should be 10 digits.');
       return false;
 } else {
      $('div.custom-error-phone').text('');
  }


/* Validate customer address */  
  if(customer_address == '' || customer_address == null || customer_address == 0){
     return false;
  } else {
     $('div.custom-error-address').text('');
  }


/* Validate customer city */
  if(customer_city == '' || customer_city == null){
     return false;
  } else {
     $('div.custom-error-city').text('');
  }

/* Validate customer state */  
  if(customer_state == '' || customer_state == null){
     return false;
  } else {
     $('div.custom-error-state').text('');
  }

   return true;
  }); 
}

function IsEmail(email) {
  var regex = /^([a-zA-Z0-9_\.\-\+])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/;
  return regex.test(email);
}

/*add class to portrait and lanscape mode */
function orient() {
        if (window.orientation == 0 || window.orientation == 180) {
	    
            $("body").removeClass("landscape");
            $("body").addClass("portrait");
            //alert($("body").attr('Class'));
            orientation = 'portrait';
	    //$(".bann1").show();
	    //$(".bann2").hide();	    
            return false;
        }
        else if (window.orientation == 90 || window.orientation == -90) { 
            $("body").removeClass("portrait");
            $("body").addClass("landscape");
	    //alert($("body").attr('Class'));
            orientation = 'landscape';
            //$(".bann2").show();
	    //$(".bann1").hide();
            return false;
            }
        }

   /* change image size with device screen size end */

        /* Call orientation function on orientation change */
        function changeOrientation(event) {
        orient();
	//screenchange();
        event.preventDefault();
        }



function validate_pincode(zipcode){
  var post_url = "zipcode="+zipcode; 
  $.ajax({
    type: "POST",
    url: "?q=zipcode-validate/", // this menu have been create on iatse_register.module
    data: post_url,
    success: function(msg)
    {  
       if($('div.custom-error-zip').length == 0) {
          $('div.custom-error-zip').text('');
       }
       $('.ajax-custom-msg-zip').text('');
        if(msg == 0){
          $('.ajax-custom-msg-zip').text('Please wait.....').css('color','red');
	  $('.ajax-custom-msg-zip').text('PIN Code is not in serviceable area.').css('color','red');
          $('input#edit-continue').attr("disabled", "true");
          $('input#edit-continue').css('opacity','0.4');
        } else { 
           $('input#edit-continue').removeAttr("disabled");
           $('input#edit-continue').css('opacity','1');
	 }
      }
  });
}

function validate_fields(){
  $('input#edit-panes-billing-billing-first-name').blur(function() {
      if($(this).val()){
          $('div.custom-error').text('');
          //is_value_empty();
      }
   });


  $('input#edit-panes-customer-primary-email').blur(function(){
     var customeremail	=  $(this).val(); 
     if(IsEmail(customeremail) == false){
	   var err_str = 'Email field is required.';
	       if(customeremail != ''){
		   err_str = 'Invalid email address.';
		}
	       if ($('div.custom-error-email').length == 0) {
		    $('<div class="custom-error-email">'+err_str+'</div>').insertAfter('input#edit-panes-customer-primary-email');
	       } else {
		    $('div.custom-error-email').text(err_str);
	       }
	      return false;
	  } else {
	      $('div.custom-error-email').text('');
	 }
   });


  $('input#edit-panes-billing-billing-postal-code').blur(function(){
     if($(this).val()){
        $('div.custom-error-zip').text('');
        //is_value_empty();
      }
   });

   
  $('input#edit-panes-billing-billing-phone').blur(function(){
     if($(this).val()){
        $('div.custom-error-phone').text('');
        //is_value_empty();
      }
   });

 $('textarea#edit-panes-billing-billing-street1').blur(function(){
     if($(this).val()){
        $('div.custom-error-address').text('');
        //is_value_empty();
      }
   });

  $('input#edit-panes-billing-billing-city').blur(function(){
     if($(this).val()){
        $('div.custom-error-city').text('');
        //is_value_empty();
      }
   });

  $('select#edit-panes-billing-billing-zone').change(function(){
     if($(this).val()){
        $('div.custom-error-zone').text('');
        //is_value_empty();
      }
   });
}
/*

function is_value_empty(){
    var fname = $('#edit-panes-billing-billing-first-name').val();
    var customer_email = $('#edit-panes-customer-primary-email').val();
    var customer_zip = $('#edit-panes-billing-billing-postal-code').val();
    var customer_phone = $('#edit-panes-billing-billing-phone').val();
    var customer_address = $('#edit-panes-billing-billing-street1').val().length;
    var customer_city = $('#edit-panes-billing-billing-city').val();
    var customer_state = $('#edit-panes-billing-billing-zone').val();
    var arr = [ fname, customer_email,customer_zip, customer_phone, customer_address, customer_city, customer_state ];
    jQuery.each(arr, function(j) {
       if(arr[j] == ''){
          $('input#edit-continue').attr("disabled", "true");
          $('input#edit-continue').css('opacity','0.4');          
         } else {
          $('input#edit-continue').removeAttr("disabled");
          $('input#edit-continue').css('opacity','1');
         } 
     });
 }
*/

function show_hide_images(){
var clicked=true;
      $("#zoomimg").click(function(){
          if(clicked){
                $('.bigimage').show();
                $('.smallimage').hide();
                $('.single-image img').css({width: 500, height: 500});
               // $('.single-image').css('overflow-x', 'scroll');

                //$('.single-image').css('text-align','left');
                //$('.single-image').css('overflow','scroll');

               clicked=false;
             } else {
                $('.bigimage').hide();
                $('.smallimage').show();
                $('.single-image img').css({width: 225, height: 255});
                //$('.single-image').css('overflow-x', 'hidden');
                //$('.single-image').css('text-align','center');
            clicked=true;
            }
     });
}
