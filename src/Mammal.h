/**
 * @file Mammal.cpp
 * @author Winston Spencer
 * @brief The Mammel class implementation
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef MAMMAL_H_
#define MAMMAL_H_

#include "Animal.h"

class Mammal : public Animal
{

private:
  /**
   * @brief The nuring class member
   * 
   */
  int m_nursing;

public:
  /**
   * @brief Construct a new Mammal object
   * 
   */
  Mammal();

  /**
   * @brief Destroy the Mammal object
   * 
   */
  virtual ~Mammal();

  /**
   * @brief Returns 1 if the animal is nursing, else return 0
   * 
   * @return int 
   */
  int isNursing();

  /**
   * @brief Set the object Nursing object value
   * 
   * @param t_nursing the object Nursing object value
   */
  void setNursing(int t_nursing);
};

#endif /* MAMMAL_H_ */
