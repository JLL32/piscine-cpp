#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    Bureaucrat bob("Bob", 46);
    std::cout << bob << std::endl;

    AForm *shrubbery = Intern::makeForm("Shrubbery Creation Form", "Garden");
    std::cout << *shrubbery << std::endl;

    AForm *robotomy = Intern::makeForm("Robotomy Request Form", "Student");
    std::cout << *robotomy << std::endl;

    AForm *presidential = Intern::makeForm("Presidential Pardon Form", "Traitor");
    std::cout << *presidential << std::endl;

    try {
        AForm *fake = Intern::makeForm("Fake Form", "Fraud");
        (void) fake;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    bob.signForm(*shrubbery);
    bob.executeForm(*shrubbery);

    bob.signForm(*robotomy);
    bob.executeForm(*robotomy);

    bob.signForm(*presidential);
    bob.executeForm(*presidential);

    delete shrubbery;
    delete robotomy;
    delete presidential;

    return 0;
}
