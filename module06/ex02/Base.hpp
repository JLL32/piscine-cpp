//
// Created by jll32 on 1/3/2022.
//

#ifndef EX02_BASE_HPP
#define EX02_BASE_HPP


class Base {
public:
    virtual ~Base();
    static Base * generate();
    static void identify(Base* p);
    static void identify(Base& p);
};


#endif //EX02_BASE_HPP
