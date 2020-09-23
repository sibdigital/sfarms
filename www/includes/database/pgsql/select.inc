<?php

/**
 * @file
 * Select builder for PostgreSQL database engine.
 */

/**
 * @addtogroup database
 * @{
 */

class SelectQuery_pgsql extends SelectQuery {

  public function orderRandom() {
    $alias = $this->addExpression('RANDOM()', 'random_field');
    $this->orderBy($alias);
    return $this;
  }

}

/**
 * @} End of "addtogroup database".
 */

