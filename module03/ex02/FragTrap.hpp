//
// Created by jll32 on 26/2/2022.
//

#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap();

    FragTrap(const FragTrap &copy);

    FragTrap(const std::string &name);

    ~FragTrap();

    FragTrap &operator=(const FragTrap &operand);

    void attack(const std::string &target);

    void highFivesGuys(void);
};


#endif //EX02_FRAGTRAP_HPP
