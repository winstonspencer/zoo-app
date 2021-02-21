/*
 * Oviparous.h
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#ifndef OVIPAROUS_H_
#define OVIPAROUS_H_

#include "Animal.h"

class Oviparous: public Animal {
private:
	int m_numberOfEggs;
public:
	Oviparous();
	virtual ~Oviparous();
	int getNumberOfEggs();
	void setNumberOfEggs(int t_numberOfEggs);
};

#endif /* OVIPAROUS_H_ */
