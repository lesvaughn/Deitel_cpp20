/*
 * ex03_08.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.8  (Tabular Output)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    std::cout << "N\t10*N\t100*N\t1000*N\n\n";

    int nbr{ 1 };

    while (nbr <= 5) {
        std::cout << nbr << "\t" << 10 * nbr << "\t" << 100 * nbr << "\t"
                  << 1000 * nbr << "\n";

        ++nbr;
    }

    std::cout << std::endl;
}