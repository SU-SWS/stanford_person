(function ($) {

  Drupal.behaviors.yourvariablehere = {
    attach: function(context, settings) {
      $("html", context).addClass("js-enabled");
    }
  };

})(jQuery);
