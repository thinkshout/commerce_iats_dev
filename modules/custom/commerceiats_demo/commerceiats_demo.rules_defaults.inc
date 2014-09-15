<?php
/**
 * @file
 * commerceiats_demo.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function commerceiats_demo_default_rules_configuration() {
  $items = array();
  $items['commerce_payment_iats_direct_debit_customer_code_creation_demo'] = entity_import('rules_config', '{ "commerce_payment_iats_direct_debit_customer_code_creation_demo" : {
      "LABEL" : "iATS Payments: Direct Debit customer code creation demo",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
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
                  "agent_code" : "TEST88",
                  "agent_password" : "TEST88",
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
      "ACTIVE" : false,
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
                  "agent_code" : "TEST88",
                  "agent_password" : "TEST88",
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
  $items['commerce_payment_iats_payments_ach_eft_payment_demo'] = entity_import('rules_config', '{ "commerce_payment_iats_payments_ach_eft_payment_demo" : {
      "LABEL" : "iATS Payments: ACH\\/EFT payment demo",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_iats_ach_eft" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "iats_ach_eft",
                "settings" : {
                  "agent_code" : "TEST88",
                  "agent_password" : "TEST88",
                  "direct_post" : 0,
                  "process_key" : "",
                  "server" : "NA",
                  "log" : { "request" : "request", "response" : "response" },
                  "detailed_failure_message" : 1,
                  "invoice_prefix" : "INVOICE-"
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['commerce_payment_iats_payments_credit_card_payment_demo'] = entity_import('rules_config', '{ "commerce_payment_iats_payments_credit_card_payment_demo" : {
      "LABEL" : "iATS Payments: Credit card payment demo",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_iats_credit_card" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "iats_credit_card",
                "settings" : {
                  "agent_code" : "TEST88",
                  "agent_password" : "TEST88",
                  "direct_post" : 0,
                  "process_key" : "",
                  "server" : "NA",
                  "log" : { "request" : "request", "response" : "response" },
                  "detailed_failure_message" : 1,
                  "invoice_prefix" : "INVOICE-",
                  "credit_card" : { "card_types" : { "visa" : 0, "mastercard" : 0, "amex" : 0, "discover" : 0 } }
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
