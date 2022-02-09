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

static void print_cell(std::string str) {
  std::cout << str << std::setw(10) << std::setfill(' ') << "|";
}

void PhoneBook::print() const {
  for (unsigned int i = 0; i < this->_length; ++i) {
    const Contact contact = this->_contacts[i];
    // std::cout << i << '|' << contact.get_first_name() << '|'
    //           << contact.get_last_name() << '|' << contact.get_nickname() <<
    //           '|'
    //           << contact.get_phone_number() << std::endl;
    print_cell(std::to_string(i));
    print_cell(contact.get_first_name());
    print_cell(contact.get_last_name());
    print_cell(contact.get_nickname());
    print_cell(contact.get_phone_number());
    std::cout << std::endl;
  }
}

PhoneBook::PhoneBook() { this->_length = 0; }
} // namespace phone_book
