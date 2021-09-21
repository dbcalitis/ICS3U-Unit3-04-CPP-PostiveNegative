// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program checks if the number is a positive, negative or a zero

#include <iostream>

int main() {
    // This function checks if the number is a positive, negative or a zero

    int number;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // process & output
    if (number < 0) {
        std::cout << number << " is a negative number." << std::endl;
    } else if (number > 0) {
        std::cout << number << " is a positive number." << std::endl;
    } else {
        std::cout << "0 is just a zero." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
