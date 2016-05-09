<?php
/**
 * @file
 * Template for Radix Webb.
 *
 * Patched to support the classes and tags from the old Panopoly Webb for Webspark.
 *
 * Functions:
 * kalatheme_grid_size (from kalatheme theme) - returns (int) Number of Bootstrap columns.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display webb clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <section class="section">
    <div class="container">
      <div class="row row-full">
        <div class="col-md-<?php print kalatheme_grid_size(KALATHEME_GRID_FULL); ?> webb-header-area radix-layouts-header panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['header']; ?>
          </div>
        </div>
      </div>
    </div>
  </section>
  <section class="section">
    <div class="container">
      <div class="row">
        <div class="col-md-<?php print kalatheme_grid_size(KALATHEME_GRID_THIRD); ?> webb-sidebar-area radix-layouts-sidebar panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['sidebar']; ?>
          </div>
        </div>
        <div class="col-md-<?php print kalatheme_grid_size(KALATHEME_GRID_THIRD * 2); ?> webb-flipped-column-content-region-area panel-panel">
          <div class="row">
            <div class="col-md--<?php print kalatheme_grid_size(KALATHEME_GRID_FULL); ?> webb-flipped-column-header-region-area radix-layouts-contentheader panel-panel">
              <div class="panel-panel-inner">
                <?php print $content['contentheader']; ?>
              </div>
            </div>
          </div>
          <div class="row">
            <div class="col-md-<?php print kalatheme_grid_size(KALATHEME_GRID_HALF); ?> webb-flipped-column-content-region-1 radix-layouts-contentcolumn1 panel-panel">
              <div class="panel-panel-inner">
                <?php print $content['contentcolumn1']; ?>
              </div>
            </div>
            <div class="col-md-<?php print kalatheme_grid_size(KALATHEME_GRID_HALF); ?> webb-flipped-column-content-region-2 radix-layouts-contentcolumn2 panel-panel">
              <div class="panel-panel-inner">
                <?php print $content['contentcolumn2']; ?>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div><!-- /.webb-column-content -->
  </section>
</div><!-- /.webb -->
