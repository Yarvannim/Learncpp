//
// Created by yardi on 3/29/25.
//

#include "chapter4finalp2.h"
#include <iostream>
#include <math.h>
#include <valarray>

double getDouble() {
    std::cout << "Enter a double value: \n";
    double x {};
    std::cin >> x;
    return x;
}
char getOperator() {
    std::cout << "Enter an operator: \n";
    char op {};
    std::cin >> op;
    return op;
}
void printResult(double x, double y, char operation) {
    double result {};
    switch (operation) {
        case '+': result = x + y; break;
        case '-': result = x - y; break;
        case '*': result = x * y; break;
        case '/': result = x / y; break;
        case '^': result = pow(y, x); break;
    }
    std::cout << x << " " << operation << " " << y << " = " << result << '\n';
}
void chapter4finalp2::run() {
    double x { getDouble() };
    double y { getDouble() };
    char op { getOperator() };
    printResult(x, y, op);f
}
