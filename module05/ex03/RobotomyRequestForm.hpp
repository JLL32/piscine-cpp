//
// Created by jll32 on 27/2/2022.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"


class RobotomyRequestForm : public AForm {
public:
    RobotomyRequestForm();

    RobotomyRequestForm(const RobotomyRequestForm &copy);

    RobotomyRequestForm(const std::string &target);

    virtual ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

    void execute(const Bureaucrat &executor) const throw(GradeTooLowException, NotSignedException);

private:
    std::string _target;
};

#endif //EX02_ROBOTOMYREQUESTFORM_HPP
