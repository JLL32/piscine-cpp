//
// Created by jll32 on 1/3/2022.
//

#ifndef EX00_UTILS_HPP
#define EX00_UTILS_HPP

template<typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T min(T a, T b) {
    return (a < b) ? a : b;
}

template<typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

#endif //EX00_UTILS_HPP
