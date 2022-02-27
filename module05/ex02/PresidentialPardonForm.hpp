//
// Created by jll32 on 27/2/2022.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"


class PresidentialPardonForm : public AForm {
public:
    PresidentialPardonForm();

    PresidentialPardonForm(const PresidentialPardonForm &copy);

    PresidentialPardonForm(const std::string &target);

    virtual ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

    void execute(const Bureaucrat &executor) const throw(GradeTooLowException, NotSignedException);

private:
    std::string _target;
};


#endif //EX02_PRESIDENTIALPARDONFORM_HPP
