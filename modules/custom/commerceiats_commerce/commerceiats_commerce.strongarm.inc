<?php
/**
 * @file
 * commerceiats_commerce.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function commerceiats_commerce_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_billing_field';
  $strongarm->value = 'commerce_customer_billing';
  $export['commerce_customer_profile_billing_field'] = $strongarm;

  return $export;
}
