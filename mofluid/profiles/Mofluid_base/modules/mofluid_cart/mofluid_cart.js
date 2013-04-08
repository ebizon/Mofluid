$(document).ready(function(){
  var flag = 0;
  var flag2 = 0;
  $('div#cart-form-products-link').children().click(function(){
    var click_str = $(this).attr('id');
    var get_id =  click_str.split('-');
    if(get_id[1] == 'edit'){
      if(flag == 0){
        $("#cart-qty-"+get_id[2]).show();
        $("#product-qty-"+get_id[2]).show();
        $("#cart-edit-"+get_id[2]).hide();
        $("#cart-qty-text-"+get_id[2]).hide();
        flag = 1;
      }else if(flag == 1){
        $("#cart-qty-"+get_id[2]).hide();
        $("#product-qty-"+get_id[2]).hide();
        $("#cart-edit-"+get_id[2]).show();
        $("#cart-qty-text-"+get_id[2]).show();
        flag = 0;
      }
    }
  });

  $('#cart-form-products-link #edit-update').click(function(){
    var p_id = $(this).parent().attr('id');
    var get_pid = p_id.split('-');
    var qty_val = $("#cart-qty-"+get_pid[2]+" .form-text").val();
    if(qty_val == 0 ){
      if ($('div.custom-error-qty').length == 0) {
        $('<div class="custom-error-qty">Quantity cannot be 0.</div>').insertAfter("div#cart-qty-"+get_pid[2]);
      } else {
        $('div.custom-error-qty').text('Quantity cannot be 0.');
      }
      return false;
    } else {
      $('div.custom-error-qty').text('');
    }
  });
});

