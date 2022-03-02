//
// Created by Abdeljalil El hachimi on 3/2/22.
//

#ifndef EX00_EASYFINE_HPP
#define EX00_EASYFINE_HPP

#include <algorithm>

template<typename T>
int easyFind(T &container, int value) {
    typename T::iterator iter = std::find(container.begin(), container.end(), value);
    if (iter == container.end())
        throw std::out_of_range("Value not found");
    return (int) (iter - container.begin());
}

#endif //EX00_EASYFINE_HPP
