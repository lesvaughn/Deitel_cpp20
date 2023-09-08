/******************************************************************************
 * ex05_18.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.18  (Reverse Digits)                                            *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 8, 2023                                                                *
 *****************************************************************************/

#include <iostream>

int reverseDigits(int x);

int main()
{
    std::cout << "Enter a number between 1 and 32767:  ";
    int nbr{ 0 };
    std::cin >> nbr;

    std::cout << "The number reversed is " << reverseDigits(nbr) << std::endl;
}

int reverseDigits(int x)
{
    int reversedNbr{ 0 };

    while (x > 0) {
        int digit{ x % 10 };
        reversedNbr = reversedNbr * 10 + digit;
        x /= 10;
    }

    return reversedNbr;
}