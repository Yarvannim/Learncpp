//
// Created by yardi on 3/29/25.
//

#include "chapter4_12.h"

#include <iostream>

void chapter4_12::run() {
    std::cout << "Enter a character: ";
    char ch{};
    int ascii {ch};
    std::cin >> ch;
    std::cout << "You entered: " << ch << " which as ASCII code " << ascii << ".\n";
}
