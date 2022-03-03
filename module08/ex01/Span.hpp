//
// Created by Abdeljalil El hachimi on 3/3/22.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <vector>

class Span {
public:
    Span(unsigned int n);

    Span(Span const &other);

    ~Span();

    Span &operator=(Span const &other);

    void addNumber(int n);

    int shortestSpan();

    int longestSpan();

    template<typename Iter>
    void addNumber(Iter begin, Iter end, unsigned int size) {
        if (_n < size)
            throw (std::length_error("Too much elements!!!"));
        this->_vector.insert(this->_vector.end(), begin, end);
        _n -= size;
    }

private:
    std::vector<unsigned int> _vector;
    unsigned int _n;
};


#endif //EX01_SPAN_HPP
