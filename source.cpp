/*
 * Animal.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#include "Animal.h"
#include <string>

/**
 * @brief Construct a new Animal:: Animal object
 * 
 */
Animal::Animal()
{
  this->m_name = "";
  this->m_trackNum = 0;
  this->m_type = "Animal";
  this->m_parentType = "";
}

/**
 * @brief Destroy the Animal:: Animal object
 * 
 */
Animal::~Animal()
{
  delete &this->m_name;
  delete &this->m_trackNum;
  delete &this->m_type;
  delete &this->m_parentType;
}

/**
 * @brief Gets the animal name.
 * 
 * @return std::string the animal name as a string.
 */
std::string Animal::getName()
{
  return this->m_name;
}

/**
 * @brief Get the tracking number
 * 
 * @return int the tracking number
 */
int Animal::getTrackNum()
{
  return this->m_trackNum;
}

/**
 * @brief Get the animal type (subtype)
 * 
 * @return std::string the animal type (subtype)
 */
std::string Animal::getType()
{
  return this->m_type;
}

/**
 * @brief Get the parent type (the type)
 * 
 * @return std::string the parent type as string
 */
std::string Animal::getParentType()
{
  return this->m_parentType;
}

/**
 * @brief Set the animal name.
 * 
 * @param t_name the animal name as a string.
 */
void Animal::setName(std::string t_name)
{
  this->m_name = t_name;
}

/**
 * @brief Set the animal tracking number
 * 
 * @param t_trackNum the tracking number.
 */
void Animal::setTrackNum(int t_trackNum)
{
  this->m_trackNum = t_trackNum;
}

/**
 * @brief Set the animal type (subtype)
 * 
 * @param t_type The animal type (subtype).
 */
void Animal::setType(std::string t_type)
{
  this->m_type = t_type;
}

/**
 * @brief Set the parent class name.
 * 
 * @param t_parentType The parent class name.
 */
void Animal::setParentType(std::string t_parentType)
{
  this->m_parentType = t_parentType;
}
/**
 * @file Bat.h
 * @author Winston Spencer
 * @brief The Bat class implementation
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <string>
#include "Bat.h"

/**
 * @brief Construct a new Bat object
 * 
 */
Bat::Bat() : Mammal()
{
  this->setType("Bat");
  this->setParentType("Mammal");
}

/**
 * @brief Destroy the Bat object
 * 
 */
Bat::~Bat()
{
  // TODO Auto-generated destructor stub
}
/**
 * @file Column.cpp
 * @author Winston Spencer
 * @brief The Generic Table Column Implementation
 * @version 0.1
 * @date 2021-02-02
 *
 * @copyright Copyright (c) 2021
 *
 */

// Include class dependencies
#include <sstream>
#include <iomanip>
#include "Column.h"

// Use the standard namespance (std)
using namespace std;

/**
   * @brief Construct a new Column object
   */
Column::Column()
{
  this->m_value = "";
}

/**
 * @brief Construct a new Column object
 *
 * @param t_value  the column int value
 */
Column::Column(int t_value)
{
  this->m_value = to_string(t_value);
}

/**
 * @brief Construct a new Column object
 *
 * @param t_value  the column double value
 */
Column::Column(double t_value)
{
  this->setValue(t_value);
}

/**
 * @brief Construct a new Column object
 *
 * @param t_value  the column value
 */
Column::Column(string t_value)
{
  this->m_value = t_value;
}

/**
 * @brief Destroy the Column object.
 *
 */
Column::~Column()
{
  this->m_value = "";
}

/**
 * @brief Set the column int value
 *
 * @param t_value
 */
void Column::setValue(int t_value)
{
  this->m_value = to_string(t_value);
}

/**
 * @brief Set the column double value
 *
 * @param t_value
 */
void Column::setValue(double t_value)
{
  // Create an output string stream
  ostringstream streamObj;

  // Set Fixed -Point Notation
  streamObj << fixed;

  // Set precision to 2 digits
  streamObj << setprecision(2);

  //Add double to stream
  streamObj << t_value;

  // Get string from output string stream
  this->m_value = streamObj.str();
}

/**
 * @brief Set the column value
 *
 * @param t_value
 */
void Column::setValue(string t_value)
{
  this->m_value = t_value;
}

/**
 * @brief Get the column value
 *
 * @return string the column value
 */
