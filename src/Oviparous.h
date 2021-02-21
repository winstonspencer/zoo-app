/**
 * @file Oviparous.h
 * @author Winston Spencer
 * @brief The Oviparous class definition
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef OVIPAROUS_H_
#define OVIPAROUS_H_

#include "Animal.h"

class Oviparous: public Animal {
private:
  /**
   * @brief The numberof eggs class member
   * 
   */
	int m_numberOfEggs;
public:

  /**
   * @brief Construct a new Oviparous object
   * 
   */
	Oviparous();

  /**
   * @brief Destroy the Oviparous object
   * 
   */
	virtual ~Oviparous();

  /**
   * @brief Get the Number Of Eggs object
   * 
   * @return int 
   */
	int getNumberOfEggs();

  /**
   * @brief Set the Number Of Eggs object
   * 
   * @param t_numberOfEggs 
   */
	void setNumberOfEggs(int t_numberOfEggs);
};

#endif /* OVIPAROUS_H_ */
