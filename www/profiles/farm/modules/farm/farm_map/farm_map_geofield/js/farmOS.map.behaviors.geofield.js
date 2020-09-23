(function ($) {
  farmOS.map.behaviors.geofield = {
    attach: function (instance) {
      instance.edit.wktOn('featurechange', function(wkt) {
        $('#' + instance.target).parents('.field-widget-farm-map-geofield').find('textarea').val(wkt);
      });
    },

    // Make sure this runs after farmOS.map.behaviors.wkt.
    weight: 101,
  };
}(jQuery));
