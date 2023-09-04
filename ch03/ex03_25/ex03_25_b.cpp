/*
 * ex03_25_b.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.25 b)  (Factorial)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter the number of terms to use in the summation:  ";
    int terms{ 0 };
    std::cin >> terms;

    double const_e = { 1 };
    int term{ 1 };

    while (term <= terms) {
        int divisor{ 1 };
        int multiplier{ 1 };

        while (multiplier <= term) {
            divisor *= multiplier;
            ++multiplier;
        }

        const_e += 1.0 / divisor;


        ++term;
    }

    std::cout << "The approximate value of the mathematical constant e "
              << "is " << const_e << std::endl;
}