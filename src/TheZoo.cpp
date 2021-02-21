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
