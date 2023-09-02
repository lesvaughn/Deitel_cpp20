/*
 * ex02_19.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 2.198 (Odd or Even.)
 *
 * les vaughn
 * Sep 2, 2023
 */

#include <iostream>

int main()
{
	std::cout << "Enter an integer:  ";
	int int1{0};
	std::cin >> int1;

	if (int1 % 2 == 0) { 
		std::cout << int1 << " is even." << std::endl; 
	}

	if (int1 % 2 != 0) { 
		std::cout << int1 << " is odd." << std::endl; 
	}
}