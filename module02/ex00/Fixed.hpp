//
// Created by jll32 on 24/2/2022.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
public:
    Fixed();

    Fixed(const Fixed &fixed);

    ~Fixed();

    Fixed &operator=(const Fixed &fixed);

    int getRawBits() const;

    void setRawBits(int const raw);

private:
    int _fixed_value;
    static const int _fractional_bits = 8;
};

#endif //EX00_FIXED_HPP
