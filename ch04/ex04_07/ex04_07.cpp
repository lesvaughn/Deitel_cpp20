/*
 * ex04_07.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.7  (Find the Smallest Value)
 *
 * les vaughn
 * Sep 4, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter the number of values to be input:  ";
    int nbrValues{ 0};
    std::cin >> nbrValues;

    int smallest{ 0 };

    for (int i{ 1 }; i <= nbrValues; ++i) {
        std::cout << "Enter an integer:  ";
        int nbr{ 0 };
        std::cin >> nbr;

        if (i == 1) {
            smallest = nbr;
            continue;
        }

        if (nbr < smallest) {
            smallest = nbr;
        }

    }

    std::cout << "The smallest integer entered was " << smallest << std::endl;
}