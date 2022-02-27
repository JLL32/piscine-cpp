#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat bob("Bob", 46);

    std::cout << bob << std::endl;

    ShrubberyCreationForm shrubbery("Garden");
    std::cout << shrubbery << std::endl;
    RobotomyRequestForm robotomy("Student");
    std::cout << robotomy << std::endl;
    PresidentialPardonForm presidential("Traitor");
    std::cout << presidential << std::endl;

    bob.signForm(shrubbery);
    bob.executeForm(shrubbery);
    bob.executeForm(robotomy);
    bob.signForm(presidential);
    bob.executeForm(presidential);

    std::cout << shrubbery << std::endl;
    return 0;
}
