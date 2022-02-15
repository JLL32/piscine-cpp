//
// Created by Abdeljalil El hachimi on 2/15/22.
//

#include "Karen.hpp"
#include <iostream>

typedef void (Karen::*levelptr)();

int level_toindex(std::string level) {
  const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  int i = 0;
  for (; i != 4 && level.compare(levels[i]) != 0; i++)
    ;
  std::cout << i << std::endl;
  return i;
}

void Karen::complain(std::string level) {
  levelptr ptr[] = {
      &Karen::debug, &Karen::info,    &Karen::warning,
      &Karen::error, &Karen::nothing,
  };
  int index = level_toindex(level);
  (this->*ptr[index])();
}

void Karen::debug(void) {
  std::cout << "I love to get extra bacon for my "
               "7XL-double-cheese-triple-pickle-special-ketchup burger. I just "
               "love it!"
            << std::endl;
}

void Karen::info(void) {
  std::cout
      << "I cannot believe adding extra bacon cost more money. You don’t pu"
         "t enough! If you did I would not have to ask for it!"
      << std::endl;
}

void Karen::warning(void) {
  std::cout
      << "I think I deserve to have some extra bacon for free. I’ve been co"
         "ming here for years and you just started working here last month."
      << std::endl;
}

void Karen::error(void) {
  std::cout << "This is unacceptable, I want to speak to the manager now."
            << std::endl;
}

void Karen::nothing(void) { std::cout << "Wrong Input" << std::endl; }
