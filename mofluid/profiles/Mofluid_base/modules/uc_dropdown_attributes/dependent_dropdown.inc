<?php

/**
 * @file
 * Administrative interface for specifying the attribute dependencies.
 *
 * These functions supply the administrative interface for specifying the
 * attribute dependencies using AHAH.  Based on code from the Examples module.
 */

/**
 * Specify the attribute dependencies.
 */
function uc_dropdown_attributes(&$form_state, $product) {
  $form = array();
  $form['#cache'] = TRUE;
  $form['#submit'] = array('uc_dropdown_attributes_submit');
  $attributes = uc_product_get_attributes($product->nid);
  // the contents will either come from the db or from $form_state
  if (isset($form_state['my_values'])) {
    $my_values = $form_state['my_values'];
  }
  else {
    $query = 'SELECT aid, parent_aid, parent_values, required FROM {uc_dropdown_attributes} WHERE nid=%d';
    $result = db_query($query, $product->nid);
    while ($item = db_fetch_object($result)) {
      $my_values['parent-' . $item->aid] = $item->parent_aid;
      $my_values['required-' . $item->aid] = $item->required;
      $my_values['values-' . $item->aid . '-wrapper']['values-' . $item->aid] =
        unserialize($item->parent_values);
    }
  }

  $form['intro'] = array(
    '#type' => 'markup',
    '#value' => '<p>' . t('Since drop down attributes may not appear, they cannot be always required.  The required checkbox applies only when the dropdown attribute appears.  Any dropdown attribute is also checked under the attributes table to make sure it is not required there as this would cause validation errors.') . '</p><p>' . t('If Javascript is not enabled, a Choose button appears at the bottom of the page to allow this page to be reloaded with the updated values.') . '</p>',
  );
  $form['prefix'] = array(
    '#type' => 'markup',
    '#value' => '<table><tr><th>' . t('Attribute') . '</th><th>' . t('Depends On') . '</th><th>' . t('With Values') . '</th><th>' . t('Required') . '</th></tr>',
  );

  $index=1;
  foreach ($attributes as $attribute) {
    $form['attributes'][$attribute->aid]['attribute-' . $attribute->aid] = array(
      '#type' => 'markup',
      '#prefix' => '<tr><td>',
      '#value' => $attribute->name,
      '#suffix' => '</td>',
    );
    $options = array();
    $options[0] = 'None';
    foreach ($attributes as $option) {
      if ($option->aid!=$attribute->aid) {
        $options[$option->aid] = $option->name;
      }
    }
    $selected = isset($my_values['parent-' . $attribute->aid]) ? $my_values['parent-' . $attribute->aid] : 0;
    $form['attributes'][$attribute->aid]['parent-' . $attribute->aid] = array(
      '#type' => 'select',
      '#prefix' => '<td>',
      '#options' => $options,
      '#default_value' => $selected,
      '#ahah' => array(
        'path' => 'node/' . $product->nid . '/edit/dependencies/' .
                  $attribute->aid . '/callback',
        'wrapper' => 'values-' . $attribute->aid . '-replace',
        // 'event' => 'change', // default value: does not need to be set explicitly.
      ),
    );
    $form['attributes'][$attribute->aid]['values-' . $attribute->aid . '-wrapper'] = array(
      '#tree' => TRUE,
      '#prefix' => '<td><div id="values-' . $attribute->aid . '-replace">',
      '#suffix' => '</div></td>',
    );
    $options = array();
    if ($selected==0) {
      $type = 'select';
    }
    else {
      $parent_attributes = uc_attribute_load($selected);
      if (count($parent_attributes->options)==0) {
        $type = 'textfield';
      }
      else {
        $type= 'select';
        foreach ($parent_attributes->options as $oid => $option)
          $options[$oid] = $option->name;
      }
    }
    if ($type=='select') {
      $form['attributes'][$attribute->aid]['values-' . $attribute->aid . '-wrapper']['values-' . $attribute->aid] = array(
        '#type' => $type,
        '#options' => $options,
        '#multiple' => TRUE,
        '#default_value' => isset($my_values['values-' . $attribute->aid . '-wrapper']['values-' . $attribute->aid]) ? $my_values['values-' . $attribute->aid . '-wrapper']['values-' . $attribute->aid] : '',
      );
    }
    else {
      $form['attributes'][$attribute->aid]['values-' . $attribute->aid . '-wrapper']['values-' . $attribute->aid] = array(
        '#type' => $type,
        '#size' => 30,
        '#default_value' => isset($my_values['values-' . $attribute->aid]) ? $my_values['values-' . $attribute->aid] : '',
      );
    }
    if (isset($my_values['required-' . $attribute->aid])) {
      $default_value = $my_values['required-' . $attribute->aid];
    }
    else {
      $default_value = 0;
    }
    $form['attributes'][$attribute->aid]['required-' . $attribute->aid] = array(
      '#type' => 'checkbox',
      '#prefix' => '<td>',
      '#returned_value' => 1,
      '#default_value' => $default_value,
      '#suffix' => '</td></tr>',
    );
    $index++;
  }

  $form['suffix'] = array(
    '#type' => 'markup',
    '#value' => '</table>',
  );

  // The CSS for this module hides this next button if JS is enabled.
  $form['continue'] = array(
    '#type' => 'submit',
    '#value' => t('Choose'),
    '#suffix' => '</td>',
    '#attributes' => array('class' => 'next-button'),
    '#submit' => array('uc_dropdown_attributes_dropdown_submit_handler'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );


  return $form;
}

/**
 * Submit handler for the second drop down.
 */
function uc_dropdown_attributes_dropdown_submit_handler($form, &$form_state) {
  $values = $form_state['values'];
  unset($form_state['submit_handlers']);
  form_execute_handlers('submit', $form, $form_state);
  $form_state['my_values'] = $values;
  $form_state['rebuild'] = TRUE;
}

/**
 * Callback for AHAH processing.
 */
function uc_dropdown_attributes_edit_callback($aid) {
  $form_state = array('storage' => NULL, 'submitted' => FALSE);
  $form_build_id = $_POST['form_build_id'];
  $form = form_get_cache($form_build_id, $form_state);

  $args = $form['#parameters'];
  $form_id = array_shift($args);
  $form_state['post'] = $form['#post'] = $_POST;
  $form['#programmed'] = $form['#redirect'] = FALSE;

  drupal_process_form($form_id, $form, $form_state);
  $form = drupal_rebuild_form($form_id, $form_state, $args, $form_build_id);

  $changed_elements = $form['attributes'][$aid]['values-' . $aid . '-wrapper'];
  unset($changed_elements['#prefix'], $changed_elements['#suffix']); // Prevent duplicate wrappers.
  drupal_json(array(
    'status'   => TRUE,
    'data'     => theme('status_messages') . drupal_render($changed_elements),
  ));
}

/**
 * Write form values out to the database table.
 */
function uc_dropdown_attributes_submit($form, &$form_state) {

  if ($form_state['clicked_button']['#id'] == 'edit-submit') {
    $form_state['rebuild'] = FALSE;
    $nid = $form['#parameters'][2]->nid;
    foreach ($form_state['values'] as $key => $value) {
      list($field, $aid)=explode('-', $key);
      if (!isset($records[$aid])) {
        $records[$aid] = new stdClass();
      }
      switch ($field) {
        case 'parent':
          $records[$aid]->parent_aid = $value;
          break;

        case 'values':
          $records[$aid]->parent_values = serialize($value['values-' . $aid]);
          break;

        case 'required':
          $records[$aid]->required = $value;
          break;
      }
    }
    $table = 'uc_dropdown_attributes';
    $query = 'DELETE FROM {uc_dropdown_attributes} WHERE nid=%d';
    $result = db_query($query, $nid);
    drupal_set_message(t('Processing node ' . $nid));
    foreach ($records as $record_key => $record_value) {
      $attribute = uc_attribute_load($record_key);
      if ($record_value->parent_aid!=0) {
        $record_value->nid = $nid;
        $record_value->aid = $record_key;
        $values=unserialize($record_value->parent_values);
        $result = drupal_write_record($table, $record_value);
        if ($result) {
          drupal_set_message(t('Saved ' .  $attribute->name));
        }
        else {
          drupal_set_message(t('Database write failed for ' .
                               $attribute->name), 'error');
        }
        // Need to check to make sure attribute is not required all the time
        $query = 'SELECT nid, aid, required FROM {uc_product_attributes} WHERE nid=%d && aid=%d';
        $result = db_query($query, $nid, $record_key);
        $item = db_fetch_object($result);
        if ($item->required==1) {
          $table = 'uc_product_attributes';
          $record = new stdClass();
          $record->nid = $item->nid;
          $record->aid = $item->aid;
          $record->required = 0;
          $primary_keys = array('nid', 'aid');
          drupal_write_record($table, $record, $primary_keys);
        }
      }
    }
  }

  // edit-next or anything else will cause rebuild.
  $form_state['rebuild'] = TRUE;
}

