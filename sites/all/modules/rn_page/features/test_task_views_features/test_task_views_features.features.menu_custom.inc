<?php

/**
 * @file
 * test_task_views_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function test_task_views_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Навигация',
    'description' => 'Меню навигации создаётся системой и содержит ссылки, предназначенные пользователям. Ссылки добавляются в меню автоматически некоторыми модулями и показываются при наличии соответствующих прав пользователя.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Меню навигации создаётся системой и содержит ссылки, предназначенные пользователям. Ссылки добавляются в меню автоматически некоторыми модулями и показываются при наличии соответствующих прав пользователя.');
  t('Навигация');

  return $menus;
}
