#include <iostream>
#include "StringConverter.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <string>" << std::endl;
        return 1;
    }
    StringConverter converter(argv[1]);
    converter.convert();
    return 0;
}