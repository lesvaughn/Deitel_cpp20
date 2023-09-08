/*
 * ex05_12.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 5.12  (Separating Digits)
 *
 * les vaughn
 * Sep 8, 2023
 */

#include <iostream>

// function prototypes
void separateDigits(int x);

int main()
{
    std::cout << "Enter an integer between 1 and 32767:  ";
    int nbr{ 0 };
    std::cin >> nbr;

    separateDigits(nbr);
}

void separateDigits(int x)
{
    bool foundFirstDigit{ false };

    for (int divisor{ 10000 }; divisor >= 1; divisor /= 10) {
        int digit{ x / divisor };

        if (digit > 0) {
            foundFirstDigit = true;
        }

        if (foundFirstDigit == true) {
            std::cout << digit << "  ";
        }

        x %= divisor;
    }

    std::cout << std::endl;
}
