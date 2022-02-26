//
// Created by jll32 on 26/2/2022.
//

#include "Dog.hpp"

Dog::Dog(): brain(new Brain()) {
    this->type = "Dog";
    std::cout << "Default Constructor for " << this->type << std::endl;
}

Dog::Dog(const Dog &copy) {
    *this = copy;
    std::cout << "Copy Constructor for " << this->type << std::endl;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Destructor for " << this->type << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
    this->Animal::operator=(rhs);
    this->brain = rhs.brain;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Bark!" << this->type << std::endl;
}
