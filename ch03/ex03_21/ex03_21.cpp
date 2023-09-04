/*
 * ex03_21.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.21  (Calculating a Circle's Diameter, Circumference and Area)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    double PI{ 3.14159 };

    std::cout << "Enter the radius of a circle:  ";
    double radius{ 0 };
    std::cin >> radius;

    double diameter{ radius * 2 };
    double circumference{ 2 * PI * radius };
    double area{ PI * radius * radius };

    std::cout << "\nDiameter is " << diameter;
    std::cout << "\nCircumference is " << circumference;
    std::cout << "\nArea is " << area << std::endl;
}