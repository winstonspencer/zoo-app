/**
 * @file Serializer.h
 * @author Winston Spencer
 * @brief Serialize and Deserialize the Animal object
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef SERIALIZER_H_
#define SERIALIZER_H_

#include <string>
#include <vector>
#include "Animal.h"
#include "Bat.h"
#include "Crocodile.h"
#include "Goose.h"
#include "Pelican.h"
#include "SeaLion.h"
#include "Whale.h"

class Serializer
{

private:
  std::string trim(std::string t_value);
  int parseIndexAsInt(int t_index, std::string t_record);
  std::string parseIndex(int t_index, std::string t_record);
  Bat *createBat(int t_trackNum, std::string t_name, int t_nursing);
  Crocodile *createCrocodile(int t_trackNum, std::string t_name, int t_eggs);
  Goose *createGoose(int t_trackNum, std::string t_name, int t_eggs);
  Pelican *createPelican(int t_trackNum, std::string t_name, int t_eggs);
  SeaLion *createSeaLion(int t_trackNum, std::string t_name, int t_nursing);
  Whale *createWhale(int t_trackNum, std::string t_name, int t_nursing);
  Animal *convert(std::string t_record);

public:
  Serializer();
  virtual ~Serializer();
  bool contains(std::vector<Animal *> *t_animals, Animal *t_animal);
  void read(std::string t_fileName, std::vector<Animal *> *animals);
  Animal *read(int t_trackNum, std::string t_name, std::string t_subType, int t_eggs, int t_nursing);
  void write(std::string t_fileName, std::vector<Animal *> animals);
};

#endif /* SERIALIZER_H_ */
