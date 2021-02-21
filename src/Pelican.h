/**
 * @file Pelican.h
 * @author Winston Spencer
 * @brief 
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef PELICAN_H_
#define PELICAN_H_

#include "Oviparous.h"

class Pelican : public Oviparous
{
public:
  /**
   * @brief Construct a new Pelican object
   * 
   */
  Pelican();

  /**
   * @brief Destroy the Pelican object
   * 
   */
  virtual ~Pelican();
};

#endif /* PELICAN_H_ */
