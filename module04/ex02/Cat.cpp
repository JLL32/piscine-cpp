//
// Created by jll32 on 26/2/2022.
//

#include "Cat.hpp"

Cat::Cat(): brain(new Brain()) {
    this->type = "Cat";
    std::cout << "Default Constructor for " << this->type << std::endl;
}

Cat::Cat(const Cat &copy) {
    *this = copy;
    std::cout << "Copy Constructor for " << this->type << std::endl;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Destructor for " << this->type << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    this->type = rhs.type;
    this->brain = rhs.brain;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Mew!" << this->type << std::endl;
}
