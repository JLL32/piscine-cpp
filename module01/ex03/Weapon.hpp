//
// Created by Abdeljalil El hachimi on 2/14/22.
//

#ifndef PISCINE_CPP_WEAPON_HPP
#define PISCINE_CPP_WEAPON_HPP

#include <string>

class Weapon {
public:
  Weapon(const std::string &type);
  void setType(const std::string &type);
  const std::string &getType() const;

private:
  std::string type;
};

#endif // PISCINE_CPP_WEAPON_HPP
