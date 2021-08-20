<?php
/**
 * Returns HTML for a users table.
 */
function theme_users($vars) {
  $form = $vars['form'];
  $rows = array();
  foreach (element_children($form) as $id) { //?
    if (isset($form[$id])) {
      $rows[] = array(
        'data' => array(
          drupal_render($form[$id]['id']), //?
          drupal_render($form[$id]['name']),
          drupal_render($form[$id]['link']),
        ),
        'class' => array(),
      );
    }
  }

  $header = array(
    t('id'),
    t('User name'),
    t('Action'),
  );

  $output = theme('table', array(
    'header' => $header,
    'rows'  => $rows,
    'empty' => t('Table is empty', array()),
  ));

//  $output .= drupal_render_children($form); ?
  return $output;
}

