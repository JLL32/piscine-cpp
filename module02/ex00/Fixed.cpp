//
// Created by jll32 on 24/2/2022.
//

#include "Fixed.hpp"

Fixed::Fixed(): _fixed_value(0) {
    std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy Constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Copy Assignment Operator called" << std::endl;
    this->_fixed_value = fixed.getRawBits();
    return (*this);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function callled" << std::endl;
    return (this->_fixed_value);
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_value = raw;
}