/*
 * Deserialzer.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#include <string>
#include <fstream>
#include <iostream>
#include <exception>
#include "Deserialzer.h"

using namespace std;

Deserialzer::Deserialzer() {
  // TODO Auto-generated constructor stub

}

Deserialzer::~Deserialzer() {
  // TODO Auto-generated destructor stub
}

string Deserialzer::trim(std::string t_value) {

  int index = 0;
  string result;

  if (t_value.length() > 0) {
    for (int i = t_value.length() - 1; i >= 0; --i) {

      if (t_value.at(i) == ' ') {
        index++;
      } else {
        i = 0;
      }
    }
    result = t_value.substr(0, t_value.length() - index);
  }

  return result;
}

bool Deserialzer::contains(std::vector<Animal*> * t_animals, Animal* t_animal) {

  bool results = false;
  if (t_animals != nullptr && t_animal != nullptr) {
    for (unsigned int i = 0; i < t_animals->size(); i++) {
      results = (t_animals->at(i)->getTrackNum() == t_animal->getTrackNum());
      if (results) {
        i = t_animals->size();
      }
    }
  }
  return results;
}

int Deserialzer::parseIndexAsInt(int t_index, string t_record) {

  int result;
  string value = "";

  try {
    value = this->parseIndex(t_index, t_record);
    if (value != "") {
      result = stoi(value);
    } else {
      result = 0;
    }
  } catch (exception& e) {
    result = 0;
  }

  return result;
}

string Deserialzer::parseIndex(int t_index, string t_record) {

  int position;
  int offset;
  string result("");

  try {
    if (t_index == 0) {
      position = 0;
      offset = 7;
    } else if (t_index == 1) {
      position = 8;
      offset = 15;
    } else if (t_index == 2) {
      position = 25;
      offset = 15;
    } else if (t_index == 3) {
      position = 42;
      offset = 15;
    } else if (t_index == 4) {
      position = 59;
      offset = 2;
    } else if (t_index == 5) {
      position = 61;
      offset = 1;
    }

    result = t_record.substr(position, offset);
  } catch (exception& e) {
    cout << "Cannot read the record [" << t_record << "]." << endl;
  }

  return result;
}

Bat* Deserialzer::createBat(int t_trackNum, string t_name, int t_nursing) {
  Bat* bat = new Bat();
  bat->setTrackNum(t_trackNum);
  bat->setName(t_name);
  bat->setNursing(t_nursing);
  return bat;
}

Crocodile* Deserialzer::createCrocodile(int t_trackNum, std::string t_name, int t_eggs) {
  Crocodile* crocodile = new Crocodile();
  crocodile->setTrackNum(t_trackNum);
  crocodile->setName(t_name);
  crocodile->setNumberOfEggs(t_eggs);
  return crocodile;
}
Goose* Deserialzer::createGoose(int t_trackNum, std::string t_name, int t_eggs) {
  Goose* goose = new Goose();
  goose->setTrackNum(t_trackNum);
  goose->setName(t_name);
  goose->setNumberOfEggs(t_eggs);
  return goose;
}
Pelican* Deserialzer::createPelican(int t_trackNum, std::string t_name, int t_eggs) {
  Pelican* pelican = new Pelican();
  pelican->setTrackNum(t_trackNum);
  pelican->setName(t_name);
  pelican->setNumberOfEggs(t_eggs);
  return pelican;
}
SeaLion* Deserialzer::createSeaLion(int t_trackNum, std::string t_name, int t_nursing) {
  SeaLion* seaLion = new SeaLion();
  seaLion->setTrackNum(t_trackNum);
  seaLion->setName(t_name);
  seaLion->setNursing(t_nursing);
  return seaLion;
}
Whale* Deserialzer::createWhale(int t_trackNum, std::string t_name, int t_nursing) {
  Whale* whale = new Whale();
  whale->setTrackNum(t_trackNum);
  whale->setName(t_name);
  whale->setNursing(t_nursing);
  return whale;
}

Animal* Deserialzer::convert(string t_record) {

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

Animal* Deserialzer::read(int t_trackNum, string t_name, string t_subType, int t_eggs, int t_nursing) {

  Animal* animal = nullptr;
  if (t_subType == "Bat") {
    animal = this->createBat(t_trackNum, t_name, t_nursing);
  } else if (t_subType == "Crocodile") {
    animal = this->createCrocodile(t_trackNum, t_name, t_eggs);
  } else if (t_subType == "Goose") {
    animal = this->createGoose(t_trackNum, t_name, t_eggs);
  } else if (t_subType == "Pelican") {
    animal = this->createPelican(t_trackNum, t_name, t_eggs);
  } else if (t_subType == "SeaLion") {
    animal = this->createSeaLion(t_trackNum, t_name, t_nursing);
  } else if (t_subType == "Whale") {
    animal = this->createWhale(t_trackNum, t_name, t_nursing);
  }

  return animal;
}

vector<Animal*> Deserialzer::read(string t_fileName) {

  string record;
  Animal * animal = nullptr;
  vector<Animal*> animals;

  try {

    ifstream inFile(t_fileName);
    if (inFile.is_open()) {

      while (getline(inFile, record)) {

        animal = this->convert(record);
        if (nullptr != animal && false == this->contains(&animals, animal)) {
          animals.push_back(animal);
        }
      }

      inFile.close();
    } else {
      cout << "Cannot open the file: [" << t_fileName << "]." << endl;
    }

  } catch (exception& e) {
    cout << "Error reading file: [" << t_fileName << "]." << endl;
  }

  return animals;
}
