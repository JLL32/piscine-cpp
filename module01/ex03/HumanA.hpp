//
// Created by Abdeljalil El hachimi on 2/14/22.
//

#ifndef PISCINE_CPP_HUMANA_HPP
#define PISCINE_CPP_HUMANA_HPP

#include "Weapon.hpp"
#include <string>
class HumanA {
public:
  HumanA(std::string name, Weapon &weapon);
  void attack();

private:
  std::string name;
  Weapon &weapon;
};

#endif // PISCINE_CPP_HUMANA_HPP
