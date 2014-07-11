<?php
/**
 * @file
 * commerceiats_commerce.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commerceiats_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
