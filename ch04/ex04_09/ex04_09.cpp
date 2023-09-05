/*
 * ex04_09.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.9  (Factorials)
 *
 * les vaughn
 * Sep 4, 2023
 */

#include <iostream>

int main()
{
    long int factorial{ 1 };

    for (int i{ 1 }; i <= 20; ++i){
        factorial *= i;
        std::cout << i << "!\t" << factorial << "\n";
    }
}