<?php
/**
 * @file
 * Template for Radix Bryant Flipped.
 *
 * Patched to support the classes and tags from the old, comparably named
 * Panopoly layouts ported into Kalatheme (and used by Webspark).
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display bryant-flipped clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="section">
    <div class="container">
      <div class="row">
        <div class="col-md-9 bryant-flipped-content-region radix-layouts-content panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['contentmain']; ?>
          </div>
        </div>
        <div class="col-md-3 bryant-flipped-sidebar-region radix-layouts-sidebar panel-panel">
          <div class="panel-panel-inner">
            <?php print $content['sidebar']; ?>
          </div>
        </div>
      </div>
    </div>
  </div>
</div><!-- /.bryant-flipped -->
