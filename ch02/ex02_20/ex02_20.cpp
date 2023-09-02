/*
 * ex02_20.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 2.20  (Multiples)
 *
 * les vaughn
 * Sep 2, 2023
 */

#include <iostream>

int main()
{
	std::cout << "Enter two integers:  ";
	int int1{0};
	int int2{0};
	std::cin >> int1 >> int2;

	if (int1 % int2 == 0) {
		std::cout << int1 << " is a multiple of " << int2 << std::endl;
	}

	if (int1 % int2 != 0) {
		std::cout << int1 << " is not a multiple of " << int2 << std::endl;
	}
}