//
// Created by yardi on 3/23/25.
//

#include "chapter2finalIO.h"
#include <iostream>

int chapter2finalIO::readNumber() {
    std::cout << "Enter a number: ";
    int number{};
    std::cin >> number;
    return number;
}
void chapter2finalIO::writeAnswer(int x) {
    std::cout << "The answer is: " << x << '\n';
}