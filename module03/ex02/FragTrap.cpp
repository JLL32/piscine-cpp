//
// Created by jll32 on 26/2/2022.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap Default Constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) {
    *this = copy;
    std::cout << "FragTrap Copy Constructor" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "FragTrap Constructor - name" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &operand) {
    this->ClapTrap::operator=(operand);
    return (*this);
}

void FragTrap::attack(const std::string &target) {
    if (_energy_points <= 0 || _hit_points <= 0) {
        std::cout << "FragTrap " << _name << " can't do anything" << std::endl;
        return;
    }
    std::cout << "🗡 " << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage
              << " points of damage!" << std::endl;
    this->_energy_points--;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "Hight Five Guys 🙌!" << std::endl;
}
