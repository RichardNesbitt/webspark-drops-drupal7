<?php
/**
 * @file
 * webspark_content_callout.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function webspark_content_callout_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'A top university designed for you 2',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'content_callout',
  'language' => 'und',
  'created' => 1410217500,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'afcce62e-cfa8-4772-92f2-0e9d4a1f7b13',
  'field_callout_body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Become a master learner—one who is able to thrive in tomorrow\'s dynamic work environment—at one of the nation\'s most innovative universities today.</p>',
        'format' => 'panopoly_wysiwyg_text',
      ),
    ),
  ),
  'field_callout_button' => array(),
  'field_callout_image' => array(),
  'field_callout_video' => array(
    'und' => array(
      0 => array(
        'video_url' => 'http://vimeo.com/28064578',
        'thumbnail_path' => 'public://video_embed_field_thumbnails/vimeo/28064578.jpg',
        'video_data' => 'a:25:{s:2:"id";i:28064578;s:5:"title";s:24:"Arizona State University";s:11:"description";s:0:"";s:3:"url";s:25:"http://vimeo.com/28064578";s:11:"upload_date";s:19:"2011-08-23 12:25:11";s:10:"mobile_url";s:25:"http://vimeo.com/28064578";s:15:"thumbnail_small";s:48:"http://i.vimeocdn.com/video/190142608_100x75.jpg";s:16:"thumbnail_medium";s:49:"http://i.vimeocdn.com/video/190142608_200x150.jpg";s:15:"thumbnail_large";s:45:"http://i.vimeocdn.com/video/190142608_640.jpg";s:7:"user_id";i:5192713;s:9:"user_name";s:14:"ASU Unscripted";s:8:"user_url";s:30:"http://vimeo.com/asuunscripted";s:19:"user_portrait_small";s:48:"http://i.vimeocdn.com/portrait/2014883_30x30.jpg";s:20:"user_portrait_medium";s:48:"http://i.vimeocdn.com/portrait/2014883_75x75.jpg";s:19:"user_portrait_large";s:50:"http://i.vimeocdn.com/portrait/2014883_100x100.jpg";s:18:"user_portrait_huge";s:50:"http://i.vimeocdn.com/portrait/2014883_300x300.jpg";s:21:"stats_number_of_likes";i:19;s:21:"stats_number_of_plays";i:38607;s:24:"stats_number_of_comments";i:1;s:8:"duration";i:662;s:5:"width";i:1280;s:6:"height";i:720;s:4:"tags";s:85:"ASU, arizona state university, college, tempe, glendale, gilbert, arizona, university";s:13:"embed_privacy";s:8:"anywhere";s:7:"handler";s:5:"vimeo";}',
        'embed_code' => NULL,
        'description' => NULL,
      ),
    ),
  ),
  'field_callout_media' => array(
    'und' => array(
      0 => array(
        'value' => 'video',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'machine_name' => FALSE,
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-08 16:05:00 -0700',
  'user_uuid' => 'dfa43482-1044-43a0-ba41-7b69fa34eed4',
);
  $nodes[] = array(
  'title' => 'A top university designed for you 1',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'content_callout',
  'language' => 'und',
  'created' => 1410217380,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'deaddbe4-a635-426d-8859-e12bf8648ca2',
  'field_callout_body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Become a master learner—one who is able to thrive in tomorrow\'s dynamic work environment—at one of the nation\'s most innovative universities today.</p>',
        'format' => 'panopoly_wysiwyg_text',
      ),
    ),
  ),
  'field_callout_button' => array(
    'und' => array(
      0 => array(
        'url' => 'http://asu.edu',
        'title' => 'See more rankings',
        'attributes' => array(),
      ),
    ),
  ),
  'field_callout_image' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '688dba04-cd25-4ca5-9e9a-d785aa68d1c8',
        'width' => 366,
        'height' => 244,
      ),
    ),
  ),
  'field_callout_video' => array(),
  'field_callout_media' => array(
    'und' => array(
      0 => array(
        'value' => 'image',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'machine_name' => FALSE,
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-09-08 16:03:00 -0700',
  'user_uuid' => 'dfa43482-1044-43a0-ba41-7b69fa34eed4',
);
  return $nodes;
}
