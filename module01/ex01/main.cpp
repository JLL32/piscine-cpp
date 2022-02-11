//
// Created by Abdeljalil El hachimi on 2/11/22.
//

#include "Zombie.hpp"
#include <cstddef>

Zombie *zombieHorde(int N, std::string name);
int main(void) {
  const int n = 10;
  Zombie *hord = zombieHorde(n, "3abbas");
  for (int i = 0; i < n; i++) {
    hord[i].announce();
  }
  delete[] hord;
  return 0;
}
