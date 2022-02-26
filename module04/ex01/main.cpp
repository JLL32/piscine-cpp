#include <cctype>
#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    Animal *animals[6] = {new Dog(), new Dog(), new Dog(),
                         new Cat(), new Cat(), new Cat()};
   for (int i = 0; i < 6; i++)
   {
       delete animals[i];
   }
    return 0;
}
