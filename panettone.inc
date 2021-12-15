<?php

/**
 * PanettoneBasic extends Entity.
 *
 * A subclass of Entity is a requirement for creating a custom entity. It is
 * also a minimum requirement to define the methods included here, even as 
 * empty functions.
 */
class PanettoneBasic extends Entity {

  /**
   * Implements EntityInterface::id().
   */
  public function id() {
    return $this->basic_id;
  }

  /**
   * Implements EntityInterface::entityType().
   */
  public function entityType() {
    return 'panettone';
  }

  /**
   * Implements EntityInterface::bundle().
   */
  public function bundle() {
    return $this->bundle_type;
  }

  /**
   * Implements EntityInterface::label().
   */
  public function label() {
    return $this->item_description;
  }

  /**
   * Implements EntityInterface::uri().
   */
  public function uri() {
    return panettone_uri($this);
  }
}
