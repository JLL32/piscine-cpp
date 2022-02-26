//
// Created by jll32 on 26/2/2022.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << "Default Constructor for " << this->type << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) {
    *this = copy;
    std::cout << "Copy Constructor for " << this->type << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Destructor for " << this->type << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
    this->WrongAnimal::operator=(rhs);
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Mew!" << this->type << std::endl;
}
