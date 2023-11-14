Raven authentication
====================

[![Build Status](https://travis-ci.org/misd-service-development/drupal-raven.svg?branch=master)](https://travis-ci.org/misd-service-development/drupal-raven)

This module allows users to log into a Drupal site using [Raven](http://raven.cam.ac.uk/), the University of Cambridge's central authentication service.

Users can log into an existing account assuming their CRSid has been used as their username, otherwise a new account is created (if your site allows visitors to create accounts).

Access can be restricted to members of a specified department/instution - using the Institution's unique id from Lookup (e.g. UIS) 

Configuration is through 'Configuration -> People -> Raven authentication' or 'sitename'/admin/config/people/raven

The setting only takes effect if you turn on "Enable administrator approval override" on the configuration screen to "Override the Drupal administrator approval settings for users successfully authenticated by Raven." otherwise the settings on 'Configuration -> People -> Account settings' ('sitename'/admin/config/people/accounts) apply.

Authors
-------

* Andy Batey <andrew.batey@uis.cam.ac.uk>
* Chris Wilkinson 

It is based on the [Ucamraven module](https://wiki.cam.ac.uk/raven/Drupal#ucamraven) and uses code from the [UcamWebauth PHP class](https://wiki.cam.ac.uk/raven/PHP_library).

Requirements
------------

* [PHP OpenSSL library](http://www.php.net/manual/en/book.openssl.php)
* [Simple Lookup](https://gitlab.developers.cam.ac.uk/uis/webcms/drupal-modules/tree/master/simple_lookup)
* Drupal 7
