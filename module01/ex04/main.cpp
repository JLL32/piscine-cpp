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
    if (input.peek() == std::ifstream::traits_type::eof()) {
        std::cerr << "File is empty" << std::endl;
        return 1;
    }

    std::ofstream output(std::string(argv[1]) + ".replace");
    if (!output.is_open()) {
        std::cerr << "Unable to open file" << std::endl;
        return 1;
    }

    const std::string str1 = argv[2];
    const std::string str2 = argv[3];
    if (str1.empty() || str2.empty()) {
        std::cerr << "Empty Arg" << std::endl;
        return 1;
    }


    for (std::string line; getline(input, line);) {
        for (;;) {
            const size_t index = line.find(str1);
            if (index == std::string::npos)
                break;
            line = line.insert(index, str2).erase(index + str2.length(), str1.length());
        }
        output << line << std::endl;
    }

    output.close();
    input.close();

    return 0;
}
