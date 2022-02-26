//
// Created by jll32 on 26/2/2022.
//

#ifndef EX02_SCAVTRAP_HPP
#define EX02_SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();

    ScavTrap(const ScavTrap &copy);

    ScavTrap(const std::string &name);

    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &operand);

    void attack(const std::string &target);

    void guardGate();
};


#endif //EX02_SCAVTRAP_HPP
