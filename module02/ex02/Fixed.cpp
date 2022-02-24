//
// Created by jll32 on 24/2/2022.
//

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_value(0) {
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

Fixed::Fixed(const int n) {
    std::cout << "Int Constructor called" << std::endl;
    this->_fixed_value = n << _fractional_bits;
}

Fixed::Fixed(const float f) {
    std::cout << "Float Constructor called" << std::endl;
    this->_fixed_value = roundf(f * (1 << _fractional_bits));
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

int Fixed::toInt() const {
    return this->_fixed_value >> _fractional_bits;
}

float Fixed::toFloat() const {
    return this->_fixed_value / (float) (1 << _fractional_bits);
}

bool Fixed::operator==(const Fixed &fixed) const {
    return this->_fixed_value == fixed._fixed_value;
}

bool Fixed::operator!=(const Fixed &fixed) const {
    return this->_fixed_value != fixed._fixed_value;
}

bool Fixed::operator>(const Fixed &fixed) const {
    return this->_fixed_value > fixed._fixed_value;
}

bool Fixed::operator>=(const Fixed &fixed) const {
    return this->_fixed_value >= fixed._fixed_value;
}

bool Fixed::operator<(const Fixed &fixed) const {
    return this->_fixed_value < fixed._fixed_value;
}

bool Fixed::operator<=(const Fixed &fixed) const {
    return this->_fixed_value <= fixed._fixed_value;
}

Fixed Fixed::operator+(const Fixed &fixed) const {
    Fixed new_fixed;
    new_fixed.setRawBits(this->_fixed_value + fixed._fixed_value);
    return new_fixed;
}

Fixed Fixed::operator-(const Fixed &fixed) const {
    Fixed new_fixed;
    new_fixed.setRawBits(this->_fixed_value - fixed._fixed_value);
    return new_fixed;
}

Fixed Fixed::operator*(const Fixed &fixed) const {
    Fixed new_fixed;
    new_fixed.setRawBits((this->_fixed_value * fixed._fixed_value) >> _fractional_bits);
    return new_fixed;
}

Fixed Fixed::operator/(const Fixed &fixed) const {
    Fixed new_fixed;
    new_fixed.setRawBits((this->_fixed_value / fixed._fixed_value) << _fractional_bits);
    return new_fixed;
}

Fixed &Fixed::operator++() {
    ++this->_fixed_value;
    return (*this);
}

Fixed &Fixed::operator--() {
    --this->_fixed_value;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++this->_fixed_value;
    return (temp);
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --this->_fixed_value;
    return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return a >= b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return a >= b ? a : b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}
