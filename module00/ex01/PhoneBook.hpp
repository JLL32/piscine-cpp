//
// Created by jll32 on 24/12/2021.
//

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>

namespace phone_book {
#define CAPACITY 8

class PhoneBook {
public:
  PhoneBook();

  void add(Contact contact);

  Contact find(unsigned int index) const;
  bool includes(unsigned int index) const;

  void print() const;

private:
  Contact _contacts[CAPACITY];
  unsigned int _length;
  void _print_cell(std::string str) const;
};
} // namespace phone_book

#endif // PHONEBOOK_H
