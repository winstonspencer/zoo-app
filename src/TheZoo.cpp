#include <cstdlib>
#include <iostream>
#include <string>

#include "Deserialzer.h"
#include "Display.h"

using namespace std;

void GenerateData() //DO NOT TOUCH CODE IN THIS METHOD
{
  // Do nothing
}

void AddAnimal(Display t_display, Deserialzer t_deserializer, vector<Animal *> *t_animals)
{

  Animal *animal = t_display.collectAnimalData(t_deserializer);

  if (!t_deserializer.contains(t_animals, animal))
  {
    t_animals->push_back(animal);
  }
}

void RemoveAnimal()
{
  /*
   TODO: Write proper code to remove an animal from your vector (or array. Remmber to re-allocate proper size if using array)
   */
}

vector<Animal *> LoadDataFromFile(Display display, Deserialzer t_deserializer)
{

  string fileName("zoodata.txt");
  vector<Animal *> animals = t_deserializer.read(fileName);
  cout << "Data loaded successfully." << endl;
  display.displayContinueMenu();
  return animals;
}

void SaveDataToFile()
{
  /*
   TODO: Write proper code to store vector/array to file.
   */
}

void DisplayMenu()
{

  int input = 0;
  vector<Animal *> animals;
  Display *display = new Display();
  Deserialzer *deserializer = new Deserialzer();

  do
  {

    input = display->displayMainMenu();
    if (input == 1)
    {
      animals = LoadDataFromFile(*display, *deserializer);
    }
    else if (input == 2)
    {
      GenerateData();
      animals = LoadDataFromFile(*display, *deserializer);
    }
    else if (input == 3)
    {
      display->displayAnimals(animals);
    }
    else if (input == 4)
    {
      AddAnimal(*display, *deserializer, &animals);
    }

  } while (input != 7);

  display->displayExitScreen();

  delete display;
  delete deserializer;
}

int main()
{
  DisplayMenu();
  //GenerateData();
  return 1;
}
