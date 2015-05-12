<?php
/**
 * @file
 * to_do_list.features.inc
 */

/**
 * Implements hook_node_info().
 */
function to_do_list_node_info() {
  $items = array(
    'todo_task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('Use tasks for creating a list of things to do.'),
      'has_title' => '1',
      'title_label' => t('Task'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
