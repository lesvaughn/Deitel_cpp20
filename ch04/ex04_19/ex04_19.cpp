/*
 * ex04_19.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.19  (Diamond-Printing Program)
 * les vaughn
 * Sep 5, 2023
 */

#include <iostream>

int main()
{
    for (int row{ 1 }; row <= 5; ++row) {
        for (int col{ 1 }; col <= 9; ++col) {
            if (col <= 5 - row || col >= row + 5) {
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }
        }

        std::cout << std::endl;
    }

    for (int row{ 6 }; row <= 9; ++row) {
        for (int col{ 1 }; col <= 9; ++col) {
            if (col <= row - 5 || col > 9 - row + 5) {
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }
        }

        std::cout << std::endl;
    }
}