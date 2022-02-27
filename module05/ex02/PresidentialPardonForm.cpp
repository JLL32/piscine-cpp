//
// Created by jll32 on 27/2/2022.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(), _target("") {
    std::cout << "PresidentialPardonForm Default Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy),
                                                                                     _target(copy._target) {
    std::cout << "PresidentialPardonForm Copy Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon Form",
                                                                                  25,
                                                                                  5),
                                                                            _target(target) {
    std::cout << "PresidentialPardonForm Init Constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm Destructor" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    this->AForm::operator=(rhs);
    this->_target = rhs._target;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const throw(GradeTooLowException, NotSignedException) {
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
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
