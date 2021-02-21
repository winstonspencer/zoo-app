/*
 * Mammal.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#include "Mammal.h"
#include <string>

Mammal::Mammal() :
    Animal() {
  this->m_nursing = 0;
  this->setType("Mammal");
  this->setParentType("Animal");
}

Mammal::~Mammal() {
  delete &this->m_nursing;
}

int Mammal::isNursing() {
  return this->m_nursing;
}

void Mammal::setNursing(int t_nursing) {
  this->m_nursing = t_nursing;
}

