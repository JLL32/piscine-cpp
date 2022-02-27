//
// Created by jll32 on 27/2/2022.
//

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
#define THEN &&

public:
    Intern();

    Intern(const Intern &copy);

    Intern &operator=(const Intern &copy);

    ~Intern();

    static AForm *makeForm(const std::string &form, const std::string &target);

    class UnKnownFormException : public std::exception {
    public:
        const char *what() const throw();
    };

private:
    static AForm *makeShrubbery(const std::string &form, const std::string &target);

    static AForm *makeRobotomy(const std::string &form, const std::string &target);

    static AForm *makePresidential(const std::string &form, const std::string &target);
};

#endif //EX03_INTERN_HPP
