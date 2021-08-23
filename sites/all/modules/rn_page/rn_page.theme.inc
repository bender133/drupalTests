<?php
/**
 * Returns HTML for a users table.
 */
function theme_users($vars) {
  $form = $vars['form'];
  $rows = [];
  foreach (element_children($form) as $id) { //?
    if (isset($form[$id])) {
      $rows[] = [
        'data' => [
          drupal_render($form[$id]['id']), //?
          drupal_render($form[$id]['name']),
          drupal_render($form[$id]['link']),
        ],
        'class' => [],
      ];
    }
  }

  $output = theme('table', [
    'header' => $form['#header'],
    'rows' => $rows,
    'empty' => t('Table is empty', []),
  ]);

  //  $output .= drupal_render_children($form); ?
  return $output;
}

