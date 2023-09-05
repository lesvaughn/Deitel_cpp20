/*
 * ex04_21.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.21  (Removing Break and Continue)
 * les vaughn
 * Sep 5, 2023
 */

#include <iostream>

int main()
{
    int count = 1;

    for (; count <= 10 && count != 5; count++) {
        std::cout << count << " ";
    }

    std::cout << "Broke out of loop at count " << count << std::endl;
}
