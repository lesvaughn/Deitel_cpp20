/******************************************************************************
 * ex05_16.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.16  (Perfect Numbers)                                           *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 8, 2023                                                                *
 *****************************************************************************/

#include <iostream>

// Function Prototype
void isPerfect(int x);

int main()
{
    for (int i{ 2 }; i <= 1000; ++i) {
        isPerfect(i);
    }
}

void isPerfect(int x)
{
    int sumOfDivisors{ 1 };

    for (int i{ 2 }; i <= x / 2; ++i) {
        if (x % i == 0) {
            sumOfDivisors += i;
        }
    }

    if (sumOfDivisors == x) {
        for (int i{ 2 }; i <= x / 2; ++ i) {
            if (x % i == 0) {
                std::cout << i << " ";
            }
        }

        std::cout << " = " << x << "\n";
    }

}