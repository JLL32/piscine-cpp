#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cerr << "Arg Error" << std::endl;
    return 1;
  }

  std::ifstream input(argv[1]);
  if (!input.is_open()) {
    std::cerr << "Unable to open file" << std::endl;
    return 1;
  }

  std::ofstream output(std::string(argv[1]) + ".replace");
  std::cout << "here1";
  const std::string str1 = argv[2];
  const std::string str2 = argv[3];

  for (std::string line; getline(input, line);) {
    std::cout << "here2";
    for (;;) {
      const size_t index = line.find(str1);
      if (index == std::string::npos)
        break;
      line.replace(index, str1.length(), str2);
    }
    output << line << std::endl;
  }

  output.close();
  input.close();

  return 0;
}
