/*
 * ex02_16.cpp
 *
 * Deitel - C++ How to Program 10/ed.
 *
 * Exercise 2.16 (Arithmetic)
 * Write a program that asks the user to enter two numbers, obtains the two
 * numbers from the user and prints the sum, product, difference, and quotient
 * of the two numbers.
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