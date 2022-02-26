//
// Created by jll32 on 26/2/2022.
//

#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP


#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat &copy);
    ~WrongCat();
    WrongCat &operator=(const WrongCat &rhs);
    void makeSound() const;
};


#endif //EX00_WRONGCAT_HPP
