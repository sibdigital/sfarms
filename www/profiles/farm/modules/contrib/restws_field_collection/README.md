# RESTful Web Services Field Collection

This module makes it possible to process
[Field Collections](https://drupal.org/project/field_collection) in the same
requests as their host entity, using the
[RESTful Web Services](https://drupal.org/project/restws) module.

It does this by invoking a new hook that allows other modules to provide
information about any Field Collections they include. This information is used
to create a set of entity properties that act as aliases for Field Collections.
These alias properties can be manipulated directly on the host entity itself,
and the module will automatically create/delete Field Collection entities
behind-the-scenes.

##  DEPENDENCIES

This module depends on the following modules:

 * RESTful Web Services (http://drupal.org/project/restws)
 * Field Collection (http://drupal.org/project/field_collection)

## INSTALLATION

Install as you would normally install a contributed drupal module. See:
http://drupal.org/documentation/install/modules-themes/modules-7 for further
information.

## MAINTAINERS

Current maintainers:
 * Michael Stenta (m.stenta) - https://drupal.org/user/581414
