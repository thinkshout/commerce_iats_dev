<?php
/**
 * @file
 * commerceiats_demo_direct_debit.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function commerceiats_demo_direct_debit_default_rules_configuration() {
  $items = array();
  $items['commerce_payment_iats_direct_debit_customer_code_creation_demo'] = entity_import('rules_config', '{ "commerce_payment_iats_direct_debit_customer_code_creation_demo" : {
      "LABEL" : "iATS Payments: Direct Debit customer code creation demo",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_direct_debit_customer_code" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "direct_debit_customer_code",
                "settings" : {
                  "agent_code" : "UDDD88",
                  "agent_password" : "UDDD888",
                  "server" : "UK",
                  "log" : { "request" : "request", "response" : "response" },
                  "detailed_failure_message" : 1
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['commerce_payment_iats_direct_debit_payment_validation_demo'] = entity_import('rules_config', '{ "commerce_payment_iats_direct_debit_payment_validation_demo" : {
      "LABEL" : "iATS Payments: Direct Debit payment validation demo",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_direct_debit_validation" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "direct_debit_validation",
                "settings" : {
                  "agent_code" : "UDDD88",
                  "agent_password" : "UDDD888",
                  "server" : "UK",
                  "log" : { "request" : "request", "response" : "response" },
                  "detailed_failure_message" : 1,
                  "direct_debit" : {
                    "service_user_number" : "999999999999",
                    "company_name" : "Company",
                    "company_address" : "123 Any Street",
                    "company_city" : "City",
                    "company_state" : "State",
                    "company_country" : "United States",
                    "company_postcode" : "00000",
                    "company_phone" : "555 123 4567",
                    "company_email" : "company@example.com"
                  }
                }
              }
            }
          }
        }
      ]
    }
  }');
  return $items;
}
