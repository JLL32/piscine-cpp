//
// Created by jll32 on 28/2/2022.
//

#ifndef EX00_STRINGCONVERTER_HPP
#define EX00_STRINGCONVERTER_HPP


#include <string>
#include <iostream>

class StringConverter {
public:
    StringConverter();

    explicit StringConverter(const std::string &str);

    StringConverter(const StringConverter &src);

    ~StringConverter();

    StringConverter &operator=(const StringConverter &rhs);

    void convert() const;

private:
    const std::string _str;

    enum {
        IS_CHAR,
        IS_INT,
        IS_FLOAT,
        IS_DOUBLE,
        IS_UNKNOWN
    };

    int identifyType() const;

    bool isChar() const;

    bool isInt() const;

    bool isFloat() const;

    bool isDouble() const;

    void printChar() const;

    void printInt() const;

    void printFloat() const;

    void printDouble() const;

    void printUnknown() const;
};

#endif //EX00_STRINGCONVERTER_HPP
