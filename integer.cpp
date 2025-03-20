// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: March 20, 2025
// Relation to number 0 program

#include <cmath>
#include <iostream>

int main() {
    // Variables for user number
    int userNumber;
    std::cout << "Enter a number here: ";
    std::cin >> userNumber;

    // If Statements to display the numbers relation to 0
    if (userNumber < 0) {
        std::cout << "Your number is less than 0";
    } else if (userNumber > 0) {
        std::cout << "Your number is greater than 0";
    } else {
        std::cout << "Your number is 0";
    }
}
