/*
 * ex04_23.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.23  (Replacing continue with a Structured Equivalent)
 *
 * les vaughn
 * Sep 5, 2023
 */

#include <iostream>

int main()
{
    for (int count{ 1 }; count <=10; ++count) {
        if (count != 5) {
            std::cout << count << " ";
        }
    }

    std::cout << "\nUsed a structured equivalent to skip printing 5.\n";
}
