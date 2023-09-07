/*
 * ex05_10.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 5.10  (Multiples)
 *
 * les vaughn
 * Sep 7, 2023
 */

#include <iostream>

// function prototype
bool isMultiple(int x, int y);

int main()
{
    for (int i{ 1 }; i <= 5; ++i) {
        std::cout << "\nEnter two integers:  ";
        int int1{ 0 };
        int int2{ 0 };
        std::cin>> int1 >> int2;

        if (isMultiple(int1, int2)) {
            std::cout << int2 << " is a multiple of " << int1 << std::endl;
        }
        else {
            std::cout << int2 << " is not a multiple of " << int1 << std::endl;
        }

    }
}

bool isMultiple(int x, int y)
{
    if (y % x == 0) {
        return true;
    }

    return false;
}