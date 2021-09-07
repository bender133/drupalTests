<?php

/**
 * @file
 * t2.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function t2_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'personal_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'personal_information';
  $view->human_name = 'Personal information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personal information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Personal Information: Personal Information */
  $handler->display->display_options['relationships']['user_id']['id'] = 'user_id';
  $handler->display->display_options['relationships']['user_id']['table'] = 'personal_information';
  $handler->display->display_options['relationships']['user_id']['field'] = 'user_id';
  $handler->display->display_options['relationships']['user_id']['label'] = 'Пользователь';
  /* Field: Personal Information: Personal information ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'personal_information';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  /* Field: Personal Information: Phone */
  $handler->display->display_options['fields']['phone']['id'] = 'phone';
  $handler->display->display_options['fields']['phone']['table'] = 'personal_information';
  $handler->display->display_options['fields']['phone']['field'] = 'phone';
  /* Field: Personal Information: Surname */
  $handler->display->display_options['fields']['surname']['id'] = 'surname';
  $handler->display->display_options['fields']['surname']['table'] = 'personal_information';
  $handler->display->display_options['fields']['surname']['field'] = 'surname';
  /* Field: Personal Information: Personal Information */
  $handler->display->display_options['fields']['user_id']['id'] = 'user_id';
  $handler->display->display_options['fields']['user_id']['table'] = 'personal_information';
  $handler->display->display_options['fields']['user_id']['field'] = 'user_id';
  $handler->display->display_options['fields']['user_id']['label'] = 'User_id';
  /* Field: Personal Information: User_name */
  $handler->display->display_options['fields']['user_name']['id'] = 'user_name';
  $handler->display->display_options['fields']['user_name']['table'] = 'personal_information';
  $handler->display->display_options['fields']['user_name']['field'] = 'user_name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user_id';
  /* Field: User: Link to edit user */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'user_id';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'personal-information';
  $translatables['personal_information'] = array(
    t('Master'),
    t('Personal information'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Пользователь'),
    t('Personal information ID'),
    t('.'),
    t(','),
    t('Phone'),
    t('Surname'),
    t('User_id'),
    t('User_name'),
    t('E-mail'),
    t('Link to edit user'),
    t('Name'),
    t('Page'),
  );
  $export['personal_information'] = $view;

  return $export;
}
