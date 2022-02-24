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

    Fixed &operator=(const Fixed &fixed);

    int getRawBits() const;

    void setRawBits(int const raw);

    int toInt() const;

    float toFloat() const;

private:
    int _fixed_value;
    static const int _fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif //EX01_FIXED_HPP
