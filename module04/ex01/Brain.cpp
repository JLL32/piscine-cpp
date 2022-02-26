//
// Created by jll32 on 26/2/2022.
//

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Default Copy Constructor" << std::endl;
}

Brain::Brain(const Brain &copy) {
    *this = copy;
    std::cout << "Brain Copy Constructor" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain Destructor" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs) {
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    return *this;
}
