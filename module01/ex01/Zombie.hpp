//
// Created by Abdeljalil El hachimi on 2/11/22.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "string"

class Zombie {
public:
  Zombie();
  Zombie(const std::string &name);

  ~Zombie();

  void announce(void);
  void set_name(std::string name);

private:
  std::string _name;
};

#endif // ZOMBIE_HPP
