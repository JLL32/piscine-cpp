//
// Created by jll32 on 27/2/2022.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm {
public:
    ShrubberyCreationForm();

    ShrubberyCreationForm(const ShrubberyCreationForm &copy);

    ShrubberyCreationForm(const std::string &target);

    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

    void execute(const Bureaucrat &executor) const throw(GradeTooLowException, NotSignedException);

private:
    std::string _target;
};

#endif //EX02_SHRUBBERYCREATIONFORM_HPP
