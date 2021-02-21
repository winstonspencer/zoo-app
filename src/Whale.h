/**
 * @file Whale.h
 * @author Winston Spencer
 * @brief  The Whale class definition
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef WHALE_H_
#define WHALE_H_

#include "Mammal.h"

class Whale: public Mammal {
public:
  /**
   * @brief Construct a new Whale object
   * 
   */
	Whale();

  /**
   * @brief Destroy the Whale object
   * 
   */
	virtual ~Whale();
};

#endif /* WHALE_H_ */
