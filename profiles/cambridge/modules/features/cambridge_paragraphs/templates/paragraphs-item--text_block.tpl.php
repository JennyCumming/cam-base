<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
hide($content['field_image_caption']);
hide($content['field_image_style']);
hide($content['field_image_alignment']);
hide($content['field_image']);
hide($content['field_image_link']);
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>

<?php if($has_heading): ?>
    <h2><?php print render($content['field_paragraph_heading']); ?></h2>
<?php endif; ?>

<?php if($has_image): ?>
    <figure class="<?php print $image_alignment; ?>">
      <?php if(isset($image_link)): ?>
        <a href="<?php print $image_link; ?>">
      <?php endif; ?>

      <?php print $styled_image; ?>

      <?php if(isset($image_link)): ?>
        </a>
      <?php endif; ?>

      <figcaption>
        <?php print $caption_text; ?>
    </figure>
<?php endif; ?>

    <?php print render($content); ?>

      <?php if(isset($button_link)): ?>
         <?php print $button_link; ?>
      <?php endif; ?>

  </div>
</div>
