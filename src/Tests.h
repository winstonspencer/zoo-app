/*
 * Tests.h
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#ifndef TESTS_H_
#define TESTS_H_

#include <iostream>
#include <vector>
#include "Display.h"
#include "Animal.h"
#include "Mammal.h"
#include "Oviparous.h"
#include "Bat.h"
#include "Crocodile.h"
#include "Goose.h"
#include "Pelican.h"
#include "SeaLion.h"
#include "Whale.h"

using namespace std;

void test_animal() {
	Animal *a = new Animal();
	a->setName("Dog");
	a->setTrackNum(100);
	cout << "Name: " << a->getName() << endl;
	cout << "Tracking Number: " << a->getTrackNum() << endl;
	delete a;
}

void test_mammal() {
	Mammal *m = new Mammal();
	m->setName("Cat");
	m->setTrackNum(101);
	m->setNursing(0);

	cout << "Name: " << m->getName() << endl;
	cout << "Tracking Number: " << m->getTrackNum() << endl;
	cout << "Nursing: " << m->isNursing() << endl;
	delete m;
}

void test_oviparous() {
	Oviparous *o = new Oviparous();
	o->setName("Alligator");
	o->setTrackNum(102);
	o->setNumberOfEggs(5);
	cout << "Name: " << o->getName() << endl;
	cout << "Tracking Number: " << o->getTrackNum() << endl;
	cout << "Number of eggs: " << o->getNumberOfEggs() << endl;
	delete o;
}

void test_bat() {
	Bat *b = new Bat();
	//b->setName("Alligator");
	//b->setTrackNum(102);
	//b->setNumberOfEggs(5);
	cout << "Name: " << b->getName() << endl;
	cout << "Tracking Number: " << b->getTrackNum() << endl;
	cout << "Nursing: " << b->isNursing() << endl;
	delete b;
}


void test_displayAnimals() {

  vector<Animal*> v;

  v.push_back(new Bat());
  v.push_back(new Crocodile());
  v.push_back(new Goose());
  v.push_back(new Pelican());
  v.push_back(new SeaLion());
  v.push_back(new Whale());

  Display * d = new Display();
  d->displayAnimals(v);

  delete d;
}

#endif /* TESTS_H_ */
