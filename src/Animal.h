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
