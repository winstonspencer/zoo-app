/*
 * Bat.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#include <string>
#include "Bat.h"

Bat::Bat() :
    Mammal() {
  this->setType("Bat");
  this->setParentType("Mammal");
}

Bat::~Bat() {
  // TODO Auto-generated destructor stub
}
