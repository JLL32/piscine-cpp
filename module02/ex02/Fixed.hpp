//
// Created by jll32 on 24/2/2022.
//

#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
public:
    Fixed();

    Fixed(const Fixed &fixed);

    Fixed(const int n);

    Fixed(const float f);

    ~Fixed();

    int getRawBits() const;

    void setRawBits(int const raw);

    int toInt() const;

    float toFloat() const;

    Fixed &operator=(const Fixed &fixed);

    bool operator==(const Fixed &fixed) const;

    bool operator!=(const Fixed &fixed) const;

    bool operator>(const Fixed &fixed) const;

    bool operator>=(const Fixed &fixed) const;

    bool operator<(const Fixed &fixed) const;

    bool operator<=(const Fixed &fixed) const;

    Fixed operator+(const Fixed &fixed) const;

    Fixed operator-(const Fixed &fixed) const;

    Fixed operator*(const Fixed &fixed) const;

    Fixed operator/(const Fixed &fixed) const;

    Fixed &operator++();

    Fixed &operator--();

    Fixed operator++(int);

    Fixed operator--(int);

    static Fixed &min(Fixed &a, Fixed &b);

    static const Fixed &min(const Fixed &a, const Fixed &b);

    static Fixed &max(Fixed &a, Fixed &b);

    static const Fixed &max(const Fixed &a, const Fixed &b);

private:
    int _fixed_value;
    static const int _fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif //EX01_FIXED_HPP