string Column::getValue()
{
  return this->m_value;
}
/*
 * Crocodile.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#include "Crocodile.h"

/**
 * @brief Construct a new Crocodile object
 * 
 */
Crocodile::Crocodile() : Oviparous()
{
  this->setType("Crocodile");
  this->setParentType("Oviparous");
}

/**
 * @brief Destroy the Crocodile object
 * 
 */
Crocodile::~Crocodile()
{
  // TODO Auto-generated destructor stub
}
/**
 * @file Goose.h
 * @author Winston Spencer
 * @brief The Goose class implementation
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Goose.h"

/**
 * @brief Construct a new Goose object
 * 
 */
Goose::Goose() : Oviparous()
{
  this->setType("Goose");
  this->setParentType("Oviparous");
}

/**
 * @brief Destroy the Goose object
 * 
 */
Goose::~Goose()
{
  // TODO Auto-generated destructor stub
}
/**
 * @file Mammal.cpp
 * @author Winston Spencer
 * @brief The Mammel class definition
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Mammal.h"
#include <string>

/**
 * @brief Construct a new Mammal object
 * 
 */
Mammal::Mammal() : Animal()
{
  this->m_nursing = 0;
  this->setType("Mammal");
  this->setParentType("Animal");
}

/**
 * @brief Destroy the Mammal object
 * 
 */
Mammal::~Mammal()
{
  delete &this->m_nursing;
}

/**
 * @brief Returns 1 if the animal is nursing, else return 0
 * 
 * @return int 
 */
int Mammal::isNursing()
{
  return this->m_nursing;
}

/**
 * @brief Set the object Nursing object value
 * 
 * @param t_nursing the object Nursing object value
 */
void Mammal::setNursing(int t_nursing)
{
  this->m_nursing = t_nursing;
}
/**
 * @file Oviparous.h
 * @author Winston Spencer
 * @brief The Oviparous class implementation
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "Oviparous.h"
#include <string>

/**
 * @brief Construct a new Oviparous:: Oviparous object
 * 
 */
Oviparous::Oviparous() : Animal()
{
  this->m_numberOfEggs = 0;
  this->setType("Oviparous");
  this->setParentType("Animal");
}

/**
 * @brief Destroy the Oviparous:: Oviparous object
 * 
 */
Oviparous::~Oviparous()
{
  delete &this->m_numberOfEggs;
}

/**
 * @brief Get the Number Of Eggs object
 * 
 * @return int 
 */
int Oviparous::getNumberOfEggs()
{
  return this->m_numberOfEggs;
}

/**
 * @brief Set the Number Of Eggs object
 * 
 * @param t_numberOfEggs 
 */
void Oviparous::setNumberOfEggs(int t_numberOfEggs)
{
  this->m_numberOfEggs = t_numberOfEggs;
}
/*
 * Pelican.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#include "Pelican.h"

/**
 * @brief Construct a new Pelican object
 * 
 */
Pelican::Pelican() : Oviparous()
{
  this->setType("Pelican");
  this->setParentType("Oviparous");
}

/**
 * @brief Destroy the Pelican object
 * 
 */
Pelican::~Pelican()
{
  // TODO Auto-generated destructor stub
}
/**
 * @file Row.cpp
 * @author Winston Spencer
 * @brief The Generic Table Row Implementation
 * @version 0.1
 * @date 2021-02-02
 *
 * @copyright Copyright (c) 2021
 *
 */

// Include class dependencies
#include "Row.h"

// Use the standard namespance (std)
using namespace std;

/**
 * @brief Construct a new Row object
 */
Row::Row(){
  this->m_columns.clear();
}

/**
 * @brief Destroy the Row object.
 *
 */
Row::~Row()
{
  this->m_columns.clear();
}

/**
 * @brief Adds a column to the row
 *
 * @param t_column the column to add to the row
 */
void Row::addColumn(Column t_column)
{
  this->m_columns.push_back(t_column);
}

/**
 * @brief Get the number of columns in the row
 *
 * @return int the number of columns in the row
 */
int Row::getLength()
{
  return this->m_columns.size();
}

/**
 * @brief Get the i-th Column in the row
 *
 * @param i index of the column to retrieve
 * @return Column the i-th Column in the row
 */
