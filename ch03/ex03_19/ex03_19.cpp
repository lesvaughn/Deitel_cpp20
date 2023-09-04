/*
 * ex03_19.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.19  (Checkerboard Pattern of Asterisks)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    int row = 1;

    while (row <= 8) {
        int col{ 1 };

        if (row % 2 == 0) {
            std::cout << " ";
        }

        while (col <= 8) {
            std::cout << "* ";
            ++col;
        }

         std::cout << "\n";
        ++row;
    }


}