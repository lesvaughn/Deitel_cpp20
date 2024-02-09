/******************************************************************************
 * ex05_31.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.31                                                              *
 *                                                                            *
 * les vaughn                                                                 *
 * Feb 9, 2024                                                                *
 *****************************************************************************/

#include <iostream>

// function prototype
int mystery(int, int);

int main()
{
        std::cout << "Enter two integers:  ";
        int x{ 0 };
        int y{ 0 };
        std::cin >> x >> y;

        std::cout << "The result is " << mystery(x, y) << std::endl;
}

int mystery(int a, int b)
{
        if (1 == b) {
                return a;
        }
        else {
                return a + mystery(a, b - 1);
        }
}