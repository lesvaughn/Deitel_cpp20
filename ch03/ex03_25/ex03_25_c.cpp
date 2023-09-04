/*
 * ex03_25_c.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.25 c)  (Factorial)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter the power of e:  ";
    int power{ 0 };
    std::cin >> power;

    std::cout << "Enter the number of terms to use in the summation:  ";
    int nbrTerms{ 0 };
    std::cin >> nbrTerms;

    double e_to_x{ 1 };
    int term{ 1 };

    while (term <= nbrTerms) {
        long int numerator{ 1 };
        long int denominator{ 1 };
        int multiplier{ 1 };

        while (multiplier <= term) {
            numerator *= power;
            denominator *= multiplier;
            ++multiplier;

        }

        e_to_x += static_cast<double>(numerator) / denominator;
        ++term;
    }

    std::cout << "The approximate value of e to the power of " << power
              << " is " << e_to_x << std::endl;
}