#include <cctype>
#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
  std::vector<int> v;
  v.push_back(42);
  v.push_back(43);
  v.push_back(44);
  v.push_back(45);

  std::cout << (easyFind(v, 42) ? "Found" : "Not found") << std::endl;

  try {
    easyFind(v, 41);
  } catch (std::exception &e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }

  return 0;
}
