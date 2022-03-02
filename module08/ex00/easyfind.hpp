//
// Created by Abdeljalil El hachimi on 3/2/22.
//

#ifndef EX00_EASYFINE_HPP
#define EX00_EASYFINE_HPP

#include <algorithm>

template <typename T>
int easyFind(T &container, int value)
{
     std::iterator<T> iter = std::find(container.begin(), container.end(), value);
    for (int i = 0; i < container.size(); i++)
    {
        if (container[i] == value)
            return i;
    }
    return -1;
}

#endif //EX00_EASYFINE_HPP
