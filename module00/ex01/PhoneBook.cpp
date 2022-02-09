//
// Created by jll32 on 24/12/2021.
//

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <ostream>

namespace phone_book {

PhoneBook::PhoneBook() { this->_length = 0; }

void PhoneBook::add(const Contact contact) {
  static int i;
  i = i == CAPACITY ? 0 : i;
  this->_contacts[i] = contact;
  i += 1;
  if (this->_length < CAPACITY)
    this->_length += 1;
}

Contact PhoneBook::find(unsigned int index) const {
  return this->_contacts[index];
}

bool PhoneBook::includes(unsigned int index) const {
  if (index >= this->_length || index < this->_length - 1)
    return false;
  return true;
}

void PhoneBook::print() const {
  for (unsigned int i = 0; i < this->_length; ++i) {
    const Contact contact = this->_contacts[i];
    this->_print_cell(std::to_string(i));
    std::cout << '|';
    this->_print_cell(contact.get_first_name());
    std::cout << '|';
    this->_print_cell(contact.get_last_name());
    std::cout << '|';
    this->_print_cell(contact.get_nickname());
    std::cout << std::endl;
  }
}

void PhoneBook::_print_cell(std::string str) const {
  std::cout << std::setw(10);
  std::cout << std::left;
  std::cout << str;
}

} // namespace phone_book
