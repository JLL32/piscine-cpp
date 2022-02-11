//
// Created by Abdeljalil El hachimi on 2/11/22.
//

#include "Zombie.hpp"
#include "iostream"
#include "string"

Zombie::Zombie(const std::string &name) : _name(name) {}

Zombie::~Zombie() {
  std::cout << this->_name << ": has been killed" << std::endl;
}

void Zombie::announce(void) {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
