/*
 * Deserialzer.h
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#ifndef DESERIALZER_H_
#define DESERIALZER_H_

#include <string>
#include <vector>
#include "Animal.h"
#include "Bat.h"
#include "Crocodile.h"
#include "Goose.h"
#include "Pelican.h"
#include "SeaLion.h"
#include "Whale.h"

class Deserialzer {

private:
  std::string trim(std::string t_value);
  int parseIndexAsInt(int t_index, std::string t_record);
  std::string parseIndex(int t_index, std::string t_record);
  Bat* createBat(int t_trackNum, std::string t_name, int t_nursing);
  Crocodile* createCrocodile(int t_trackNum, std::string t_name, int t_eggs);
  Goose* createGoose(int t_trackNum, std::string t_name, int t_eggs);
  Pelican* createPelican(int t_trackNum, std::string t_name, int t_eggs);
  SeaLion* createSeaLion(int t_trackNum, std::string t_name, int t_nursing);
  Whale* createWhale(int t_trackNum, std::string t_name, int t_nursing);
  Animal* convert(std::string t_record);

public:
  Deserialzer();
  virtual ~Deserialzer();
  bool contains(std::vector<Animal*> * t_animals, Animal* t_animal);
  std::vector<Animal*> read(std::string t_fileName);
  Animal* read(int t_trackNum, std::string t_name, std::string t_subType, int t_eggs, int t_nursing);
};

#endif /* DESERIALZER_H_ */
