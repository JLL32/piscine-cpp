//
// Created by Abdeljalil El hachimi on 2/26/22.
//

#include "Form.hpp"

Form::Form() : _signed(false), _name(
        ""), _sign_grade(150), _exec_grade(150) {}

Form::Form(const std::string &name,
           int sign_grade, int exec_grade) throw(Form::GradeTooHighException, Form::GradeTooLowException): _signed(
        false), _name(
        name), _sign_grade(sign_grade), _exec_grade(exec_grade) {
    if (sign_grade < 1)
        throw Form::GradeTooHighException();
    if (sign_grade > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form Name, Grade Constructor" << std::endl;
}

Form::Form(const Form &copy) : _signed(copy._signed), _name(
        copy._name), _sign_grade(copy._sign_grade), _exec_grade(copy._exec_grade) {
    *this = copy;
    std::cout << "Form Copy Constructor" << std::endl;
}

Form::~Form() {
    std::cout << "Form Destructor" << std::endl;
}

Form &Form::operator=(const Form &rhs) {
    this->_signed = rhs._signed;
    return *this;
}

std::string Form::getName() const {
    return this->_name;
}

int Form::getGrade() const {
    return this->_grade;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Oops! too high for grade";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Oops! too low for grade";
}

std::ostream &operator<<(std::ostream &s, const Form &bureaucrat) {
    s << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return s;
}
