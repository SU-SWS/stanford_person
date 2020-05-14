/**
 * Behavior Example that works with Webpack.
 *
 * @see: https://www.npmjs.com/package/drupal-behaviors-loader
 *
 * Webpack wraps everything in enclosures and hides the global variables from
 * scripts so special handling is needed.
 */

export default {

  // Attach Drupal Behavior.
  attach(context, settings) {
    (function ($) {
      $('.person-category__collapsable-menu', context).click(function () {
        $(this).toggleClass('show');
        if ($(this).siblings('.menu').css('display') !== 'none') {
          $(this).attr('aria-expanded', 'true');
        }
        else {
          $(this).attr('aria-expanded', 'false');
        }
      });
    })(jQuery);
  }
};
