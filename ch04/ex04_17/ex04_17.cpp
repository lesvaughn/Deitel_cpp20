/*
 * ex04_17.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.17  (Modified Triangle-Printing Program)
 *
 * les vaughn
 * Sep 5, 2023
 */

#include <iostream>

int main()
{
    for (int row{ 1 }; row <= 10; ++row) {

        // print row for pattern (a)
        for (int col{ 1 }; col <= row; ++col) {
            std::cout << "*";
        }

        for (int col{ row + 1 }; col <= 10; ++col) {
            std::cout << " ";
        }

        // print spaces between patterns (a) and (b)
        for (int col{ 1 }; col <= 5; ++col) {
            std::cout << " ";
        }

        // print row for pattern (b)
        for (int col { 1 }; col <= 11 - row; ++col) {
            std::cout << "*";
        }

        for (int col{ 12 - row }; col <= 10; ++col) {
            std::cout << " ";
        }

        // print spaces between patterns (b) and (c)
        for (int col{ 1 }; col <= 5; ++col) {
            std::cout << " ";
        }

        // print row for pattern (c)
        for (int col{ 1 }; col < row; ++col) {
            std::cout << " ";
        }

        for (int col { row }; col <= 10; ++col) {
            std::cout << "*";
        }

        // print spaces between patters (c) and (d)
        for (int col{ 1 }; col <= 5; ++col) {
            std::cout << " ";
        }

        // print row for pattern (d)
        for (int col { 1 }; col <= 10 - row; ++col) {
            std::cout << " ";
        }

        for (int col{ 11 - row }; col <= 10; ++col) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}
