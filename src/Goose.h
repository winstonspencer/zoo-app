/**
 * @file Goose.h
 * @author Winston Spencer
 * @brief The Goose class definition
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef GOOSE_H_
#define GOOSE_H_

#include "Oviparous.h"

class Goose : public Oviparous
{
public:
  /**
   * @brief Construct a new Goose object
   * 
   */
  Goose();

  /**
   * @brief Destroy the Goose object
   * 
   */
  virtual ~Goose();
};

#endif /* GOOSE_H_ */
