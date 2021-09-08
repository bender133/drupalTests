<?php

/**
 * @file
 * t2.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function t2_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'test@ru.ru',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
