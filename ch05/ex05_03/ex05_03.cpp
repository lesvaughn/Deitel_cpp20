/*
 * ex05_03.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 5.3  (Rounding Numbers)
 *
 * les vaughn
 * Sep 6, 2023
 */

#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a floating-point number (-1 to quit):  ";
    double nbr{ 0 };
    std::cin >> nbr;

    while (static_cast<int>(nbr) != -1) {
        std::cout << nbr << " rounded is " << floor(nbr + 0.5);

        std::cout << "\n\nEnter a floating-point number (-1 to quit):  ";
        std::cin >> nbr;
    }
}