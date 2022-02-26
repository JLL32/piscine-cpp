//
// Created by jll32 on 26/2/2022.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Default Constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {
    *this = copy;
    std::cout << "ScavTrap Copy Constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "ScavTrap Constructor - name" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &operand) {
    this->ClapTrap::operator=(operand);
    return (*this);
}

void ScavTrap::attack(const std::string &target) {
    std::cout << "🗡 " << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage
              << " points of damage!" << std::endl;
    this->_energy_points--;
}

void ScavTrap::guardGate() {
    std::cout << " ScavTrap is now in Gatekeeper mode" << std::endl;
}
