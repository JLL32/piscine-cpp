//
// Created by Abdeljalil El hachimi on 2/11/22.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "string"

class Zombie {
public:
  Zombie(const std::string &name);

  ~Zombie();

  void announce(void);

private:
  std::string _name;
};

#endif // ZOMBIE_HPP
