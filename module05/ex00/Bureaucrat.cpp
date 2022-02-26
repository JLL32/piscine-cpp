//
// Created by Abdeljalil El hachimi on 2/26/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _NAME(""), _grade(150) {
    std::cout << "Bureaucrat Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name,
                       int grade) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException): _NAME(
        name) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
    std::cout << "Bureaucrat Name, Grade Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
    *this = copy;
    std::cout << "Bureaucrat Copy Constructor" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Destructor" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
    this->_grade = rhs._grade;
    return *this;
}

std::string Bureaucrat::getName() const {
    return this->_NAME;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::incrementGrade() throw(Bureaucrat::GradeTooHighException) {
    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade() throw(Bureaucrat::GradeTooLowException) {
    if (_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Oops! too high for grade";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Oops! too low for grade";
}
