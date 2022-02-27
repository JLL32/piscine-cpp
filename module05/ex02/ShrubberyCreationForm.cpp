//
// Created by jll32 on 27/2/2022.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(), _target("") {
    std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy),
                                                                                  _target(copy._target) {
    std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form",
                                                                                145,
                                                                                137),
                                                                          _target(target) {
    std::cout << "ShrubberyCreationForm Init Constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm Destructor" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
    this->AForm::operator=(rhs);
    this->_target = rhs._target;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const throw(GradeTooLowException, NotSignedException) {
    /*
     * NOTE: I could've not caught the exception here
     * because it's caught in Bureaucrat::executeForm
     * after all, however I wanted to demonstrate the
     * concept of exception rethrowing
     */
    try {
        canBeExecuted(executor);
    } catch (std::exception &e) {
        throw;
    }
    std::cout << "Do Something" << std::endl;
}
