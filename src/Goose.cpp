/**
 * @file Goose.h
 * @author Winston Spencer
 * @brief The Goose class implementation
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Goose.h"

/**
 * @brief Construct a new Goose object
 * 
 */
Goose::Goose() : Oviparous()
{
  this->setType("Goose");
  this->setParentType("Oviparous");
}

/**
 * @brief Destroy the Goose object
 * 
 */
Goose::~Goose()
{
  // TODO Auto-generated destructor stub
}
