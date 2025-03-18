//
// Created by yardi on 3/18/25.
//

#include "chapter1FinalQuiz.h"
#include <iostream>
void chapter1FinalQuiz::run() {
    std::cout << "Enter an integer: ";
    int x{}, y{};
    std::cin >> x;
    std::cout << "Enter another integer: ";
    std::cin >> y;
    std::cout << x << " + " << y << " is " << x + y << ".\n";
    std::cout << x << " - " << y << " is " << x - y << ".\n";
}
