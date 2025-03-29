//
// Created by yardi on 3/29/25.
//

#include "chapter4finalp3.h"
#include <iostream>

double chapter4finalp3::getTowerHeight() {
    std::cout << "Enter the tower height: ";
    double towerHeight {};
    std::cin >> towerHeight;
    return towerHeight;
}
double chapter4finalp3::calculateBallHeight(double towerHeight, int seconds) {
    double gravity {9.8};
    double fallDistance { gravity * (seconds * 2) / 2 };
    double ballHeight { towerHeight - fallDistance };
    return (ballHeight > 0) ? ballHeight : 0;
}
void chapter4finalp3::printBallheight(double ballheight, int seconds) {
    if (ballheight > 0) {
        std::cout << "At " << seconds << " the ball is at " << ballheight << " meters\n";
    }
    else {
        std::cout << "At " << seconds << " seconds the ball is on the floor\n";
    }
}
void chapter4finalp3::run() {
    double towerHeight { getTowerHeight() };
    int seconds { 0 };
    while (true) {
        double ballheight {calculateBallHeight(towerHeight, seconds)};
        printBallheight(ballheight, seconds);
        if (ballheight == 0) {
            break;
        }
        seconds++;
    }
}




