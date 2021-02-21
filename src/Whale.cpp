/*
 * Whale.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#include "Whale.h"

Whale::Whale() :
    Mammal() {
  this->setType("Whale");
  this->setParentType("Mammal");
}

Whale::~Whale() {
  // TODO Auto-generated destructor stub
}

