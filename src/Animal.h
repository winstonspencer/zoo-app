/*
 * Animal.h
 *
 *  Created on: Feb 19, 2021
 *      Author: 1350703_snhu
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>

class Animal {

private:
  std::string m_type;
  std::string m_parentType;
  std::string m_name;
  int m_trackNum;

protected:

  void setType(std::string t_type);
  void setParentType(std::string t_parentType);

public:
  Animal();
  Animal(std::string t_type, std::string p_parentType);
  virtual ~Animal();
  std::string getType();
  std::string getParentType();
  std::string getName();
  int getTrackNum();
  void setName(std::string t_name);
  void setTrackNum(int t_trackNum);
};

#endif /* ANIMAL_H_ */
