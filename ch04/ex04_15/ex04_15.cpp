/*
 * ex04_15.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.15  (Calculating the Value of π)
 *
 * les vaughn
 * Sep 4, 2023
 */

#include <iostream>
#include <iomanip>

int main()
{
    double pi{0};
    int divisor{ 1 };
    int multiplier{ 1 };
    bool found_314159{ false };
    int nbrTerms{ 0 };

    std::cout << std::fixed << std::setprecision(15);

    std::cout << "Accuracy set at:  200000" << "\n\n";
    std::cout << "term\tpi\n";

    for (int i{1}; i <= 200000; ++i) {
        pi += 4.0 / divisor * multiplier;
        std::cout << i << "\t" << pi << "\n";
        divisor += 2;
        multiplier *= -1;

        if (found_314159 == false) {
            if (pi >= 3.14159 && pi < 3.1416) {
                nbrTerms = i;
                found_314159 = true;
            }
        }
    }

    std::cout << "A value beginning with 3.14159 was found after " << nbrTerms
              << " terms." << std::endl;
}