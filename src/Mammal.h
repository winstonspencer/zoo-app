/*
 * Mammal.h
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#ifndef MAMMAL_H_
#define MAMMAL_H_

#include "Animal.h"

class Mammal: public Animal {

private:
	int m_nursing;
public:
	Mammal();
	virtual ~Mammal();
	int isNursing();
	void setNursing(int t_nursing);
};

#endif /* MAMMAL_H_ */
