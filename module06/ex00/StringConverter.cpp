//
// Created by jll32 on 28/2/2022.
//

#include "StringConverter.hpp"

StringConverter::StringConverter() {}

StringConverter::StringConverter(const std::string &str) : _str(str) {}

StringConverter::StringConverter(const StringConverter &src) : _str(src._str) {}

StringConverter::~StringConverter() {}

StringConverter &StringConverter::operator=(const StringConverter &rhs) {
    static_cast<void>(rhs);
    throw std::runtime_error("Not implemented");
}

void StringConverter::convert() const {
    switch (this->identifyType()) {
        case IS_CHAR:
            this->printChar();
            break;
        case IS_INT:
            this->printInt();
            break;
        case IS_FLOAT:
            this->printFloat();
            break;
        case IS_DOUBLE:
            this->printDouble();
            break;
        default:
            this->printUnknown();
    }
}

int StringConverter::identifyType() const {
    if (isChar())
        return IS_CHAR;
    if (isInt())
        return IS_INT;
    if (isFloat())
        return IS_FLOAT;
    if (isDouble())
        return IS_DOUBLE;
    return IS_UNKNOWN;
}

bool StringConverter::isChar() const {
    if (_str.length() == 1)
        return true;
    return false;
}

bool StringConverter::isInt() const {
    if (_str.find('.') != std::string::npos || _str.find('f') != std::string::npos)
        return false;

    try {
        std::stoi(_str);
        return true;
    } catch (std::exception &e) {
        return false;
    }
}

bool StringConverter::isFloat() const {
    std::string str = _str;
    if (str == "nanf" || str == "+inff" || str == "-inff")
        return true;
    if (str[str.length() - 1] == 'f') {
        str.pop_back();
    } else {
        return false;
    }
    try {
        std::stof(str);
        return true;
    } catch (std::exception &e) {
        return false;
    }
}

bool StringConverter::isDouble() const {
    if (_str == "nan" || _str == "+inf" || _str == "-inf")
        return true;
    try {
        std::stod(_str);
        return true;
    } catch (std::exception &e) {
        return false;
    }
}

void StringConverter::printChar() const {
    std::cout << "Type: char" << std::endl;

    int c = stoi(_str);

    if (c <= 32 || c >= 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << c << std::endl;

    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void StringConverter::printInt() const {
    std::cout << "Type: int" << std::endl;

    int i = std::stoi(_str);

    if (i <= 32 || i >= 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(i) << std::endl;

    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void StringConverter::printFloat() const {
    std::cout << "Type: float" << std::endl;

    std::string str = _str;

    if (str == "nanf" || str == "+inff" || str == "-inff") {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: " << str << std::endl;
        str.pop_back();
        std::cout << "double: " << str << std::endl;
        return;
    }

    str.pop_back();
    float f = std::stof(str);

    if (f <= 32.0f || f >= 127.0f)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(f) << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
}

void StringConverter::printDouble() const {

    std::cout << "Type: double" << std::endl;

    std::string str = _str;

    if (str == "nan" || str == "+inf" || str == "-inf") {
        std::cout << "char: Impossible" << std::endl;
        std::cout << "int: Impossible" << std::endl;
        std::cout << "float: " << str + "f" << std::endl;
        std::cout << "double: " << str << std::endl;
        return;
    }

    double d = std::stod(str);

    if (d <= 32.0 || d >= 127.0)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(d) << std::endl;

    if (d > INT_MAX && d < INT_MIN)
        std::cout << "int: Impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(d) << std::endl;

    std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
    std::cout << "double: " << d << ".0" << std::endl;
}

void StringConverter::printUnknown() const {
    std::cout << "char: Impossible" << std::endl;
    std::cout << "int: Impossible" << std::endl;
    std::cout << "float: Impossible" << std::endl;
    std::cout << "double: Impossible" << std::endl;
}


