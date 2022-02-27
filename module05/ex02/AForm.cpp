//
// Created by Abdeljalil El hachimi on 2/26/22.
//

#include "AForm.hpp"

AForm::AForm() : _signed(false), _name(
        ""), _sign_grade(150), _exec_grade(150) {}

AForm::AForm(const std::string &name,
             int sign_grade, int exec_grade) throw(AForm::GradeTooHighException, AForm::GradeTooLowException): _signed(
        false), _name(
        name), _sign_grade(sign_grade), _exec_grade(exec_grade) {
    if (sign_grade < 1)
        throw AForm::GradeTooHighException();
    if (sign_grade > 150)
        throw AForm::GradeTooLowException();
    std::cout << "AForm Init Constructor" << std::endl;
}

AForm::AForm(const AForm &copy) : _signed(copy._signed), _name(
        copy._name), _sign_grade(copy._sign_grade), _exec_grade(copy._exec_grade) {
    *this = copy;
    std::cout << "AForm Copy Constructor" << std::endl;
}

AForm::~AForm() {
    std::cout << "AForm Destructor" << std::endl;
}

AForm &AForm::operator=(const AForm &rhs) {
    this->_signed = rhs._signed;
    return *this;
}

std::string AForm::getName() const {
    return this->_name;
}

int AForm::getSignGrade() const {
    return this->_sign_grade;
}

int AForm::getExecGrade() const {
    return this->_exec_grade;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) throw(GradeTooLowException) {
    if (this->_sign_grade < bureaucrat.getGrade())
        throw GradeTooLowException();
    this->_signed = true;
}

bool AForm::isSigned() const {
    return this->_signed;
}

void AForm::canBeExecuted(const Bureaucrat &executor) const throw(GradeTooLowException, NotSignedException) {
    if (!this->isSigned())
        throw NotSignedException();
    if (executor.getGrade() > this->getExecGrade())
        throw GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Oops! your grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Oops! your grade is too low";
}

const char *AForm::NotSignedException::what() const throw() {
    return "Oops! form is not signed";
}

std::ostream &operator<<(std::ostream &s, const AForm &form) {
    s << "Signed                   : " << (form.isSigned() ? "Yes" : "No") << std::endl;
    s << "Name                     : " << form.getName() << std::endl;
    s << "Required grade to sign   : " << form.getSignGrade() << std::endl;
    s << "Required grade to execute: " << form.getExecGrade();
    return s;
}

