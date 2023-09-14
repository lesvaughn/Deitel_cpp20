/******************************************************************************
 * ex05_36.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.36  (Circle Area)                                               *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 14, 2023                                                               *
 *****************************************************************************/

#include <iostream>
#include <numbers>

// Inline Function
inline double circleArea(double radius)
{
    return std::numbers::pi * radius * radius;
}

int main()
{
    std::cout << "Enter the radius of a circle:  ";
    double radius{ 0 };
    std::cin >> radius;

    std::cout << "The area of the circle is " << circleArea(radius)
              << std::endl;
}