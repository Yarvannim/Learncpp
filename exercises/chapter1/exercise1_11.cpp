//
// Created by yardi on 3/18/25.
//

#include "exercise1_11.h"
#include <iostream>
void exercise1_11::run() {
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;
    std::cout << "Double that number is: " << num * 2 << "\n";
    std::cout << "Triple that number is: " << num * 3 << "\n";
}
