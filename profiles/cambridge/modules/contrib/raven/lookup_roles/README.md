Lookup roles
============

This module allows assigning Drupal roles to users using user-defined groups in [Lookup](http://lookup.cam.ac.uk/), the University of Cambridge's central directory service.

Instructions
------------

Add Drupal role(s) that match Lookup group name(s) and assign appropriate permissions

Create a taxonomy vocabulary called 'lookup_group_roles'

Add terms to the taxonomy 'lookup_group_roles' to match the role(s) created

To use with Taxonomy Access Control Lite:
-----------------------------------------

Add role as above

Add a term to the taxonomy 'Restricted Content' to match the role created.

Configure the Taxonomy Access Control Lite scheme to GRANT PERMISSION BY ROLE: 'rolename' to the rolename term

Authors
-------

* Andy Batey <andrew.batey@uis.cam.ac.uk>

Requirements
------------

* [Simple Lookup](https://gitlab.developers.cam.ac.uk/uis/webcms/drupal-modules/tree/master/simple_lookup)
* Drupal 7
