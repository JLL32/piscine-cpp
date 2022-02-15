#include "Karen.hpp"
#include <iostream>

enum {
  DEBUG,
  INFO,
  WARNING,
  ERROR,
};

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Invalid ARG" << std::endl;
    return 1;
  }

  Karen karen;
  switch (Karen::level_to_index(argv[1])) {
  case DEBUG:
    karen.complain("DEBUG");
  case INFO:
    karen.complain("INFO");
  case WARNING:
    karen.complain("WARNING");
  case ERROR:
    karen.complain("ERROR");
    break;
  default:
    std::cout << "Invalid Level" << std::endl;
  }
  return 0;
}
