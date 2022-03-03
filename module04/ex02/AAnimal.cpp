//
// Created by jll32 on 26/2/2022.
//

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
    std::cout << "Default Constructor for Animal" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) {
    *this = copy;
    std::cout << "Copy Constructor for Animal" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "Destructor for Animal" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
    this->type = rhs.type;
    return *this;
}

std::string AAnimal::getType() const {
    return this->type;
}