Column Row::getColumn(int i)
{
  Column c;

  if (i < this->m_columns.size())
  {
    c = this->m_columns.at(i);
  }

  return c;
}

/**
 * @brief Get all Columns in the row
 *
 * @return vector<Column> the row columns
 */
Column *Row::getColumns()
{

  Column *columns = new Column[this->m_columns.size()];
  for (int i = 0; i < this->m_columns.size(); i++)
  {
    columns[i] = this->m_columns.at(i);
  }

  return columns;
}

/**
 * @brief Remove all columns in the row
 *
 */
void Row::clear()
{

  for (int i = 0; i < this->m_columns.size(); i++)
  {
    this->m_columns.clear();
  }

  return;
}
/**
 * @file SeaLion.cpp
 * @author Winston Spencer
 * @brief  The SeaLion class implementation
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "SeaLion.h"

/**
 * @brief Construct a new Sea Lion object
 * 
 */
SeaLion::SeaLion() : Mammal()
{
  this->setType("SeaLion");
  this->setParentType("Mammal");
}

/**
 * @brief Destroy the Sea Lion object
 * 
 */
SeaLion::~SeaLion()
{
  // Do nothing;
}
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
}/**
 * @file Table.cpp
 * @author Winston Spencer
 * @brief A Generic Table Implementation
 * @version 0.1
 * @date 2021-02-02
 *
 * @copyright Copyright (c) 2021
 *
 */

// Include class dependencies
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include "Table.h"
#include "Row.h"
#include "Column.h"

// Use the standard namespance (std)
using namespace std;

/**
 * @brief Construct a new Table object
 */
Table::Table() {
  this->m_tableWidth = 111;
  this->m_columnWidth = 16;
  this->m_rowPrefixSize = 2;
  this->m_rowPostfixSize = 2;
  this->m_headerDivChar = '=';
  this->m_bodyDivChar = '-';
  this->m_columnSeperator = '|';
  this->m_filler = ' ';
  this->m_header.clear();
  this->m_rows.clear();
}

/**
 * @brief Destroy the Tableobject
 *
 */
Table::~Table() {
  this->m_tableWidth = 0;
  this->m_columnWidth = 0;
  this->m_rowPrefixSize = 0;
  this->m_rowPostfixSize = 0;
  this->m_headerDivChar = ' ';
  this->m_bodyDivChar = ' ';
  this->m_columnSeperator = ' ';
  this->m_filler = ' ';
  this->m_header.clear();
  this->m_rows.clear();
}

/**
 * @brief Added the table header
 *
 * @param t_columns the table header columns
 */
void Table::addHeader(Column t_columns[]) {

  int columnLen = sizeof(*t_columns) / sizeof(Column);

  for (int i = 0; i < columnLen; i++) {
    this->m_header.addColumn(t_columns[i]);
  }

  return;
}

/**
 * @brief Adds a row to the table
 *
 * @param t_row the row to add to the table
 */
void Table::addRow(Row t_row) {
  this->m_rows.push_back(t_row);
  return;
}

/**
 * @brief Creates a row with the specified columns then add the row to the table.
 *
 * @param t_columns
 */
void Table::addRow(Column t_columns[]) {

  int columnLen = sizeof(*t_columns) / sizeof(Column);
  Row r;

  for (int i = 0; i < columnLen; ++i) {
    r.addColumn(t_columns[i]);
  }

  return;
}

/**
 * @brief Display the formatted table
 *
 */
void Table::display() {
  this->printDiv(false);
  this->printHeader();
  this->printDiv(false);
  this->printBody();
  this->printDiv(false);
}

/**
 * @brief Removes all rows from the table.
 *
 */
void Table::clear() {
  this->m_rows.clear();
}

/**
 * @brief Print the table row dividers
 *
 * @param t_header true is the current row is a header row else false.
 */
void Table::printDiv(bool header) {
  if (header) {
    cout << left << setw(this->m_tableWidth) << setfill(this->m_headerDivChar) << this->m_headerDivChar << endl;
  } else {
    cout << left << setw(this->m_tableWidth) << setfill(this->m_bodyDivChar) << this->m_bodyDivChar << endl;
  }

  return;
}

/**
 * @brief Prints the current row
 *
 * @param t_header  true is the current row is a header row else false.
 * @param t_row the row to print.
 */
