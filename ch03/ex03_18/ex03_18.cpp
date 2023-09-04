/*
 * ex03_18.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.18  (Printing the Decimal Equivalent of a Binary Number)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter a binary number:  ";
    int binaryNbr{ 0 };
    std::cin >> binaryNbr;

    int positionalValue{ 1 };
    int decimalValue{ 0 };
    int binary{ binaryNbr };

    while (binary > 0) {
        if (binary % 10 != 0) {
            decimalValue += positionalValue;
        }

        positionalValue *= 2;
        binary /= 10;
    }

    std::cout << "The binary value is " << decimalValue << std::endl;

}
