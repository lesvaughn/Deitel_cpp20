/*
 * ex04_08.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.8  (Calculating the Product of Odd Integers)
 *
 * les vaughn
 * Sep 4, 2023
 */

#include <iostream>

int main()
{
    int total{ 1 };

    for (int i{ 1 }; i <= 15; i += 2) {
        total *= i;
    }

    std::cout << "The product of the odd integers from 1 to 15 is "
              << total << std::endl;
}