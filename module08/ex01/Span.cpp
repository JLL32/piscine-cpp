//
// Created by Abdeljalil El hachimi on 3/3/22.
//

#include "Span.hpp"

Span::Span(unsigned int n): _n(n) { }

Span::Span(const Span &other) {
    *this = other;
}

Span::~Span() { }

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _n = other._n;
        _vector = other._vector;
    }
    return *this;
}

void Span::addNumber(int n) {
    if (!_n)
        throw std::length_error("Number is out of range");
    _vector.push_back(n);
   --_n;
}

int Span::shortestSpan() {
    if (_vector.size() < 2)
        throw std::length_error("You must at least have 2 elements");
    std::sort(_vector.begin(), _vector.end());
    return _vector[1] - _vector[0];
}

int Span::longestSpan() {
    if (_vector.size() < 2)
        throw std::length_error("You must at least have 2 elements");
    std::sort(_vector.begin(), _vector.end());
    return _vector[_vector.size() - 1] - _vector[0];
}

