//
// Created by Abdeljalil El hachimi on 2/11/22.
//

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void) {
  randomChump("3abbas");
  Zombie *zombie = newZombie("Fati7a");
  delete zombie;
  return 0;
}
