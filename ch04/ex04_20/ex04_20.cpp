/*
 * ex04_20.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.20  (Diamond-Printing Program)
 * les vaughn
 * Sep 5, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter an odd integer between 1 and 19:  ";
    int size{ 0 };
    std::cin >> size;

    int mid{ (size + 1) / 2 };

    for (int row{ 1 }; row <= mid; ++row) {
        for (int col{ 1 }; col <= size; ++col) {
            if (col <= mid - row || col >= row + mid) {
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }
        }

        std::cout << std::endl;
    }

    for (int row{ mid + 1 }; row <= size; ++row) {
        for (int col{ 1 }; col <= size; ++col) {
            if (col <= row - mid || col > size - row + mid) {
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }
        }

        std::cout << std::endl;
    }
}