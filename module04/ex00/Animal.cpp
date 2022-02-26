//
// Created by jll32 on 26/2/2022.
//

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Default Constructor for " << this->type << std::endl;
}

Animal::Animal(const Animal &copy) {
    *this = copy;
    std::cout << "Copy Constructor for " << this->type << std::endl;
}

Animal::~Animal() {
    std::cout << "Destructor for " << this->type << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
    this->type = rhs.type;
    return *this;
}

std::string Animal::getType() const {
    return this->type;
}

void Animal::makeSound() const {
    std::cout << "A mere animal doesn't make any sound you dimwit head!" << this->type << std::endl;
}

