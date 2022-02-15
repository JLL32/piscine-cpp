//
// Created by Abdeljalil El hachimi on 2/14/22.
//

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

void HumanA::attack() {
  std::cout << this->name << " attacks with their " << this->weapon.getType()
            << std::endl;
}
