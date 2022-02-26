//
// Created by jll32 on 26/2/2022.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal {
public:
    virtual ~AAnimal();

    std::string getType() const;

    virtual void makeSound() const = 0;

protected:
    std::string type;
};


#endif //EX00_ANIMAL_HPP
