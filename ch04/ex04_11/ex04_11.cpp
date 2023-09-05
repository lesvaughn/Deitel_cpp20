/*
 * ex04_11.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.11  (Triangle-Printing Program)
 *
 * les vaughn
 * Sep 4, 2023
 */

#include <iostream>

int main()
{
    // Print triangle (a)
    for (int row{ 1 }; row <= 10; ++row) {
        for (int col{ 1 }; col <= row; ++col) {
            std::cout << "*";
        }

        std::cout << "\n";
    }

    std::cout << "\n";

    // Print triangle (b)
    for (int row{ 1 }; row <= 10; ++row) {
        for (int col{ 1 }; col <= 11 - row; ++col) {
            std::cout << "*";
        }

        std::cout << "\n";
    }

    std::cout << "\n";

    // Print triangle (c)
    for (int row{ 1 }; row <= 10; ++row) {
        for (int col{ 1 }; col < row; ++col) {
            std::cout << " ";
        }

        for (int col{ row }; col <= 10; ++col) {
            std::cout << "*";
        }

        std::cout << "\n";
    }

    std::cout << "\n";

    // Print triangle (d)
    for (int row{ 1 }; row <= 10; ++row) {
        for (int col{ 1 }; col <= 10 - row; ++col) {
            std::cout << " ";
        }

        for (int col{11 - row}; col <= 10; ++col) {
            std::cout << "*";
        }

        std::cout << "\n";
    }
}