/**
 * @file Oviparous.h
 * @author Winston Spencer
 * @brief The Oviparous class implementation
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "Oviparous.h"
#include <string>

/**
 * @brief Construct a new Oviparous:: Oviparous object
 * 
 */
Oviparous::Oviparous() : Animal()
{
  this->m_numberOfEggs = 0;
  this->setType("Oviparous");
  this->setParentType("Animal");
}

/**
 * @brief Destroy the Oviparous:: Oviparous object
 * 
 */
Oviparous::~Oviparous()
{
  delete &this->m_numberOfEggs;
}

/**
 * @brief Get the Number Of Eggs object
 * 
 * @return int 
 */
int Oviparous::getNumberOfEggs()
{
  return this->m_numberOfEggs;
}

/**
 * @brief Set the Number Of Eggs object
 * 
 * @param t_numberOfEggs 
 */
void Oviparous::setNumberOfEggs(int t_numberOfEggs)
{
  this->m_numberOfEggs = t_numberOfEggs;
}
