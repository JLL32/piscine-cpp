//
// Created by Abdeljalil El hachimi on 2/26/22.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP


#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class AForm {
public:
    AForm();

    AForm(const AForm &copy);

    AForm(const std::string &name,
          int sign_grade, int exec_grade) throw(AForm::GradeTooHighException, AForm::GradeTooLowException);

    virtual ~AForm();

    AForm &operator=(const AForm &rhs);

    void beSigned(const Bureaucrat &bureaucrat) throw(AForm::GradeTooLowException);

    bool isSigned() const;

    std::string getName() const;

    int getSignGrade() const;

    int getExecGrade() const;

    virtual void execute(Bureaucrat const &executor) const throw(GradeTooLowException, NotSignedException) = 0;

    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw();
    };

    class NotSignedException : public std::exception {
    public:
        const char *what() const throw();
    };

protected:
    void canBeExecuted(const Bureaucrat &executor) const throw(GradeTooLowException, NotSignedException);

private:
    bool _signed;
    const std::string _name;
    const int _sign_grade;
    const int _exec_grade;
};

std::ostream &operator<<(std::ostream &s, const AForm &form);

#endif //EX01_FORM_HPP
