//
// Created by jll32 on 26/2/2022.
//

#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP


#include <string>
#include <iostream>

class Brain {
public:
    Brain();

    Brain(const Brain &copy);

    ~Brain();

    Brain &operator=(const Brain &rhs);

private:
    std::string _ideas[100];
};


#endif //EX01_BRAIN_HPP
