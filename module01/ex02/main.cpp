//
// Created by Abdeljalil El hachimi on 2/11/22.
//
#include <iostream>

int main() {
  std::string string = "HI THIS IS BRAIN";
  std::string *stringPTR = &string;
  std::string &stringREF = string;

  std::cout << "address of string        : " << &string << std::endl;
  std::cout << "address held by stringPTR: " << stringPTR << std::endl;
  std::cout << "address held by stringREF: " << &stringREF << std::endl;
  std::cout << std::endl;
  std::cout << "value of string           : " << string << std::endl;
  std::cout << "value pointed by stringPTR: " << *stringPTR << std::endl;
  std::cout << "value pointed by stringREF: " << stringREF << std::endl;
}
