/******************************************************************************
 * ex05_17.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.17  (Prime Numbers)                                             *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 8, 2023                                                                *
 *****************************************************************************/

#include <iostream>
#include <cmath>

// Function Prototype
bool isPrime(int x);

int main()
{
    for (int i { 2 }; i <= 10'000; ++i) {
        if (isPrime(i) == true) {
            std::cout << i << "\n";
        }
    }
}

bool isPrime(int x)
{
    for (int i{ 2 }; i <= sqrt(x); ++i) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}