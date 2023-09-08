/******************************************************************************
 * ex05_19.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.19  (Greatest Common Divisor)                                   *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 8, 2023                                                                *
 *****************************************************************************/

#include <iostream>

// Function Prototype
int gcd(int x, int y);

int main()
{
    std::cout << "Enter two integers:  ";
    int int1{ 0 };
    int int2{ 0 };
    std::cin >> int1 >> int2;

    std::cout << "The greatest common divisor is " << gcd(int1, int2) << "\n";
}

int gcd(int x, int y)
{
    int min{ x };
    int gcd{ 1 };

    if (y < min) { min = y; }

    for (int divisor{ 2 }; divisor <= min; ++divisor) {
        if (x % divisor == 0 && y % divisor == 0) {
            gcd = divisor;
        }
    }

    return gcd;
}