void Table::printRow(bool t_header, Row t_row) {
  Column column;
  cout << left << setw(2) << setfill(' ') << this->m_columnSeperator;

  for (int i = 0; i < t_row.getLength(); ++i) {
    column = t_row.getColumn(i);
    cout << left << setw(this->m_columnWidth) << setfill(this->m_filler) << column.getValue();

    if (i < (t_row.getLength() - 1)) {
      cout << left << setw(2) << setfill(' ') << this->m_columnSeperator;
    }
  }

  cout << right << setw(3) << setfill(' ') << this->m_columnSeperator;
  cout << endl;

  return;
}

/**
 * @brief Prints the header row.
 *
 */
void Table::printHeader() {

  this->printRow(true, this->m_header);
}

/**
 * @brief Prints the table body.
 *
 */
void Table::printBody() {
  for (Row row : this->m_rows) {
    this->printRow(false, row);
  }
}
#include <cstdlib>
#include <iostream>
#include <string>

#include "Animal.h"
#include "Serializer.h"
#include "Serializer.h"
#include "ZooKeeper.h"

using namespace std;

// The filename
const string filename = "zoodata.txt";

void GenerateData() //DO NOT TOUCH CODE IN THIS METHOD
{
  // Do nothing
}

/**
 * @brief Adds an animal to the vector
 * 
 * @param t_zooKeeper The zookeeper object
 * @param t_serializer The serializer object
 * @param t_animals The vector of animals
 */
void AddAnimal(ZooKeeper t_zooKeeper, Serializer t_serializer, vector<Animal *> *t_animals)
{

  Animal *animal = t_zooKeeper.collectAnimalData(t_serializer);

  if (!t_serializer.contains(t_animals, animal))
  {
    t_animals->push_back(animal);
  }

  t_zooKeeper.displayContinueMenu();
}

/**
 * @brief Deletes an animal from the vector
 * 
 * @param t_zooKeeper The zookeeper object
 * @param t_serializer The serializer object
 * @param t_animals The vector of animals
 */
void RemoveAnimal(ZooKeeper t_zooKeeper, Serializer t_serializer, vector<Animal *> *t_animals)
{
  // Display the animals in the vector
  t_zooKeeper.displayAnimals(*t_animals);

  // Display the screen to delete an animal
  t_zooKeeper.deleteAnimalData(*t_animals);

  // Display the continue screen
  t_zooKeeper.displayContinueMenu();
}

/**
 * @brief Load the animal data from file.
 * 
 * @param t_zooKeeper The zookeeper object
 * @param t_serializer The serializer object
 * @param t_animals The vector of animals
 */
void LoadDataFromFile(ZooKeeper t_zooKeeper, Serializer t_serializer, vector<Animal *> *t_animals)
{

  t_serializer.read(filename, t_animals);
  cout << "Data loaded successfully." << endl;
  t_zooKeeper.displayContinueMenu();
  return;
}

/**
 * @brief Saves the animal data to a file
 * 
 * @param t_zooKeeper The zookeeper object
 * @param t_serializer The serializer object
 * @param t_animals The vector of animals
 */
void SaveDataToFile(ZooKeeper t_zooKeeper, Serializer t_serializer, vector<Animal *> *t_animals)
{
  t_serializer.write(filename, *t_animals);
  cout << "Data written successfully." << endl;
  t_zooKeeper.displayContinueMenu();
  return;
}
/**
 * @brief Prints the animal data to the screen
 * 
 * @param t_zooKeeper The zookeeper object
 * @param t_serializer The serializer object
 * @param t_animals The vector of animals
 */
void PrintAnimals(ZooKeeper t_zooKeeper, Serializer t_serializer, vector<Animal *> *t_animals)
{

  // Display the animals in the vector
  t_zooKeeper.displayAnimals(*t_animals);

  // Display the continue screen
  t_zooKeeper.displayContinueMenu();
}

/**
 * @brief Display the main menu
 * 
 */
