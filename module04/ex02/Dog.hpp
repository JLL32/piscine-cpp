//
// Created by jll32 on 26/2/2022.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP


#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
public:
    Dog();

    Dog(const Dog &copy);

    ~Dog();

    Dog &operator=(const Dog &rhs);

    void makeSound() const;

private:
    Brain *brain;
};


#endif //EX00_DOG_HPP
