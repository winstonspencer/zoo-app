/*
 * Animal.h
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>

class Animal
{

private:
  /**
   * @brief The object type member variable
   * 
   */
  std::string m_type;

  /**
   * @brief The object parent type member variable
   * 
   */
  std::string m_parentType;

  /**
   * @brief The object name member variable
   * 
   */
  std::string m_name;

  /**
   * @brief The object tracking number member variable
   * 
   */
  int m_trackNum;

protected:
  /**
   * @brief Set the object Type 
   * 
   * @param t_type  the object Type 
   */
  void setType(std::string t_type);

  /**
   * @brief Set the object Parent Type
   * 
   * @param t_parentType the object Parent Type
   */
  void setParentType(std::string t_parentType);

public:
  /**
   * @brief Construct a new Animal object
   * 
   */
  Animal();

  /**
   * @brief Destroy the Animal object
   * 
   */
  virtual ~Animal();

  /**
   * @brief Get the object Type 
   * 
   * @return std::string the object type
   */
  std::string getType();

  /**
   * @brief Get the Parent object Type 
   * 
   * @return std::string the Parent object Type 
   */
  std::string getParentType();

  /**
   * @brief Get the object Name
   * 
   * @return std::string 
   */
  std::string getName();

  /**
   * @brief Get the object Track Num
   * 
   * @return int the object Track Num
   */
  int getTrackNum();

  /**
   * @brief Set the object Name
   * 
   * @param t_name the object Name
   */
  void setName(std::string t_name);

  /**
   * @brief Set the object Track Num 
   * 
   * @param t_trackNum the object Track Num
   */
  void setTrackNum(int t_trackNum);
};

#endif /* ANIMAL_H_ */
/**
 * @file Bat.h
 * @author Winston Spencer
 * @brief The Bat class definition
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef BAT_H_
#define BAT_H_

#include "Mammal.h"

class Bat: public Mammal {

public:
  /**
   * @brief Construct a new Bat object
   * 
   */
	Bat();

  /**
   * @brief Destroy the Bat object
   * 
   */
	virtual ~Bat();
};

#endif /* BAT_H_ */
/**
 * @file Column.h
 * @author Winston Spencer
 * @brief The Generic Table Column Definition
 * @version 0.1
 * @date 2021-02-02
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef THE_ZOO_SRC_COLUMN_H_
#define THE_ZOO_SRC_COLUMN_H_

#include <string>

// Use the standard namespance (std)
using namespace std;

/**
 * @brief The class Column used to display data in table format.
 *
 */
class Column
{

  /**
   * @brief The Column class encapsulated class members and methods
   *
   */
private:
  string m_value;

public:
  /**
   * @brief Construct a new Column object
   */
  Column();

  /**
   * @brief Construct a new Column object
   *
   * @param t_value  the column int value
   */
  Column(int t_value);

  /**
   * @brief Construct a new Column object
   *
   * @param t_value  the column double value
   */
  Column(double t_value);

  /**
   * @brief Construct a new Column object
   *
   * @param t_value  the column string value
   */
  Column(string t_value);

  /**
   * @brief Destroy the Column object.
   *
   */
  ~Column();

  /**
   * @brief Set the column int value
   *
   * @param t_value
   */
  void setValue(int t_value);

  /**
   * @brief Set the column double value
   *
   * @param t_value
   */
  void setValue(double t_value);

  /**
   * @brief Set the column string value
   *
   * @param t_value
   */
  void setValue(string t_value);

  /**
   * @brief Get the column value
   *
   * @return string the column value
   */
  string getValue();
};

#endif
/**
 * @file Crocodile.h
 * @author Winston Spencer
 * @brief 
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef CROCODILE_H_
#define CROCODILE_H_

#include "Oviparous.h"

class Crocodile : public Oviparous
{
public:
  /**
   * @brief Construct a new Crocodile object
   * 
   */
  Crocodile();

  /**
   * @brief Destroy the Crocodile object
   * 
   */
  virtual ~Crocodile();
};

