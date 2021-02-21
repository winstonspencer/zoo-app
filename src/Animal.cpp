/*
 * Animal.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#include "Animal.h"
#include <string>

Animal::Animal() {
  this->m_name = "";
  this->m_trackNum = 0;
  this->m_type = "Animal";
  this->m_parentType = "";
}

Animal::~Animal() {
  delete &this->m_name;
  delete &this->m_trackNum;
  delete &this->m_type;
  delete &this->m_parentType;
}

std::string Animal::getName() {
  return this->m_name;
}

int Animal::getTrackNum() {
  return this->m_trackNum;
}

std::string Animal::getType() {
  return this->m_type;
}

std::string Animal::getParentType() {
  return this->m_parentType;
}

void Animal::setName(std::string t_name) {
  this->m_name = t_name;
}

void Animal::setTrackNum(int t_trackNum) {
  this->m_trackNum = t_trackNum;
}

void Animal::setType(std::string t_type) {
  this->m_type = t_type;
}

void Animal::setParentType(std::string t_parentType) {
  this->m_parentType = t_parentType;
}

