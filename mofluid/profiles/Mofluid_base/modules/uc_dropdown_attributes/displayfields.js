/*
 * @file
 * Javascript for showing and hiding dependent attributes.
 *
 * Retrieves the dependencies from the database using a callback and shows
 * and hides attributes depending upon the value selected for the attribute
 * they depend upon.
 */

Drupal.behaviors.uc_dropdown_attributes = function(context) {
  // Retrieve the node id
  if ($('div.node-type-product_kit').html()) {
    $('div.add-to-cart').find(':input[name$="[nid]"]').each( function(i,val) {
      var nid = $(val).val();
      $('div.attributes').find('div.attribute').each( function(i, val) {
        var attributes = $(val).attr('class').split(' ');
        if (attributes[1] != undefined) {
          var aid = attributes[1].split('-')[1];
          $.get(Drupal.settings.basePath + 'node/' + nid + '/dependencies/' +
                aid + '/activate', null, parentAttribute);
        }
      });
    });
  }
  else {
    $('div.add-to-cart').each(function(i,val) {
      var nid = $(val).find(':input[name="node_id"]').val();
      $(val).find('div.attribute').each( function(i,val) {
        var attributes = $(val).attr('class').split(' ');
        if (attributes[1] != undefined) {
          var aid = attributes[1].split('-')[1];
          $.get(Drupal.settings.basePath + 'node/' + nid + '/dependencies/' +
                aid + '/activate', null, parentAttribute);
        }
      });
    });
  }
};

var parentAttribute = function(response) {
  var result = Drupal.parseJson(response);
  if (result.status) {
    type = getType('.attribute-' + result.parent_aid);
    switch(type) {
    case 'select':
      $('.attribute-' + result.parent_aid).find('select').change(function() {
        $.each(result.aid, function(index, aid) {
          $.get(Drupal.settings.basePath + 'node/' + result.nid +
                '/dependencies/' + aid + '/dependency', null, applyAttribute);
        });
      });
      break;
    case 'radio':
      $('.attribute-' + result.parent_aid).find('input[name="attributes[' + result.parent_aid + ']"]').change(function() {
        $.each(result.aid, function(index, aid) {
          $.get(Drupal.settings.basePath + 'node/' + result.nid +
                '/dependencies/' + aid + '/dependency', null, applyAttribute);
        });
      });
      break;
    case 'checkbox':
      $('.attribute-' + result.parent_aid).find('input:checkbox').change(function() {
        $.each(result.aid, function(index, aid) {
          $.get(Drupal.settings.basePath + 'node/' + result.nid +
                '/dependencies/' + aid + '/dependency', null, applyAttribute);
        });
      });
      break;
    default:
      break;
    }
    $.each (result.aid, function(index, aid) {
      $.get(Drupal.settings.basePath + 'node/' + result.nid +
            '/dependencies/' + aid + '/dependency', null, initAttribute);
    });
  }
};

var initAttribute = function(response) {
  var result = Drupal.parseJson(response);
  if (result.status) {
    if (result.required == 1) {
      label = $('.attribute-' + result.aid).find('label').not('.option');
      $(label).replaceWith('<label>' +$(label).text() + '<span class="form-required" title="' + Drupal.t('This field is required.') + '">*</span></label>');
    }
    switch(type) {
    case 'select':
      value = $('.attribute-' + result.parent_aid).find('select').val();
      if (value != undefined) {
        if (result.parent_values[value] == undefined) {
          $('.attribute-' + result.aid).slideUp();
        } else {
          if (result.parent_values[value] != undefined) {
            $('.attribute-' + result.aid).slideDown();
          }
          else {
            $('.attribute-' + result.aid).slideUp();
          }
        }
      }
      break;
    case 'radio':
      value = $('input[name="attributes[' + result.parent_aid + ']"]:checked').val();
      if (result.parent_values[value] == undefined) {
        $('.attribute-' + result.aid).slideUp();
      } else {
        if (result.parent_values[value] != undefined) {
          $('.attribute-' + result.aid).slideDown();
        }
        else {
          $('.attribute-' + result.aid).slideUp();
        }
      }
      break;
    case 'checkbox':
      value = $('.attribute-' + result.parent_aid).find('input:checkbox:checked').val();
      if (value == undefined) {
        $('.attribute-' + result.aid).slideUp();
      }
      // Ubercart does not seem to set a default for checkboxes?
      // So no code to handle cases other than undefined.
      break;
    default:
      break;
    }
  }
};

var applyAttribute = function(response) {
  var result = Drupal.parseJson(response);
  if (result.status) {
    parentType = getType('.attribute-' + result.parent_aid);
    var values;
    switch(parentType) {
    case 'select':
      values = [];
      value = $('.attribute-' + result.parent_aid).find('select').val();
      if (value !== '') {
        values.push(value);
      }
      break;
    case 'radio':
      value = $('.attribute-' + result.parent_aid).find('input[name="attributes[' + result.parent_aid + ']"]:checked').val();
      values = [value];
      break;
    case 'checkbox':
      values = [];
      $.each($('.attribute-' + result.parent_aid).find('input:checkbox:checked'), function() {
        values.push($(this).val());
      });
      break;
    default:
      break;
    }
    type = getType('.attribute-' + result.aid);
    switch(type) {
    case 'select':
      if (intersection(values, result.parent_values)) {
        $('.attribute-' + result.aid).slideDown();
      }
      else {
        $('.attribute-' + result.aid).slideUp();
        $('.attribute-' + result.aid).find('select').val('');
        $('.attribute-' + result.aid).find('select').trigger('change');
      } 
      break;
    case 'radio':
      if (intersection(values, result.parent_values)) {
        $('.attribute-' + result.aid).slideDown();
      }
      else {
        $('.attribute-' + result.aid).slideUp();
        $.each($('input[name="attributes[' + result.aid + ']"]:checked'), function() {
          $(this).removeAttr("checked");
          $(this).trigger('change');
        });
      }
      break;
    case 'checkbox':
      if (intersection(values, result.parent_values)) {
        $('.attribute-' + result.aid).slideDown();
      }
      else {
        $('.attribute-' + result.aid).slideUp();
        $.each($('.attribute-' + result.aid).find('input:checkbox:checked'), function() {
          $(this).removeAttr('checked');
          $(this).trigger('change');
        });
      }
      break;
    case 'text':
      if (intersection(values, result.parent_values)) {
        $('.attribute-' + result.aid).slideDown();
      }
      else {
        $('.attribute-' + result.aid).slideUp();
        $('.attribute-' + result.aid).find('input').val('');
      }
      break;
    default:
      break;
    }
  }
};

var getType = function(attribute) {
  type = $(attribute).find('input').attr('type');
  if (type=='radio' || type=='text' || type=='checkbox') {
    return type;
  }
  return 'select';
};

var intersection = function(array, object) {
  for (var i=0; i<array.length; i++) {
    if (object[array[i]] != undefined) {
      return true;
    }
  }
  return false;
};
