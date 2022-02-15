//
// Created by Abdeljalil El hachimi on 2/14/22.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

void Weapon::setType(const std::string type) { this->type = type; }
const std::string Weapon::getType() const { return this->type; }
