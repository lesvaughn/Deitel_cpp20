/******************************************************************************
 * ex05_29.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.29  (Recursive Greatest Common Divisor)                         *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 13, 2023                                                               *
 *****************************************************************************/

#include <iostream>
#include <format>

// Function Prototype
int gcd(int x, int y);

int main()
{
    std::cout << "Enter two integers:  ";
    int int1{ 0 };
    int int2{ 0 };
    std::cin >> int1 >> int2;

    std::cout << "The greatest common divisor between " ;
    std::cout << std::format("{} and {} is {}\n", int1, int2, gcd(int1, int2));
}

int gcd(int x, int y)
{
    if (y== 0) {
        return x;
    }
    else {
        return gcd(y, x % y);
    }
}