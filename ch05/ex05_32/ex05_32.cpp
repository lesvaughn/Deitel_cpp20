/******************************************************************************
 * ex05_32.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.32  (Distance Between Points)                                   *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 13, 2023                                                               *
 *****************************************************************************/

#include <iostream>
#include <cmath>

// Function Prototype
int mystery(int, int);

int main()
{
    std::cout << "Enter two integers:  ";
    int x{ 0 };
    int y{ 0 };
    std::cin >> x >> y;

    std::cout << mystery(x, y) << std::endl;
}

int mystery(int a, int b)
{
   if (b == 0) {
		return 0;
	}

	if ( b > 0) {
		if (1 == b) {
			return a;
		}
		else {
			return a + mystery(a, b - 1);
		}
	}
	else {
		if (-1 == b) {
			return a;
		}
		else {
			return a + mystery(a, b + 1);
		}
	}
}