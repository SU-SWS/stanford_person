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

      // Looking at the h3 in the grid and hiding duplicates
      var headingLabels = $('.stanford-people-grid--filters h3');
      headingLabels.each(function (i) {
        var headingLabelsCurrent = $(this).text();
        var prev = headingLabels.eq(i - 1).text();

        if (headingLabelsCurrent !== prev) {
          $(this).show();
        }
        // to make sure the very first appears.
        else if (i === 0) {
          $(this).show();
        }
        else {
          $(this).hide();
        }
      });

    })(jQuery);
  }
};
