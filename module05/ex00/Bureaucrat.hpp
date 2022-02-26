//
// Created by Abdeljalil El hachimi on 2/26/22.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#include <string>
#include <iostream>

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

#endif //EX00_BUREAUCRAT_HPP
