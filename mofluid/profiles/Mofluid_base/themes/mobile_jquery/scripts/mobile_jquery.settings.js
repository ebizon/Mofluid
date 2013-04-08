$(document).ready(function() {
  $("#edit-global-theme").change(function () {
    changeOptions();
  }).trigger('change');
  
  $('input[name="global_inset"]').change(function () {
    changeOptions();
  }).trigger('change');
  
  $("#edit-use-global").change(function () {
    changeOptions();
  }).trigger('change');
});

function changeOptions() {
  if ($("#edit-use-global").is(':checked')) {
    $('#system-theme-settings select option[value="'+$('#edit-global-theme').find("option:selected").val()+'"]').attr('selected', 'selected');
    $('#system-theme-settings input[type="radio"][value="' + $('input[name="global_inset"]:checked').val() + '"]').attr('checked','checked');
  }
}