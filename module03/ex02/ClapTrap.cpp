//
// Created by jll32 on 25/2/2022.
//

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "ClapTrap Default Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
    *this = copy;
    std::cout << "ClapTrap Copy Constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "ClapTrap Constructor - name" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &operand) {
    this->_name = operand._name;
    this->_hit_points = operand._hit_points;
    this->_energy_points = operand._energy_points;
    this->_attack_damage = operand._attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string &target) {
    if (_energy_points <= 0 || _hit_points <= 0) {
        std::cout << "ClapTrap " << _name << " can't do anything" << std::endl;
        return;
    }
    std::cout << "🗡 " << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage
              << " points of damage!" << std::endl;
    this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_energy_points <= 0 || _hit_points <= 0) {
        std::cout << "ClapTrap " << _name << " can't take anymore damage" << std::endl;
        return;
    }
    std::cout << "🤕 " << this->_name << " Took" << amount << " points of damage" << std::endl;
    this->_hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energy_points <= 0 || _hit_points <= 0) {
        std::cout << "ClapTrap " << _name << " can't do anything" << std::endl;
        return;
    }
    std::cout << "❤️🩹 " << this->_name << " Has been healed for " << amount << " points" << std::endl;
    this->_hit_points += amount;
    this->_energy_points--;
}

