//
// Created by jll32 on 26/2/2022.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
public:
    Animal();
    Animal(const Animal &copy);
    virtual ~Animal();
    Animal &operator=(const Animal &rhs);
    std::string getType() const;
    virtual void makeSound() const;
protected:
    std::string type;
};


#endif //EX00_ANIMAL_HPP
