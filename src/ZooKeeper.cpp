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
