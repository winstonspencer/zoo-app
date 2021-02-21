/**
 * @file Bat.h
 * @author Winston Spencer
 * @brief The Bat class definition
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef BAT_H_
#define BAT_H_

#include "Mammal.h"

class Bat: public Mammal {

public:
  /**
   * @brief Construct a new Bat object
   * 
   */
	Bat();

  /**
   * @brief Destroy the Bat object
   * 
   */
	virtual ~Bat();
};

#endif /* BAT_H_ */
