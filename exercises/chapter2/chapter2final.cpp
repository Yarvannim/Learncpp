//
// Created by yardi on 3/23/25.
//

#include "chapter2final.h"
#include "chapter2finalIO.h"

void chapter2final::run() {
    chapter2finalIO io;
    int x { io.readNumber()};
    int y { io.readNumber()};
    io.writeAnswer(x + y);
}