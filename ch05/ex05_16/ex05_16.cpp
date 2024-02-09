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
        int factors[100] = { 0 };
        size_t pos{ 0 };
        int sumOfDivisors{ 0 };

        for (int i{ 1 }; i <= x / 2; ++i) {
                if (x % i == 0) {
                        sumOfDivisors += i;
                        factors[pos] = i;
                        ++pos;
                }
        }

        if (sumOfDivisors == x) {
                for (size_t j{ 0 }; j <= 10; ++j) {
                        if (factors[j] == 0) {
                                break;
                        }
                        
                        std::cout << factors[j] << "  ";
                }

                std::cout << "->  " << x << "\n";
        }

}