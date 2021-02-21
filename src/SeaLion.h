/**
 * @file SeaLion.cpp
 * @author Winston Spencer
 * @brief The SeaLion class definition
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef SEALION_H_
#define SEALION_H_

#include "Mammal.h"

class SeaLion : public Mammal
{

public:
  /**
   * @brief Construct a new Sea Lion object
   * 
   */
  SeaLion();

  /**
   * @brief Destroy the Sea Lion object
   * 
   */
  virtual ~SeaLion();
};

#endif /* SEALION_H_ */
