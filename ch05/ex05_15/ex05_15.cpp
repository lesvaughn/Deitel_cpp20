/******************************************************************************
 * ex05_15.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.15  (Find the Minimum)                                          *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 8, 2023                                                                *
 *****************************************************************************/

#include <iostream>

// Function Prototype
double minimum(double x,double y, double z);

int main()
{
    std::cout << "Enter three floating-point numbers:  ";
    double num1{ 0 };
    double num2{ 0 };
    double num3{ 0 };
    std::cin >> num1 >> num2 >> num3;

    std::cout << "The minimum number entered was "
              << minimum(num1, num2, num3) << std::endl;
}

double minimum(double x, double y, double z)
{
    double min{ x };

    if (y < min) { min = y; }
    if (z < min) { min = z; }

    return min;
}