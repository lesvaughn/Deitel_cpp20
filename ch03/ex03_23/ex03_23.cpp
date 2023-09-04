/*
 * ex03_23.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.23  (Sides of a Triangle)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter three nonzero double values:  ";
    double side1{ 0 };
    double side2{ 0 };
    double side3{ 0 };
    std::cin >> side1 >> side2 >> side3;

    if (side2 + side3 > side1) {
        if (side1 + side3 > side2) {
            if (side1 + side2 > side3) {
                std::cout << "These values could represent the sides of a "
                          << "triangle.\n";
            }
            else {
                std::cout << "These values could not represent the sides of "
                          <<  "a triangle.\n";
            }
        }
        else {
            std::cout << "These values could not represent the sides of "
                        <<  "a triangle.\n";
         }
    }
    else {
        std::cout << "These values could not represent the sides of "
                  <<  "a triangle.\n";
    }
}