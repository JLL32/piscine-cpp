//
// Created by jll32 on 24/12/2021.
//

#include "ContactBuilder.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

namespace phone_book {
enum code {
  ADD,
  SEARCH,
  EXIT,
  INVALID,
};

code get_cmd_code(const std::string &cmd) {
  if (cmd == "ADD")
    return ADD;
  if (cmd == "SEARCH")
    return SEARCH;
  if (cmd == "EXIT")
    return EXIT;
  else
    return INVALID;
}
}; // namespace phone_book


int main() {
  phone_book::PhoneBook phone_bk;
  std::string cmd("EXIT");

  for (;;) {
    std::cout << "~>";
    std::cin >> cmd;
    switch (phone_book::get_cmd_code(cmd)) {
    case phone_book::ADD: {
      phone_bk.add(phone_book::ContactBuilder::build());
      continue;
    }
    case phone_book::SEARCH: {
      phone_bk.print();
      unsigned int index;
      std::cin >> index;
      phone_book::Contact contact = phone_bk.search(index);
      continue;
    }
    case phone_book::EXIT: {
      break;
    }
    default: {
      std::cout << "Invalid Command" << std::endl;
      continue;
    }
    }
    break;
  }
  return 0;
}
