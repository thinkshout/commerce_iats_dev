# Commerce iATS Drupal Installation Profile

Based on the [ThinkShout base installation profile](https://github.com/thinkshout/ts_build) for Drupal 7.x.

## Requirements
In addition to the standard Drupal requirements, you will need the following to run this installation profile:

* drush 3.1 - http://drupal.org/project/drush
* drush make 2.0 beta 9 - http://drupal.org/project/drush_make
* git - http://git-scm.com

## Getting started

* Clone the repository locally
```bash
git clone git@github.com:thinkshout/commerce_iats_dev.git commerceiats_distro
```

### Automatic Installation

* Create a new MySQL database for this Drupal installation.
```bash
mysql -h [host] -u [username] -p
create database [database_name]
```

* Build and install Drupal with Commerce iATS
```bash
cd commerceiats_distro
./scripts/build.sh  [target_directory]
```