#endif /* CROCODILE_H_ */
/**
 * @file Formatter.h
 * @author Winston Spencer
 * @brief The Airgead Banking Application Formatter
 * @version 0.1
 * @date 2021-02-02
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef THE_ZOO_SRC_FORMATTER_H_
#define THE_ZOO_SRC_FORMATTER_H_

// Include class dependencies
#include <sstream>
#include <iomanip>
#include "Column.h"

// Use the standard namespance (std)
using namespace std;


const string toString(double t_value)
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
  return streamObj.str();
}


#endif
/**
 * @file Goose.h
 * @author Winston Spencer
 * @brief The Goose class definition
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef GOOSE_H_
#define GOOSE_H_

#include "Oviparous.h"

class Goose : public Oviparous
{
public:
  /**
   * @brief Construct a new Goose object
   * 
   */
  Goose();

  /**
   * @brief Destroy the Goose object
   * 
   */
  virtual ~Goose();
};

#endif /* GOOSE_H_ */
/**
 * @file Mammal.cpp
 * @author Winston Spencer
 * @brief The Mammel class implementation
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef MAMMAL_H_
#define MAMMAL_H_

#include "Animal.h"

class Mammal : public Animal
{

private:
  /**
   * @brief The nuring class member
   * 
   */
  int m_nursing;

public:
  /**
   * @brief Construct a new Mammal object
   * 
   */
  Mammal();

  /**
   * @brief Destroy the Mammal object
   * 
   */
  virtual ~Mammal();

  /**
   * @brief Returns 1 if the animal is nursing, else return 0
   * 
   * @return int 
   */
  int isNursing();

  /**
   * @brief Set the object Nursing object value
   * 
   * @param t_nursing the object Nursing object value
   */
  void setNursing(int t_nursing);
};

#endif /* MAMMAL_H_ */
/**
 * @file Oviparous.h
 * @author Winston Spencer
 * @brief The Oviparous class definition
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef OVIPAROUS_H_
#define OVIPAROUS_H_

#include "Animal.h"

class Oviparous: public Animal {
private:
  /**
   * @brief The numberof eggs class member
   * 
   */
	int m_numberOfEggs;
public:

  /**
   * @brief Construct a new Oviparous object
   * 
   */
	Oviparous();

  /**
   * @brief Destroy the Oviparous object
   * 
   */
	virtual ~Oviparous();

  /**
   * @brief Get the Number Of Eggs object
   * 
   * @return int 
   */
	int getNumberOfEggs();

  /**
   * @brief Set the Number Of Eggs object
   * 
   * @param t_numberOfEggs 
   */
	void setNumberOfEggs(int t_numberOfEggs);
};

#endif /* OVIPAROUS_H_ */
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
/**
 * @file Row.h
 * @author Winston Spencer
 * @brief The Generic Table Row Definition
 * @version 0.1
 * @date 2021-02-02
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef THE_ZOO_SRC_ROW_H_
#define THE_ZOO_SRC_ROW_H_

#include <vector>
#include "Column.h"

// Use the standard namespance (std)
using namespace std;

/**
 * @brief The class Row used to display data in table format.
 *
 */
class Row
{

  /**
   * @brief The Row class encapsulated class members and methods
   *
   */
private:
  vector<Column> m_columns;

public:

  /**
   * @brief Construct a new Row object
   */
  Row();

  /**
   * @brief Destroy the Row object.
   *
   */
  ~Row();

  /**
   * @brief Adds a column to the row
   *
   * @param t_column the column to add to the row
   */
  void addColumn(Column t_column);

  /**
   * @brief Get the number of columns in the row
   *
   * @return int the number of columns in the row
   */
  int getLength();

  /**
   * @brief Get the i-th Column in the row
   *
   * @param i index of the column to retrieve
   * @return Column the i-th Column in the row
   */
  Column getColumn(int i);

  /**
   * @brief Get all Columns in the row
   *
   * @return vector<Column> the row columns
   */
  Column * getColumns();

  /**
   * @brief Remove all columns in the row
   *
   */
  void clear();
};

#endif
/**
 * @file SeaLion.cpp
 * @author Winston Spencer
 * @brief The SeaLion class definition
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef SEALION_H_
#define SEALION_H_

#include "Mammal.h"

class SeaLion : public Mammal
{

public:
  /**
   * @brief Construct a new Sea Lion object
   * 
   */
  SeaLion();

  /**
   * @brief Destroy the Sea Lion object
   * 
   */
  virtual ~SeaLion();
};

