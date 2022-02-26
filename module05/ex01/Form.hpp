//
// Created by Abdeljalil El hachimi on 2/26/22.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP


#include <string>
#include <iostream>

class Form {
public:
    Form();
    Form(const Form &copy);

    Form(const std::string &name,
               int sign_grade, int exec_grade) throw(Form::GradeTooHighException, Form::GradeTooLowException);

    virtual ~Form();

    Form &operator=(const Form &rhs);

    std::string getName() const;

    int getGrade() const;

    void beSigned() throw(Form::GradeTooHighException);

    void decrementGrade() throw(Form::GradeTooLowException);

    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw();
    };

private:
    bool _signed;
    const std::string _name;
    const int _sign_grade;
    const int _exec_grade;
};


#endif //EX01_FORM_HPP
