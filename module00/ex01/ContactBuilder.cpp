//
// Created by jll32 on 25/12/2021.
//

#include "ContactBuilder.hpp"

phone_book::Contact phone_book::ContactBuilder::build() {
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
    std::cout << "First Name: ";
    std::cin >> first_name;
    std::cout << "Last Name: ";
    std::cin >> last_name;
    std::cout << "Nick Name: ";
    std::cin >> nick_name;
    std::cout << "Phone Number: ";
    std::cin >> phone_number;
    std::cout << "Darkest Secret: ";
    std::cin >> darkest_secret;
    return Contact(first_name, last_name, nick_name, phone_number, darkest_secret);
}
