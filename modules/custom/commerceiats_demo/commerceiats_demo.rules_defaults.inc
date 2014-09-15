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
  $items['commerce_payment_iats_ach_eft_customer_code_creation_demo'] = entity_import('rules_config', '{ "commerce_payment_iats_ach_eft_customer_code_creation_demo" : {
      "LABEL" : "iATS Payments: ACH\\/EFT customer code creation demo",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_iats_ach_eft_customer_code" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "iats_ach_eft_customer_code"
          }
        }
      ]
    }
  }');
  $items['commerce_payment_iats_credit_card_customer_code_creation_demo'] = entity_import('rules_config', '{ "commerce_payment_iats_credit_card_customer_code_creation_demo" : {
      "LABEL" : "iATS Payments: Credit card customer code creation demo",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_iats_credit_card_customer_code" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "iats_credit_card_customer_code",
                "settings" : {
                  "agent_code" : "TEST88",
                  "agent_password" : "TEST88",
                  "direct_post" : 0,
                  "process_key" : "",
                  "server" : "NA",
                  "log" : { "request" : "request", "response" : "response" },
                  "detailed_failure_message" : 1,
                  "credit_card" : { "card_types" : { "visa" : 0, "mastercard" : 0, "amex" : 0, "discover" : 0 } }
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['commerce_payment_iats_credit_card_payment_demo_direct_post_'] = entity_import('rules_config', '{ "commerce_payment_iats_credit_card_payment_demo_direct_post_" : {
      "LABEL" : "iATS Payments: Credit card payment demo (Direct Post)",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
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
                  "direct_post" : 1,
                  "process_key" : "PA0940D765F2BD67BD97B82EFAA4D72BE9",
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
  $items['commerce_payment_iats_payments_ach_eft_payment_demo'] = entity_import('rules_config', '{ "commerce_payment_iats_payments_ach_eft_payment_demo" : {
      "LABEL" : "iATS Payments: ACH\\/EFT payment demo",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
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
      "ACTIVE" : false,
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
