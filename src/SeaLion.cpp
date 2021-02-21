/*
 * SealLion.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#include "SeaLion.h"

SeaLion::SeaLion() :
    Mammal() {
  this->setType("SeaLion");
  this->setParentType("Mammal");
}

SeaLion::~SeaLion() {
  // Do nothing;
}

