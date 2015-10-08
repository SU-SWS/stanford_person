(function ($) {

  Drupal.behaviors.yourvariablehere = {
    attach: function(context, settings) {

      $(window).resize(function() {
        resizeImage();
      });

      resizeImage();

      $("html", context).addClass("js-enabled");

    }
  };


  /**
   * [description]
   */
  function resizeImage() {

    var imgs = $(".view-mode-stanford-huge-landscape .postcard-image .field-name-field-s-person-profile-picture img");

    $.each(imgs, function(i, v) {

      var img = $(v);
      var maxh = img.parents(".postcard-image").height();
      var maxw = img.parents(".postcard-image").width();
      var ratio = maxh / maxw;

      img.css('height', maxh);
      img.css('width', "auto");

      if (img.width() < maxw) {
        img.css('width', maxw);
        img.css('height', "auto");
      }


    });
  }


})(jQuery);
