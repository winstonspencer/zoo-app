/*
 * Animal.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#include "Animal.h"
#include <string>

/**
 * @brief Construct a new Animal:: Animal object
 * 
 */
Animal::Animal()
{
  this->m_name = "";
  this->m_trackNum = 0;
  this->m_type = "Animal";
  this->m_parentType = "";
}

/**
 * @brief Destroy the Animal:: Animal object
 * 
 */
Animal::~Animal()
{
  delete &this->m_name;
  delete &this->m_trackNum;
  delete &this->m_type;
  delete &this->m_parentType;
}

/**
 * @brief Gets the animal name.
 * 
 * @return std::string the animal name as a string.
 */
std::string Animal::getName()
{
  return this->m_name;
}

/**
 * @brief Get the tracking number
 * 
 * @return int the tracking number
 */
int Animal::getTrackNum()
{
  return this->m_trackNum;
}

/**
 * @brief Get the animal type (subtype)
 * 
 * @return std::string the animal type (subtype)
 */
std::string Animal::getType()
{
  return this->m_type;
}

/**
 * @brief Get the parent type (the type)
 * 
 * @return std::string the parent type as string
 */
std::string Animal::getParentType()
{
  return this->m_parentType;
}

/**
 * @brief Set the animal name.
 * 
 * @param t_name the animal name as a string.
 */
void Animal::setName(std::string t_name)
{
  this->m_name = t_name;
}

/**
 * @brief Set the animal tracking number
 * 
 * @param t_trackNum the tracking number.
 */
void Animal::setTrackNum(int t_trackNum)
{
  this->m_trackNum = t_trackNum;
}

/**
 * @brief Set the animal type (subtype)
 * 
 * @param t_type The animal type (subtype).
 */
void Animal::setType(std::string t_type)
{
  this->m_type = t_type;
}

/**
 * @brief Set the parent class name.
 * 
 * @param t_parentType The parent class name.
 */
void Animal::setParentType(std::string t_parentType)
{
  this->m_parentType = t_parentType;
}
