/******************************************************************************
 * ex05_24.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.24  (Recursive Exponentiation)                                  *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 10, 2023                                                               *
 *****************************************************************************/

#include <iostream>

// Function Prototype
int power(int base, int exponent);

int main()
{
    std::cout << "Enter a base number and it's  exponent:  ";
    int base{ 0 };
    int exponent{ 0 };
    std::cin >> base >> exponent;

    std::cout << base << " raised to the power of " << exponent << " is "
              << power(base, exponent) << std::endl;
}

int power(int base, int exponent)
{
    if (exponent == 1) {
        return base;
    }
    else {
        return base * power(base, exponent - 1);
    }
}