/*
 * Oviparous.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#include "Oviparous.h"
#include <string>

Oviparous::Oviparous() :
    Animal() {
  this->m_numberOfEggs = 0;
  this->setType("Oviparous");
  this->setParentType("Animal");
}

Oviparous::~Oviparous() {
  delete &this->m_numberOfEggs;
}

int Oviparous::getNumberOfEggs() {
  return this->m_numberOfEggs;
}

void Oviparous::setNumberOfEggs(int t_numberOfEggs) {
  this->m_numberOfEggs = t_numberOfEggs;
}

