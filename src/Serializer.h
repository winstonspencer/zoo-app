/**
 * @file Serializer.h
 * @author Winston Spencer
 * @brief The Serializer class definition
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
  /**
   * @brief Trims a String
   * 
   * @param t_value The string to trim.
   * @return std::string 
   */
  std::string trim(std::string t_value);

  /**
   * @brief Parses the record index as an int
   * 
   * @param t_index The record field index
   * @param t_record The entire record
   * @return int The record field as an int.
   */
  int parseIndexAsInt(int t_index, std::string t_record);

  /**
   * @brief Parses the record index as a string
   * 
   * @param t_index The record field index
   * @param t_record The entire record
   * @return int The record field as an string.
   */
  std::string parseIndex(int t_index, std::string t_record);

  /**
   * @brief Create a Bat object
   * 
   * @param t_trackNum The tracking number
   * @param t_name The object name
   * @param t_nursing 0 if nursing, else 1
   * @return Bat* The newly created object
   */
  Bat *createBat(int t_trackNum, std::string t_name, int t_nursing);

  /**
   * @brief Create a Crocodile object
   * 
   * @param t_trackNum The tracking number
   * @param t_name The object name
   * @param t_eggs The number of eggs.
   * @return Crocodile* The newly created object
   */
  Crocodile *createCrocodile(int t_trackNum, std::string t_name, int t_eggs);

  /**
   * @brief Create a Goose object
   * 
   * @param t_trackNum The tracking number
   * @param t_name The object name
   * @param t_eggs The number of eggs.
   * @return Goose* The newly created object
   */
  Goose *createGoose(int t_trackNum, std::string t_name, int t_eggs);

  /**
   * @brief Create a Pelican object
   * 
   * 
   * @param t_trackNum The tracking number
   * @param t_name The object name
   * @param t_eggs The number of eggs.
   * @return Pelican* The newly created object
   */
  Pelican *createPelican(int t_trackNum, std::string t_name, int t_eggs);

  /**
   * @brief Create a Sea Lion object
   * 
   * @param t_trackNum The tracking number
   * @param t_name The object name
   * @param t_nursing 0 if nursing, else 1
   * @return SeaLion* The newly created object
   */
  SeaLion *createSeaLion(int t_trackNum, std::string t_name, int t_nursing);

  /**
   * @brief Create a Whale object
   * 
   * @param t_trackNum The tracking number
   * @param t_name The object name
   * @param t_nursing 0 if nursing, else 1
   * @return Whale* The newly created object
   */
  Whale *createWhale(int t_trackNum, std::string t_name, int t_nursing);

  /**
   * @brief converts a record to an Animal
   * 
   * @param t_record The record to convert
   * @return Animal* The Animal
   */
  Animal *convert(std::string t_record);

public:
  /**
   * @brief Construct a new Serializer object
   * 
   */
  Serializer();

  /**
   * @brief Destroy the Serializer object
   * 
   */
  virtual ~Serializer();

  /**
   * @brief True if the vector contains the specified animal, else False.
   * 
   * @param t_animals The vector containing all animals
   * @param t_animal The animal to search for.
   * 
   * @return true if the vector contains the specified animal, else false.
   */
  bool contains(std::vector<Animal *> *t_animals, Animal *t_animal);

  /**
   * @brief Deserializes the file data in the file into a vector of animals.
   * 
   * @param t_fileName The file to deserialize
   * @param animals The resutting animals vector
   */
  void read(std::string t_fileName, std::vector<Animal *> *animals);

  /**
   * @brief Creates an animal from the given input
   * 
   * @param t_trackNum The animal trackign number
   * @param t_name  The animal name
   * @param t_subType  The animal subtype (or classname)
   * @param t_eggs  The number of eggs
   * @param t_nursing Is the animal nursing ( 1 = yes ,0 = no)
   * @return Animal* 
   */
  Animal *read(int t_trackNum, std::string t_name, std::string t_subType, int t_eggs, int t_nursing);

  /**
   * @brief Serialized the animal object to a txt file.
   * 
   * @param t_fileName The file name where the serialized object will be stores.
   * @param animals The object to serialize
   */
  void write(std::string t_fileName, std::vector<Animal *> animals);
};

#endif /* SERIALIZER_H_ */
