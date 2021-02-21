/*
 * Crocodile.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#include "Crocodile.h"

/**
 * @brief Construct a new Crocodile object
 * 
 */
Crocodile::Crocodile() : Oviparous()
{
  this->setType("Crocodile");
  this->setParentType("Oviparous");
}

/**
 * @brief Destroy the Crocodile object
 * 
 */
Crocodile::~Crocodile()
{
  // TODO Auto-generated destructor stub
}
