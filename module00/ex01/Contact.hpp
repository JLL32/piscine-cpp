//
// Created by jll32 on 24/12/2021.
//

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

namespace phone_book {

class Contact {
public:
  Contact();

  Contact(const std::string &first_name, const std::string &last_name,
          const std::string &nickname, const std::string &phone_number,
          const std::string &darkest_secret);

  const std::string &get_first_name() const;

  const std::string &get_last_name() const;

  const std::string &get_nickname() const;

  const std::string &get_phone_number() const;

private:
  std::string _first_name;
  std::string _last_name;
  std::string _nickname;
  std::string _phone_number;
  std::string _darkest_secret;
};

} // namespace phone_book

#endif // CONTACT_H
