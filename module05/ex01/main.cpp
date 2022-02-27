#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    Bureaucrat bob("Bob", 150);

    std::cout << bob << std::endl;

    Form agreement("Agreement", 30, 40);

    bob.signForm(agreement);

    std::cout << agreement << std::endl;
    return 0;
}
