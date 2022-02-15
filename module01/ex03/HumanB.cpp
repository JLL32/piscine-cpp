//
// Created by Abdeljalil El hachimi on 2/14/22.
//

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

void HumanB::setWeapon(Weapon &weapon) { this->weapon = &weapon; }

void HumanB::attack() {
  std::cout << this->name << " attacks with their " << this->weapon->getType()
            << std::endl;
}
