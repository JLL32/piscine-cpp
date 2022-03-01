//
// Created by jll32 on 1/3/2022.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

#include <iostream>

template <typename T>
void iter(const T *array, size_t size, void (*f)(T &)) {
    for (size_t i = 0; i < size; i++) {
        f(array[i]);
    }
}

template <typename T>
void printElement(T &elem) {
    std::cout << elem << std::endl;
}

#endif //EX01_ITER_HPP