void DisplayMenu()
{

  int input = 0;
  vector<Animal *> animals;
  ZooKeeper *zooKeeper = new ZooKeeper();
  Serializer *serializer = new Serializer();

  do
  {

    input = zooKeeper->displayMainMenu();
    if (input == 1)
    {
      LoadDataFromFile(*zooKeeper, *serializer, &animals);
    }
    else if (input == 2)
    {
      GenerateData();
      LoadDataFromFile(*zooKeeper, *serializer, &animals);
    }
    else if (input == 3)
    {
      PrintAnimals(*zooKeeper, *serializer, &animals);
    }
    else if (input == 4)
    {
      AddAnimal(*zooKeeper, *serializer, &animals);
    }
    else if (input == 5)
    {
      RemoveAnimal(*zooKeeper, *serializer, &animals);
    }
    else if (input == 6)
    {
      SaveDataToFile(*zooKeeper, *serializer, &animals);
    }

  } while (input != 7);

  zooKeeper->displayExitScreen();

  delete zooKeeper;
  delete serializer;
}

/**
 * @brief The application main entry point.
 * 
 * @return int 
 */
int main()
{
  DisplayMenu();
  //GenerateData();
  return 1;
}
/**
 * @file Whale.h
 * @author Winston Spencer
 * @brief  The Whale class implementation
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Whale.h"

/**
 * @brief Construct a new Whale object
 * 
 */
Whale::Whale() :
    Mammal() {
  this->setType("Whale");
  this->setParentType("Mammal");
}


/**
 * @brief Destroy the Whale object
 * 
 */
Whale::~Whale() {
  // TODO Auto-generated destructor stub
}

/**
 * @file Menu.h
 * @author Winston Spencer
 * @brief The ZooKeeper Class Implementation
 * @version 0.1
 * @date 2021-02-02
 *
 * @copyright Copyright (c) 2021
 *
 */

// Include class dependencies
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
#include <iostream>
#include <exception>

#include "ZooKeeper.h"
#include "Table.h"
#include "Formatter.h"
#include "Mammal.h"
#include "Oviparous.h"

// Use the standard namespance (std)
using namespace std;

/**
 * @brief Collects the user input and converts it to a int
 *
 * @param t_userPrompt The message prompt for the user
 * @param t_value The user input value
 *
 */
void ZooKeeper::collectUserInput(string t_userPrompt, int &t_value)
{
  // Create the user input.
  string userInput;

  try
  {

    // Get the user input within the trycatch
    this->collectUserInput(t_userPrompt, userInput);

    // Convert the user input to an int.
    t_value = stoi(userInput);
  }
  catch (exception &e)
  {
    t_value = 0;
    cout << "Error converting [" + userInput + "] to int.  " << e.what() << endl;
  }
}

/**
 * @brief Collects the user input as a string
 *
 * @param t_userPrompt The message prompt for the user
 * @param t_value The user input value
 *
 */
void ZooKeeper::collectUserInput(string t_userPrompt, string &t_value)
{

  try
  {
    cout << t_userPrompt;

    // Get the user input within the trycatch
    getline(cin, t_value);
  }
  catch (exception &e)
  {
    cout << "Error collecting user input.  " << e.what() << endl;
  }
}

/**
 * @brief Removed an animal from the specified vector
 * 
 * @param t_animals The vector container all animals 
 * @return true if successful else false.
 */
void ZooKeeper::deleteAnimalData(vector<Animal *> &t_animals)
{

  // Declare and initialize the variables to be used in the method
  int trackNum;
  bool deleted = false;

  cout << "*************************************************************" << endl;
  cout << "**                The Wildlife Zoo App (Delete Animal)     **" << endl;
  cout << "*************************************************************" << endl;
  this->collectUserInput("Enter a Tracking Number #: ", trackNum);
  cout << "*************************************************************" << endl;

  if (0 < t_animals.size())
  {
    for (unsigned int i = 0; i < t_animals.size(); i++)
    {
      if (t_animals.at(i)->getTrackNum() == trackNum)
      {
        t_animals.erase(t_animals.begin() + i);
        i = t_animals.size();
        deleted = true;
      }
    }
  }

  if (deleted)
  {
    cout << "Animal [" << trackNum << "] deleted." << endl;
  }
  else
  {
    cout << "Animal [" << trackNum << "] was not found." << endl;
  }
  return;
}

/**
 * @brief Collect the Animal Data from the user.
 *
 * @param t_serializer The deserialer used to create the Animal object
 *
 * @return Animal the data collected by the user
 */
