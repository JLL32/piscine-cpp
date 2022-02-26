#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int main() {
    Bureaucrat bob("Bob", 150);

    try {
        bob.decrementGrade();
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        std::cout << "hello" << std::endl;
    }

  return 0;
}
