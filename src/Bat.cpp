/**
 * @file Bat.h
 * @author Winston Spencer
 * @brief The Bat class implementation
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <string>
#include "Bat.h"

/**
 * @brief Construct a new Bat object
 * 
 */
Bat::Bat() : Mammal()
{
  this->setType("Bat");
  this->setParentType("Mammal");
}

/**
 * @brief Destroy the Bat object
 * 
 */
Bat::~Bat()
{
  // TODO Auto-generated destructor stub
}
