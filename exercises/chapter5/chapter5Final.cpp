//
// Created by yardi on 3/29/25.
//

#include "chapter5Final.h"

#include <iostream>

std::string getName(int number) {
    std::cout << "Enter the name of person #" << number << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(std::string_view name) {
    std::cout << "Enter the age of " << name << ": ";
    int age {};
    std::cin >> age;
    return age;
}

void printOlder(std::string_view person1, int age1, std::string_view person2, int age2) {
    if (age1 > age2) {
        std::cout << person1 << " (age " << age1 << ") is older than " << person2 << "(age " << age2 << ")\n";
    }
    else if (age1 < age2) {
        std::cout << person2 << " (age " << age2 << ") is older than " << person1 << "(age " << age1 << ")\n";
    }
    else {
        std::cout << person1 << " (age " << age1 << ") is just as old as " << person2 << " (age " << age2 << ")\n";
    }
}

void chapter5Final::run() {
    const std::string person1{getName(1)};
    const int age1{getAge(person1)};

    const std::string person2{getName(2)};
    const int age2{getAge(person2)};

    printOlder(person1, age1, person2, age2);
}