Animal *ZooKeeper::collectAnimalData(Serializer t_serializer)
{

  // Declare and initialize the variables to be used in the method
  int nursing;
  int eggs;
  int trackNum;
  string name;
  string subType;
  Animal *animal = nullptr;

  cout << "*************************************************************" << endl;
  cout << "**                The Wildlife Zoo App                     **" << endl;
  cout << "*************************************************************" << endl;
  this->collectUserInput("Track #: ", trackNum);
  cout << endl;
  this->collectUserInput("Name: ", name);
  cout << endl;
  this->collectUserInput("Sub Type: ", subType);
  cout << endl;
  this->collectUserInput("Number of Eggs: ", eggs);
  cout << endl;
  this->collectUserInput("Nursing (1 = Yes, 0 = No): ", nursing);
  cout << endl;
  cout << "*************************************************************" << endl;

  animal = t_serializer.read(trackNum, name, subType, eggs, nursing);
  return animal;
}

/**
 * @brief Displays the main menu
 *
 * @return int The menu option selected by the user
 */
int ZooKeeper::displayMainMenu()
{
  // Declare and initialize the user option.
  int menuOption = 0;

  // Create the user input.
  string userInput;

  cout << "*************************************************************" << endl;
  cout << "**                The Wildlife Zoo App                     **" << endl;
  cout << "*************************************************************" << endl;
  cout << "** 1 - Load Animal Data                                    **" << endl;
  cout << "** 2 - Generate Data                                       **" << endl;
  cout << "** 3 - Display Animal Data.                                **" << endl;
  cout << "** 4 - Add Record.                                         **" << endl;
  cout << "** 5 - Delete record.                                      **" << endl;
  cout << "** 6 - Save Animal Data.                                   **" << endl;
  cout << "** 7 - Exit                                                **" << endl;
  cout << "*************************************************************" << endl;
  cout << "User Selection: ";

  try
  {

    // Get the user input within the trycatch
    getline(cin, userInput);

    // Place a new line after the user input.
    cout << endl;

    // Validate and parse the user input.
    if (userInput.size() == 1 && isdigit(userInput.at(0)))
    {
      // substracting the asci value from 48 gives you the value entered by the user.
      menuOption = userInput.at(0) - 48;
    }
    else
    {
      cout << "Invalid user input input: [" << userInput << "]." << endl;
    }
  }
  catch (exception &e)
  {
    cout << "Unrecognized user input." << endl;
  }

  cout << "*************************************************************" << endl;
  return menuOption;
}

/**
 * @brief Display all Animals.
 *
 * @param The vector of t_animals to display
 */
void ZooKeeper::displayAnimals(vector<Animal *> &t_animals)
{

  // Declare and initialize function variables
  int numberOfEggs = 0;
  int nurseing = 0;
  Table table;

  try
  {

    table.addHeader(new Column("TRACK #"));
    table.addHeader(new Column("NAME"));
    table.addHeader(new Column("TYPE"));
    table.addHeader(new Column("SUB-TYPE"));
    table.addHeader(new Column("EGGS"));
    table.addHeader(new Column("NURSE"));

    for (Animal *a : t_animals)
    {

      if (dynamic_cast<Mammal *>(a) != nullptr)
      {
        nurseing = dynamic_cast<Mammal *>(a)->isNursing();
      }
      else
      {
        numberOfEggs = dynamic_cast<Oviparous *>(a)->getNumberOfEggs();
      }

      // Create a new row
      Row row;

      // Add the tracking number to the row
      row.addColumn(Column(a->getTrackNum()));

      // Add the name to the row
      row.addColumn(a->getName());

      // Add the animal sub-type (which is the class name) to the row
      row.addColumn(a->getParentType());

      // Add the animal type to the row
      row.addColumn(a->getType());

      // Add the number of eggs to the row
      row.addColumn(numberOfEggs);

      // Add if the animal is nursing or not to the row
      row.addColumn(nurseing);

      // Add the row to the table
      table.addRow(row);
    }

    // Display the table
    table.display();
  }
  catch (exception &e)
  {
    cout << "Error printing our monthly investment report." << e.what() << endl;
  }

  return;
}

/**
 * @brief Display the continue menu.
 *
 */
void ZooKeeper::displayContinueMenu()
{

  // Declare the user input variable.
  string userInput;

  cout << " Please press any key to continue: " << endl;

  // Get the user input within the try
  getline(cin, userInput);
}

/**
 * @brief Display the exit screen
 *
 */
void ZooKeeper::displayExitScreen()
{
  cout << "Goodbye!" << endl;
}