#endif /* SEALION_H_ */
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
/**
 * @file Table.h
 * @author Winston Spencer
 * @brief A Generic Display  Table Definition
 * @version 0.1
 * @date 2021-02-02
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef THE_ZOO_SRC_TABLE_H_
#define THE_ZOO_SRC_TABLE_H_

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include "Column.h"
#include "Row.h"

// Use the standard namespance (std)
using namespace std;

/**
 * @brief The class Table used to display data in table format.
 *
 */
class Table
{

  /**
   * @brief The Table class encapsulated class members and methods
   *
   */
private:
  int m_tableWidth;
  int m_columnWidth;
  int m_rowPrefixSize;
  int m_rowPostfixSize;
  char m_headerDivChar;
  char m_bodyDivChar;
  char m_columnSeperator;
  char m_filler;
  Row m_header;
  vector<Row> m_rows;

  /**
   * @brief Print the table row dividers
   *
   * @param t_header true is the current row is a header row else false.
   */
  void printDiv(bool t_header);

  /**
   * @brief Prints the current row
   *
   * @param t_header  true is the current row is a header row else false.
   * @param t_row the row to print.
   */
  void printRow(bool t_header, Row t_row);

  /**
   * @brief Prints the header row.
   *
   */
  void printHeader();

  /**
   * @brief Prints the table body.
   *
   */
  void printBody();

public:
  /**
   * @brief Construct a new Table object
   */
  Table();

  /**
   * @brief Destroy the Tableobject
   *
   */
  ~Table();

  /**
   * @brief Added the table header
   *
   * @param t_columns the table header columns
   */
  void addHeader(Column t_columns[]);

  /**
   * @brief Adds a row to the table
   *
   * @param t_row the row to add to the table
   */
  void addRow(Row t_row);

  /**
   * @brief Creates a row with the specified columns then add the row to the table.
   *
   * @param t_columns
   */
  void addRow(Column *t_columns);

  /**
   * @brief Display the formatted table
   *
   */
  void display();

  /**
   * @brief Removes all rows from the table.
   *
   */
  void clear();
};

#endif
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
/**
 * @file Whale.h
 * @author Winston Spencer
 * @brief  The Whale class definition
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef WHALE_H_
#define WHALE_H_

#include "Mammal.h"

class Whale: public Mammal {
public:
  /**
   * @brief Construct a new Whale object
   * 
   */
	Whale();

  /**
   * @brief Destroy the Whale object
   * 
   */
	virtual ~Whale();
};

#endif /* WHALE_H_ */
/**
 * @file Display.h
 * @author Winston Spencer
 * @brief The ZooKeeper Class Definition
 * @version 0.1
 * @date 2021-02-19
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef THE_ZOO_SRC_MENU_H_
#define THE_ZOO_SRC_MENU_H_

// Include class dependencies
#include <string>
#include <vector>
#include "Animal.h"
#include "Serializer.h"

// Use the standard namespance (std)
using namespace std;

class ZooKeeper
{

private:
  /**
   * @brief Collects the user input and converts it to a int
   *
   * @param t_userPrompt The message prompt for the user
   * @param t_value The user input value
   *
   */
  void collectUserInput(string t_userPrompt, int &t_value);

  /**
   * @brief Collects the user input as a string
   *
   * @param t_userPrompt The message prompt for the user
   * @param t_value The user input value
   *
   */
  void collectUserInput(string t_userPrompt, string &t_value);

public:
  /**
   * @brief Displays the main menu
   *
   * @return int
   */
  int displayMainMenu();

  /**
   * @brief Display all Animals.
   *
   * @param t_animals The vector of t_animals to display
   */
  void displayAnimals(vector<Animal *> &t_animals);

  /**
   * @brief Collect the Animal Data from the user.
   *
   * @param t_serialzer The deserialer used to create the Animal object
   *
   * @return Animal the data collected by the user
   */
  Animal *collectAnimalData(Serializer t_serialzer);

  /**
   * @brief Removed an animal from the specified vector
   * 
   * @param t_animals The vector container all animals 
   * @return true if successful else false.
   */
  void deleteAnimalData(vector<Animal *> &t_animals);

  /**
   * @brief Display the continue menu.
   *
   */
  void displayContinueMenu();

  /**
   * @brief Display the exit screen
   *
   */
  void displayExitScreen();
};

#endif
