#include "Zombie.hpp"
#include <string.h>

Zombie *newZombie(std::string name) { return new Zombie(name); }
