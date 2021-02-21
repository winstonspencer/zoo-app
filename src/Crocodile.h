/**
 * @file Crocodile.h
 * @author Winston Spencer
 * @brief 
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef CROCODILE_H_
#define CROCODILE_H_

#include "Oviparous.h"

class Crocodile : public Oviparous
{
public:
  /**
   * @brief Construct a new Crocodile object
   * 
   */
  Crocodile();

  /**
   * @brief Destroy the Crocodile object
   * 
   */
  virtual ~Crocodile();
};

#endif /* CROCODILE_H_ */
