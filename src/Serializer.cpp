/**
 * @file Serializer.h
 * @author Winston Spencer
 * @brief The Serializer class implementation
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <string>
#include <fstream>
#include <iostream>
#include <exception>
#include "Serializer.h"
#include <iomanip>

using namespace std;

Serializer::Serializer()
{
  // TODO Auto-generated constructor stub
}

Serializer::~Serializer()
{
  // TODO Auto-generated destructor stub
}

string Serializer::trim(std::string t_value)
{

  int index = 0;
  string result;

  if (t_value.length() > 0)
  {
    for (int i = t_value.length() - 1; i >= 0; --i)
    {

      if (t_value.at(i) == ' ')
      {
        index++;
      }
      else
      {
        i = 0;
      }
    }
    result = t_value.substr(0, t_value.length() - index);
  }

  return result;
}

bool Serializer::contains(std::vector<Animal *> *t_animals, Animal *t_animal)
{

  bool results = false;
  if (t_animals != nullptr && t_animal != nullptr)
  {
    for (unsigned int i = 0; i < t_animals->size(); i++)
    {
      results = (t_animals->at(i)->getTrackNum() == t_animal->getTrackNum());
      if (results)
      {
        i = t_animals->size();
      }
    }
  }
  return results;
}

int Serializer::parseIndexAsInt(int t_index, string t_record)
{

  int result;
  string value = "";

  try
  {
    value = this->parseIndex(t_index, t_record);
    if (value != "")
    {
      result = stoi(value);
    }
    else
    {
      result = 0;
    }
  }
  catch (exception &e)
  {
    result = 0;
  }

  return result;
}

string Serializer::parseIndex(int t_index, string t_record)
{

  int position;
  int offset;
  string result("");

  try
  {
    if (t_index == 0)
    {
      position = 0;
      offset = 7;
    }
    else if (t_index == 1)
    {
      position = 8;
      offset = 15;
    }
    else if (t_index == 2)
    {
      position = 25;
      offset = 15;
    }
    else if (t_index == 3)
    {
      position = 42;
      offset = 15;
    }
    else if (t_index == 4)
    {
      position = 59;
      offset = 2;
    }
    else if (t_index == 5)
    {
      position = 61;
      offset = 1;
    }

    result = t_record.substr(position, offset);
  }
  catch (exception &e)
  {
    cout << "Cannot read the record [" << t_record << "]." << endl;
  }

  return result;
}

Bat *Serializer::createBat(int t_trackNum, string t_name, int t_nursing)
{
  Bat *bat = new Bat();
  bat->setTrackNum(t_trackNum);
  bat->setName(t_name);
  bat->setNursing(t_nursing);
  return bat;
}

Crocodile *Serializer::createCrocodile(int t_trackNum, std::string t_name, int t_eggs)
{
  Crocodile *crocodile = new Crocodile();
  crocodile->setTrackNum(t_trackNum);
  crocodile->setName(t_name);
  crocodile->setNumberOfEggs(t_eggs);
  return crocodile;
}
Goose *Serializer::createGoose(int t_trackNum, std::string t_name, int t_eggs)
{
  Goose *goose = new Goose();
  goose->setTrackNum(t_trackNum);
  goose->setName(t_name);
  goose->setNumberOfEggs(t_eggs);
  return goose;
}
Pelican *Serializer::createPelican(int t_trackNum, std::string t_name, int t_eggs)
{
  Pelican *pelican = new Pelican();
  pelican->setTrackNum(t_trackNum);
  pelican->setName(t_name);
  pelican->setNumberOfEggs(t_eggs);
  return pelican;
}
SeaLion *Serializer::createSeaLion(int t_trackNum, std::string t_name, int t_nursing)
{
  SeaLion *seaLion = new SeaLion();
  seaLion->setTrackNum(t_trackNum);
  seaLion->setName(t_name);
  seaLion->setNursing(t_nursing);
  return seaLion;
}
Whale *Serializer::createWhale(int t_trackNum, std::string t_name, int t_nursing)
{
  Whale *whale = new Whale();
  whale->setTrackNum(t_trackNum);
  whale->setName(t_name);
  whale->setNursing(t_nursing);
  return whale;
}

Animal *Serializer::convert(string t_record)
{

  int nursing;
  int eggs;
  int trackNum;
  string name;
  string subType;

  trackNum = this->parseIndexAsInt(0, t_record);
  name = this->parseIndex(1, t_record);
  // Ignoring record #2
  // string type = this->parseIndex(2, t_record);
  subType = this->trim(this->parseIndex(3, t_record));
  eggs = this->parseIndexAsInt(4, t_record);
  nursing = this->parseIndexAsInt(5, t_record);

  return this->read(trackNum, name, subType, eggs, nursing);
}

Animal *Serializer::read(int t_trackNum, string t_name, string t_subType, int t_eggs, int t_nursing)
{

  Animal *animal = nullptr;
  if (t_subType == "Bat")
  {
    animal = this->createBat(t_trackNum, t_name, t_nursing);
  }
  else if (t_subType == "Crocodile")
  {
    animal = this->createCrocodile(t_trackNum, t_name, t_eggs);
  }
  else if (t_subType == "Goose")
  {
    animal = this->createGoose(t_trackNum, t_name, t_eggs);
  }
  else if (t_subType == "Pelican")
  {
    animal = this->createPelican(t_trackNum, t_name, t_eggs);
  }
  else if (t_subType == "SeaLion")
  {
    animal = this->createSeaLion(t_trackNum, t_name, t_nursing);
  }
  else if (t_subType == "Whale")
  {
    animal = this->createWhale(t_trackNum, t_name, t_nursing);
  }

  return animal;
}

void Serializer::read(string t_fileName, vector<Animal *> *t_animals)
{

  string record;
  Animal *animal = nullptr;

  try
  {

    ifstream inFile(t_fileName);
    if (inFile.is_open())
    {

      while (getline(inFile, record))
      {

        animal = this->convert(record);
        if (nullptr != animal && false == this->contains(t_animals, animal))
        {
          t_animals->push_back(animal);
        }
      }

      inFile.close();
    }
    else
    {
      cout << "Cannot open the file: [" << t_fileName << "]." << endl;
    }
  }
  catch (exception &e)
  {
    cout << "Error reading file: [" << t_fileName << "]." << endl;
  }

  return;
}

void Serializer::write(string t_fileName, vector<Animal *> t_animals)
{

  string record;

  try
  {

    ofstream outFile(t_fileName, ofstream::trunc);
    if (outFile.is_open())
    {

      for (Animal *animal : t_animals)
      {
        outFile << left << setw(7) << setfill('0') << animal->getTrackNum();
        outFile << ' ';
        outFile << left << setw(16) << setfill(' ') << animal->getName();
        outFile << ' ';
        outFile << left << setw(16) << setfill(' ') << animal->getParentType();
        outFile << ' ';
        outFile << left << setw(16) << setfill(' ') << animal->getType();
        outFile << ' ';

        if (Oviparous *o = dynamic_cast<Oviparous *>(animal))
        {
          outFile << right << setw(2) << setfill(' ') << o->getNumberOfEggs();
        }
        else
        {
          outFile << right << setw(2) << setfill(' ') << 0;
        }

        if (Mammal *m = dynamic_cast<Mammal *>(animal))
        {
          outFile << left << setw(1) << setfill('0') << m->isNursing();
        }
        else
        {
          outFile << 0;
        }

        outFile << endl;
      }
      outFile.close();
    }
    else
    {
      cout << "Cannot open the file: [" << t_fileName << "]." << endl;
    }
  }
  catch (exception &e)
  {
    cout << "Error writing to file: [" << t_fileName << "]." << endl;
  }

  return;
}