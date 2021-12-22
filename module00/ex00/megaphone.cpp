#include <cctype>
#include <iostream>
#include <string>
#include <sys/_types/_size_t.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
  }
  for (int i = 1; i < argc; i++) {
    const std::string current_string(argv[i]);
    for (size_t j = 0; j < current_string.length(); j++)
      std::cout << (char)toupper(current_string[j]);
  }
  std::cout << std::endl;
  return 0;
}
