//
// Created by jll32 on 1/3/2022.
//

#include <cstdlib>
#include <typeinfo>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base *Base::generate() {
    srand(time(nullptr));
    int i = rand() % 3;
    std::cout << "Randomly generated ";

    if (i == 0) {
        std::cout << "A" << std::endl;
        return new A();
    }

    if (i == 1) {
        std::cout << "B" << std::endl;
        return new B();
    }

    std::cout << "C" << std::endl;
    return new C();
}

void Base::identify(Base *p) {
    dynamic_cast<A *>(p) != nullptr && std::cout << "A" << std::endl;
    dynamic_cast<B *>(p) != nullptr && std::cout << "B" << std::endl;
    dynamic_cast<C *>(p) != nullptr && std::cout << "C" << std::endl;
}

void Base::identify(Base &p) {
    try {
        (void) dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    } catch (std::bad_cast &e) {}

    try {
        (void) dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
    } catch (std::bad_cast &e) {}

    try {
        (void) dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
    } catch (std::bad_cast &e) {}
}


