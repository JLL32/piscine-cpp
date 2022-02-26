//
// Created by jll32 on 26/2/2022.
//

#include "AAnimal.hpp"

std::string AAnimal::getType() const {
    return this->type;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal Virtual Destructor" << std::endl;
}

