//
// Created by jll32 on 25/2/2022.
//

#ifndef EX01_CLAPTRAP_HPP
#define EX01_CLAPTRAP_HPP

#include <string>

class ClapTrap {
public:
    ClapTrap();

    ClapTrap(const ClapTrap &copy);

    explicit ClapTrap(const std::string &name);

    ~ClapTrap();

    ClapTrap &operator=(const ClapTrap &operand);

    void attack(const std::string &target);

    void takeDamage(unsigned int amount);

    void beRepaired(unsigned int amount);

protected:
    std::string _name;
    unsigned int _hit_points;
    unsigned int _energy_points;
    unsigned int _attack_damage;
};


#endif //EX01_CLAPTRAP_HPP
