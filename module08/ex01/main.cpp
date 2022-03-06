#include <iostream>
#include "Span.hpp"

int main() {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::vector<int> v(100000);
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    const int n = 1e5;
    for (int i = 0; i < n; i++) {
        v[i] = std::rand() % n;
    }
    Span sp2 = Span(n);
    sp2.addNumber(v.begin(), v.end(), v.size());
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

    return 0;
}
