/*
 * Pelican.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#include "Pelican.h"

/**
 * @brief Construct a new Pelican object
 * 
 */
Pelican::Pelican() : Oviparous()
{
  this->setType("Pelican");
  this->setParentType("Oviparous");
}

/**
 * @brief Destroy the Pelican object
 * 
 */
Pelican::~Pelican()
{
  // TODO Auto-generated destructor stub
}
