/******************************************************************************
 * ex05_30.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.20  (Distance Between Points)                                   *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 13, 2023                                                               *
 *****************************************************************************/

#include <iostream>
#include <cmath>

// Function Prototype
double distance(double x1, double y1, double x2, double y2);

int main()
{
    std::cout << "Enter the coordinates for point 1:  ";
    double x1{ 0 };
    double y1{ 0 };
    std::cin >> x1 >> y1;

    std::cout << "Enter the coordinates for point 2:  ";
    double x2{ 0 };
    double y2{ 0 };
    std::cin >> x2 >> y2;

    std::cout << "The distance between the two points is ";
    std::cout << distance(x1, y1, x2, y2) << std::endl;

}

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
