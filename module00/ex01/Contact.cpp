//
// Created by jll32 on 24/12/2021.
//

#include "Contact.hpp"
#include <iostream>
#include <ostream>

namespace phone_book {
Contact::Contact()
    : _first_name(""), _last_name(""), _nickname(""), _phone_number(""),
      _darkest_secret("") {}

Contact::Contact(const std::string &first_name, const std::string &last_name,
                 const std::string &nickname, const std::string &phone_number,
                 const std::string &darkest_secret)
    : _first_name(first_name), _last_name(last_name), _nickname(nickname),
      _phone_number(phone_number), _darkest_secret(darkest_secret) {}

std::string Contact::get_first_name() const {
  return this->_format(this->_first_name);
}

std::string Contact::get_last_name() const {
  return this->_format(this->_last_name);
}

std::string Contact::get_nickname() const {
  return this->_format(this->_nickname);
}

std::string Contact::get_phone_number() const {
  return this->_format(this->_phone_number);
}

std::string Contact::_format(std::string field) const {
  if (field.length() > 10)
    return field.substr(0, 9).append(".");
  return field;
}

void Contact::print() const {
  std::cout << this->_first_name << std::endl;
  std::cout << this->_last_name << std::endl;
  std::cout << this->_nickname << std::endl;
  std::cout << this->_phone_number << std::endl;
  std::cout << this->_darkest_secret << std::endl;
}
} // namespace phone_book
