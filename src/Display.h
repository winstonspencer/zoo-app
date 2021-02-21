/**
 * @file Display.h
 * @author Winston Spencer
 * @brief The Wildlife Zoom Display Class Definition
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
#include "Deserialzer.h"

// Use the standard namespance (std)
using namespace std;

class Display {

private:
  /**
   * @brief Collects the user input and converts it to a int
   *
   * @param t_userPrompt The message prompt for the user
   * @param t_value The user input value
   *
   */
  void collectUserInput(string t_userPrompt, int* t_value);

  /**
   * @brief Collects the user input as a string
   *
   * @param t_userPrompt The message prompt for the user
   * @param t_value The user input value
   *
   */
  void collectUserInput(string t_userPrompt, string* t_value);

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
  void displayAnimals(vector<Animal*> &t_animals);

  /**
   * @brief Collect the Animal Data from the user.
   *
   * @param t_deserialzer The deserialer used to create the Animal object
   *
   * @return Animal the data collected by the user
   */
  Animal* collectAnimalData(Deserialzer t_deserialzer);

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
