/**
 * @file Whale.h
 * @author Winston Spencer
 * @brief  The Whale class implementation
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Whale.h"

/**
 * @brief Construct a new Whale object
 * 
 */
Whale::Whale() :
    Mammal() {
  this->setType("Whale");
  this->setParentType("Mammal");
}


/**
 * @brief Destroy the Whale object
 * 
 */
Whale::~Whale() {
  // TODO Auto-generated destructor stub
}

