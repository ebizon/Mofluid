<?php

/*
 * @file
 *
 *
 */
 
 /**
 * Displays file attachments in table
 *
 * @ingroup themeable
 */
function mobile_jquery_upload_attachments($files) {
  $header = array(t('Attachment'), t('Size'));
  $rows = array();
  foreach ($files as $file) {
    $file = (object)$file;
    if ($file->list && empty($file->remove)) {
      $href = file_create_url($file->filepath);
      $text = $file->description ? $file->description : $file->filename;
      $rows[] = array(l($text, $href, array('attributes' => array('rel' => 'external'))), format_size($file->filesize));
    }
  }
  if (count($rows)) {
    return theme('table', $header, $rows, array('id' => 'attachments'));
  }
}
