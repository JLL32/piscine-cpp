//
// Created by Abdeljalil El hachimi on 2/26/22.
//

#ifndef EX01_BUREAUCRAT_HPP
#define EX01_BUREAUCRAT_HPP

#include <string>
#include <iostream>

class AForm;

class Bureaucrat {
public:
    Bureaucrat();

    Bureaucrat(const Bureaucrat &copy);

    Bureaucrat(const std::string &name,
               int grade) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException);

    virtual ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &rhs);

    std::string getName() const;

    int getGrade() const;

    void incrementGrade() throw(Bureaucrat::GradeTooHighException);

    void decrementGrade() throw(Bureaucrat::GradeTooLowException);

    void signForm(AForm &sign) const;

    void executeForm(AForm const & form) const;

    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw();
    };

private:
    const std::string _name;
    int _grade;
};

std::ostream &operator<<(std::ostream &s, const Bureaucrat &bureaucrat);

#endif //EX01_BUREAUCRAT_HPP
