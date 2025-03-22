//
// Created by yardi on 3/22/25.
//

#include "chapter2_4.h"
#include <iostream>
void chapter2_4::run() {
   int input{};
   std::cout << "Enter an integer:";
   std::cin >> input; 

   //Dont use variables for stuff like this, it is unneeded bloat
   //int doublednumber {doubleNumber(input)};
   std::cout << "Your doubled number is: " << doubleNumber(input) << "\n";
}
int chapter2_4::doubleNumber(int x) {
    return x * 2;
}
