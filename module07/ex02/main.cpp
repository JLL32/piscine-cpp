#include <iostream>
#include <string>
#include "Array.hpp"

int main() {

    Array<int> a;
    a.size();
    std::cout << "a: " << a << std::endl;


    Array<int> b(3);
    b[0] = 1;
    b[1] = 2;
    b[2] = 3;
    std::cout << "b: " << b << std::endl;

    Array<int> c(b);
    c[0] = 4;
    std::cout << "c: " << c << std::endl;
    std::cout << "b: " << b << std::endl;

    try {
        c[3] = 4;
    } catch (std::out_of_range& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
