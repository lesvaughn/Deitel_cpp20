/*
 * ex05_08.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 5.8  (Exponentiation)
 *
 * les vaughn
 * Sep 7, 2023
 */

#include <iostream>

// function prototype
long int integerPower(int base, int exponent);

int main()
{
    std::cout << "Enter the base number and exponent:  ";
    int base{ 0 };
    int power{  0 };
    std::cin >> base >> power;

    std::cout << base << " to the " << power << " power is "
        << integerPower(base, power) << std::endl;
}

long int integerPower(int base, int exponent)
{
    long int result{ 1 };

    for (int i{ 1 }; i <= exponent; ++i) {
        result *= base;
    }

    return result;
}
