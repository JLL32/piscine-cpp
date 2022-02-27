//
// Created by jll32 on 27/2/2022.
//

#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern Default Constructor" << std::endl;
}

Intern::Intern(const Intern &copy) {
    std::cout << "Intern Copy Constructor" << std::endl;
    *this = copy;
}

Intern &Intern::operator=(const Intern &copy) {
    (void) copy;
    return *this;
}

AForm *Intern::makeShrubbery(const std::string &form, const std::string &target) {
    std::cout << "Intern creates " << form << std::endl;
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomy(const std::string &form, const std::string &target) {
    std::cout << "Intern creates " << form << std::endl;
    return new RobotomyRequestForm(target);
}

AForm *Intern::makePresidential(const std::string &form, const std::string &target) {
    std::cout << "Intern creates " << form << std::endl;
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string &form, const std::string &target) {
    AForm *(*formFunc)(const std::string &, const std::string &) = nullptr;

    (form == "Shrubbery Creation Form") THEN (formFunc = &Intern::makeShrubbery);
    (form == "Robotomy Request Form") THEN (formFunc = &Intern::makeRobotomy);
    (form == "Presidential Pardon Form") THEN (formFunc = &Intern::makePresidential);

    if (formFunc == nullptr)
        throw UnKnownFormException();

    return formFunc(form, target);
}

Intern::~Intern() {
    std::cout << "Intern Destructor" << std::endl;
}

const char *Intern::UnKnownFormException::what() const throw() {
    return "Unknown Form Name!";
}