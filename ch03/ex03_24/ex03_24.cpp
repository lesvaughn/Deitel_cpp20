/*
 * ex03_24.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.24  (Sides of a Right Triangle)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter three nonzero integers:  ";
    int s1{ 0 };
    int s2{ 0 };
    int s3{ 0 };
    std::cin >> s1 >> s2 >> s3;

    if (s1 * s1 + s2 * s2 == s3 * s3) {
        std::cout << "There integers could represent the sides of a "
                  << "right triangle\n";
    }
    else {
        std::cout << "There integers could not represent the sides of a "
                  << "right triangle\n";
    }
}
