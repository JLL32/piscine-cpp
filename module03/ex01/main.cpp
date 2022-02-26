#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ScavTrap l3arbi("L3arbi");
    ClapTrap dawya("Dawya");
    l3arbi.attack("Dawya");
    dawya.beRepaired(10);
    return 0;
}
