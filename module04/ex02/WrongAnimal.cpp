//
// Created by jll32 on 26/2/2022.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "Default Constructor for " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    *this = copy;
    std::cout << "Copy Constructor for " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor for " << this->type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
    this->type = rhs.type;
    return *this;
}

std::string WrongAnimal::getType() const {
    return this->type;
}

void WrongAnimal::makeSound() const {
    std::cout << "This is a WrongAnimal Sound!" << this->type << std::endl;
}
