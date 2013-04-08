/* $Id$
script to jquery size option select in product details page.
*/
$.noConflict();
$(document).ready(function() {
  var selected = $(".attributes option:selected").val();
  $('div#sizes-wrapper-elements-id').children().click(function(){
    $('div#sizes-wrapper-elements-id').children().each(function(){
      $(this).removeClass("active");
      $('input.node-add-to-cart').css('opacity','1');
    });
    $("option:selected").attr("selected", false);
    var sizes = $(this).text();
    //$("#edit-attributes-2 option:selected").text(sizes);
    $(".attributes option[text=" + sizes +"]").attr("selected","selected");
    $(this).addClass("active");
    //$('input.node-add-to-cart').css('background','#5F9238');
    $('.custom-messages-error').hide();

  });
  validate_attributes();
});

/* On product node page there is a validation of size .*/
function validate_attributes(){
  $('.node-add-to-cart').click(function(){
    var selected_val = $('div.attributes select').val();
    if(selected_val == '' || selected_val == null){
      if ($('div.custom-messages-error').length == 0) {
        $('<div class="custom-messages-error">Please select a size.</div>').insertAfter('#sizes-wrapper-elements-id');
      } else {
        $('div.custom-messages-error').text('Please select a size.');
      }
      return false;
    } else {
      return true;
    }
  });
}

