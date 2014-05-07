;------------------------------------------------------------------------------
; Makefile for ThinkShout client website.
;------------------------------------------------------------------------------

api = 2
core = 7.x

;-----------------------------------------
; Contrib Modules
;-----------------------------------------

; addressfield
projects[addressfield][version] = "1.0-beta5"
projects[addressfield][subdir] = "contrib"

; admin_menu requires bean
projects[admin_menu][version] = "3.0-rc4"
projects[admin_menu][subdir] = "contrib"

; bean requires ctools, entity
projects[bean][version] = "1.7"
projects[bean][subdir] = "contrib"

; commerce requires ctools 1.3+, views 3.7+, entity 1.3+, rules 2.6+, addressfield 1.0-beta5+
projects[commerce][version] = "1.9"
projects[commerce][subdir] = "contrib"

; commerce_cardonfile
projects[commerce_cardonfile][version] = "2.0-beta2"
projects[commerce_cardonfile][subdir] = "contrib"

; commerce_iats optionally uses commerce_cardonfile
;projects[commerce_iats][version] = "2.x-dev"
;projects[commerce_iats][subdir] = "contrib"

; commerce_iats
projects[commerce_iats][type] = module
projects[commerce_iats][download][type] = git
projects[commerce_iats][download][branch] = 7.x-2.x
projects[commerce_iats][download][url] = "git@git.drupal.org:project/commerce_iats.git"
projects[commerce_iats][subdir] = contrib

; context requires ctools 1.7+ (jquery_ui & admin recommended)
projects[context][version] = "3.2"
projects[context][subdir] = "contrib"

; ctools
projects[ctools][version] = "1.4"
projects[ctools][subdir] = "contrib"

; dc_co_pages
projects[dc_co_pages][version] = "1.0"
projects[dc_co_pages][subdir] = "contrib"

; entity
projects[entity][version] = "1.5"
projects[entity][subdir] = "contrib"

; entityreference
projects[entityreference][version] = "1.1"
projects[entityreference][subdir] = "contrib"

; features
projects[features][version] = "2.0"
projects[features][subdir] = "contrib"

; field_collection
projects[field_collection][subdir] = "contrib"
projects[field_collection][download][type] = git
projects[field_collection][download][revision] = "0fd332e"
; Patch to fix On unpublished nodes, when saving, it throws a fatal error: Unable to save a field collection item without a valid reference: https://drupal.org/node/2070159
projects[field_collection][patch][] = "https://drupal.org/files/issues/field_collection-fix_missing_host_entity-2070159-4.patch"

; libraries
projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

; pathauto requires token
projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

; rules
projects[rules][version] = "2.7"
projects[rules][subdir] = "contrib"

; strongarm requires ctools
projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

; token
projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

; views
projects[views][version] = "3.7"
projects[views][subdir] = "contrib"

;-----------------------------------------
; Patched Contrib Modules
;-----------------------------------------

; Patch to fix notices for render arrays in blocks/panels: http://drupal.org/node/1925018#comment-7361230
;projects[ctools][patch][] = "http://drupal.org/files/ctools-1925018-61.patch"


;-----------------------------------------
; Developer tools
;-----------------------------------------

; devel
projects[devel][version] = "1.5"
projects[devel][subdir] = "developer"

; diff
projects[diff][version] = "3.2"
projects[diff][subdir] = "developer"

; ftools
projects[ftools][version] = "1.6"
projects[ftools][subdir] = "developer"

;-----------------------------------------
; Libraries
;-----------------------------------------

; ts_install_helpers
libraries[ts_install_helpers][download][type] = git
libraries[ts_install_helpers][download][url] = git@github.com:thinkshout/ts_install_helpers.git
libraries[ts_install_helpers][directory_name] = "ts_install_helpers"
libraries[ts_install_helpers][type] = "library"

; iatspayments
projects[iatspayments][download][type] = "get"
projects[iatspayments][download][url] = "https://github.com/iATSPayments/PHP/archive/v1.0.tar.gz"
projects[iatspayments][directory_name] = "iatspayments"
libraries[chosen][destination] = "libraries"