//
// Created by Abdeljalil El hachimi on 2/11/22.
//
#include <iostream>

int main() {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "address of string        : " << &str << std::endl;
  std::cout << "address held by stringPTR: " << stringPTR << std::endl;
  std::cout << "address held by stringREF: " << &stringREF << std::endl;
  std::cout << std::endl;
  std::cout << "value of string           : " << str << std::endl;
  std::cout << "value pointed by stringPTR: " << *stringPTR << std::endl;
  std::cout << "value pointed by stringREF: " << stringREF << std::endl;
}
