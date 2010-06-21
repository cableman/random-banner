
Drupal.behaviors.bannerBehavior = function () {
  $(".random-banner a[rel='external']").click(function() {
    window.open(this.href);
    return false;
  })
};

