/*
 * ex03_25_a.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.25 a)  (Factorial)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enetr an integer:  ";
    int nbr{ 0 };
    std::cin >> nbr;

    int multiplier{ nbr };
    int factorial{ 1 };

    while (multiplier > 1) {
        factorial *= multiplier;
        --multiplier;
    }

    std::cout << nbr <<"! = " << factorial << std::endl;
}