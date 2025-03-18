//
// Created by yardi on 3/17/25.
//

#include "Exercise1dot5.h"

#include <iostream>

// This function is made to ask 3 number from the user and output them to the terminal in a sentence.
void Exercise1dot5::run() {
    std::cout << "Type 3 numbers seperated by a space: ";
    int x, y, z;// Don't initialise the variables yet for optimisation, since they are getting filled next line
    std::cin >> x >> y >> z;
    // \n is better for optimisation since endln flushes the buffer but not relevant here since endln not multiple times
    std::cout << "You entered: " << x << ", " << y << " and " << z << ".\n";
}
