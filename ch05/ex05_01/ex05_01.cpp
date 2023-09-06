/*
 * ex05_01.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 5.1
 *
 * les vaughn
 * Sep 6, 2023
 */

#include <iostream>
#include <cmath>

int main()
{
    int x{ 0 };

    std::cout << "\na)  x = fabs(7.5);\n";
    x = fabs(7.5);
    std:: cout << x;

    std::cout << "\n\nb)  x = floor(7.5);\n";
    x = floor(-.5);
    std::cout << x;

    std::cout << "\n\nc)  x = fabs(0.0);\n";
    x = fabs(0.0);
    std::cout << x;

    std::cout << "\n\nd)  x = ceil(0.0);\n";
    x = ceil(0.0);
    std::cout << x;

    std::cout << "\n\ne)  x = fabs(-6.4);\n";
    x = fabs(-6.4);
    std::cout << x;

    std::cout << "\n\nf)  x = ceil(-6.4);\n";
    x = ceil(-6.4);
    std::cout << x;

    std::cout << "\n\ng)  x = ceil(-fabs(-8 + floor(-5.5)));\n";
    x = ceil(-fabs(-8 + floor(-5.5)));
    std::cout << x << std::endl;

}