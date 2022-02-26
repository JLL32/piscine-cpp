#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main() {
    FragTrap l3arbi("L3arbi");
    ClapTrap dawya("Dawya");
    l3arbi.attack("Dawya");
    dawya.beRepaired(10);
    l3arbi.highFivesGuys();
    return 0;
}
