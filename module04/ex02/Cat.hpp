//
// Created by jll32 on 26/2/2022.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP


#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
public:
    Cat();

    Cat(const Cat &copy);

    ~Cat();

    Cat &operator=(const Cat &rhs);

    void makeSound() const;

private:
   Brain *brain;
};


#endif //EX00_CAT_HPP
