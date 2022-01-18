//
// Created by jll32 on 24/12/2021.
//

#include "Contact.hpp"

namespace phone_book {
    Contact::Contact(): _first_name(""),
              _last_name(""),
              _nickname(""),
              _phone_number(""),
              _darkest_secret("") {}

    Contact::Contact(const std::string &first_name, const std::string &last_name, const std::string &nickname,
                     const std::string &phone_number, const std::string &darkest_secret)
            : _first_name(first_name),
              _last_name(last_name),
              _nickname(nickname),
              _phone_number(phone_number),
              _darkest_secret(darkest_secret) {}

    const std::string &Contact::get_first_name() const {
        if (this->_first_name.length() > 10)
            return this->_first_name.substr(0, 9).append(".");
        return this->_first_name;
    }

    const std::string &Contact::get_last_name() const {
        if (this->_last_name.length() > 10)
            return this->_last_name.substr(0, 9).append(".");
        return this->_last_name;
    }

    const std::string &Contact::get_nickname() const {
        if (this->_nickname.length() > 10)
            return this->_nickname.substr(0, 9).append(".");
        return this->_nickname;
    }

    const std::string &Contact::get_phone_number() const {
        if (this->_phone_number.length() > 10)
            return this->_phone_number.substr(0, 9).append(".");
        return this->_phone_number;
    }
}
