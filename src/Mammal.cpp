/**
 * @file Mammal.cpp
 * @author Winston Spencer
 * @brief The Mammel class definition
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Mammal.h"
#include <string>

/**
 * @brief Construct a new Mammal object
 * 
 */
Mammal::Mammal() : Animal()
{
  this->m_nursing = 0;
  this->setType("Mammal");
  this->setParentType("Animal");
}

/**
 * @brief Destroy the Mammal object
 * 
 */
Mammal::~Mammal()
{
  delete &this->m_nursing;
}

/**
 * @brief Returns 1 if the animal is nursing, else return 0
 * 
 * @return int 
 */
int Mammal::isNursing()
{
  return this->m_nursing;
}

/**
 * @brief Set the object Nursing object value
 * 
 * @param t_nursing the object Nursing object value
 */
void Mammal::setNursing(int t_nursing)
{
  this->m_nursing = t_nursing;
}
