/**
 * @file SeaLion.cpp
 * @author Winston Spencer
 * @brief  The SeaLion class implementation
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "SeaLion.h"

/**
 * @brief Construct a new Sea Lion object
 * 
 */
SeaLion::SeaLion() : Mammal()
{
  this->setType("SeaLion");
  this->setParentType("Mammal");
}

/**
 * @brief Destroy the Sea Lion object
 * 
 */
SeaLion::~SeaLion()
{
  // Do nothing;
}
