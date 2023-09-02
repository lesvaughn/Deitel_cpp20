/*
 * ex02_12.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 * Exercise 2.12 (Arithmetic)
 * 
 * les vaughn
 * Sep 2, 2023
 */

#include <iostream>

int main()
{
	std::cout << "Enter two numbers:  ";
	int int1{0};
	int int2{0};
	std::cin >> int1 >> int2;

	int sum{int1 + int2};
	int product{int1 * int2};
	int difference{int1 - int2};
	int quotient{int1 / int2};

	std::cout << "\nSum is " << sum;
	std::cout << "\nProduct is " << product;
	std::cout << "\nDifference is " << difference;
	std::cout << "\nQuotient is " << quotient<< std::endl;
} 