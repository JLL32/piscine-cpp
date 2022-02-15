//
// Created by Abdeljalil El hachimi on 2/14/22.
//

#ifndef PISCINE_CPP_HUMANB_HPP
#define PISCINE_CPP_HUMANB_HPP

#include "Weapon.hpp"
#include <string>
class HumanB {

public:
  HumanB(std::string name);
  void setWeapon(Weapon &weapon);
  void attack();

private:
  std::string name;
  Weapon *weapon;
};

#endif // PISCINE_CPP_HUMANB_HPP
