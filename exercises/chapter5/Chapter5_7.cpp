//
// Created by yardi on 3/29/25.
//

#include "Chapter5_7.h"

#include <iostream>

void Chapter5_7::run() {
    std::cout << "Enter your full name: ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";
    int age {};
    std::cin >> age;

    std::cout << "Your age + length of name is: " << static_cast<int>(name.length()) + age << '\n';
}
