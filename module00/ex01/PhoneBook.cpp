//
// Created by jll32 on 24/12/2021.
//

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>

namespace phone_book {

void PhoneBook::add(const Contact contact) {
  static int i;
  i = i == CAPACITY ? 0 : i;
  this->_contacts[i] = contact;
  i += 1;
  if (this->_length < CAPACITY)
    this->_length += 1;
}

Contact PhoneBook::search(unsigned int index) const {
  if (index >= this->_length)
    index = this->_length - 1;
  return this->_contacts[index];
}

void PhoneBook::print() const {
  std::cout << std::setfill(' ') << std::setw(10);
  for (unsigned int i = 0; i < this->_length; ++i) {
    const Contact contact = this->_contacts[i];
    std::cout << i << '|' << contact.get_first_name() << '|'
              << contact.get_last_name() << '|' << contact.get_nickname() << '|'
              << contact.get_phone_number() << std::endl;
  }
}

PhoneBook::PhoneBook() { this->_length = 0; }
} // namespace phone_book
