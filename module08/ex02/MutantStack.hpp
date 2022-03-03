//
// Created by Abdeljalil El hachimi on 3/3/22.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
public:
    MutantStack(): std::stack<T>() {}
    MutantStack(const MutantStack &other): std::stack<T>(other) {}
    MutantStack &operator=(const MutantStack &other) {
        std::stack<T>::operator=(other);
        return *this;
    }
    ~MutantStack() {}

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() { return std::stack<T>::c.begin(); }
    iterator end() { return std::stack<T>::c.end(); }

    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    const_iterator begin() const { return std::stack<T>::c.begin(); }
    const_iterator end() const { return std::stack<T>::c.end(); }

    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    reverse_iterator rbegin() { return std::stack<T>::c.rbegin(); }
    reverse_iterator rend() { return std::stack<T>::c.rend(); }
};


#endif //EX02_MUTANTSTACK_HPP
