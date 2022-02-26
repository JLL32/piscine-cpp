//
// Created by jll32 on 26/2/2022.
//

#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
public:
    WrongAnimal();

    WrongAnimal(const WrongAnimal &copy);

    virtual ~WrongAnimal();

    WrongAnimal &operator=(const WrongAnimal &rhs);

    std::string getType() const;

    void makeSound() const;

protected:
    std::string type;
};


#endif //EX00_WRONGANIMAL_HPP
