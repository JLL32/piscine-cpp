//
// Created by jll32 on 26/2/2022.
//

#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Default Constructor for " << this->type << std::endl;
}

Cat::Cat(const Cat &copy) {
    *this = copy;
    std::cout << "Copy Constructor for " << this->type << std::endl;
}

Cat::~Cat() {
    std::cout << "Destructor for " << this->type << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    this->Animal::operator=(rhs);
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Mew!" << this->type << std::endl;
}
