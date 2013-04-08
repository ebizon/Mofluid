<?php
/**
 * Process variables for user-picture.tpl.php.
 *
 * The $variables array contains the following arguments:
 * - $account
 *
 * @see user-picture.tpl.php
 */
function mobile_jquery_preprocess_user_picture(&$variables) {
  $variables['picture'] = '';
  if (variable_get('user_pictures', 0)) {
    $account = $variables['account'];
    if (!empty($account->picture) && file_exists($account->picture)) {
      $picture = $account->picture;
    }
    elseif (variable_get('user_picture_default', '')) {
      $picture = variable_get('user_picture_default', '');
    }

    if (isset($picture)) {
      $alt = t("@user's picture", array('@user' => $account->name ? $account->name : variable_get('anonymous', t('Anonymous'))));
      $variables['picture'] = theme('image', $picture, $alt, $alt, '', FALSE);
    }
  }
}