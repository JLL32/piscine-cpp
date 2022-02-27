//
// Created by jll32 on 27/2/2022.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(), _target("") {
    std::cout << "RobotomyRequestForm Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy),
                                                                            _target(copy._target) {
    std::cout << "RobotomyRequestForm Copy Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form",
                                                                            72,
                                                                            45),
                                                                      _target(target) {
    std::cout << "RobotomyRequestForm Init Constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm Destructor" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    this->AForm::operator=(rhs);
    this->_target = rhs._target;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const throw(GradeTooLowException, NotSignedException) {
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
    std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
}
