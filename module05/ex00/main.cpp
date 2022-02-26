#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int main() {
    Bureaucrat bob("Bob", 150);

    std::cout << bob << std::endl;

    try {
        bob.decrementGrade();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
