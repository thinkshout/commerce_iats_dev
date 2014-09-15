<?php
/**
 * @file
 * commerceiats_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commerceiats_demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function commerceiats_demo_node_info() {
  $items = array(
    'product_display_demo' => array(
      'name' => t('Product Display Demo'),
      'base' => 'node_content',
      'description' => t('Displays a product, allowing the user to add the product to their shopping cart.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
