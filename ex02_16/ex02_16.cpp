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
 * Jul 29, 2023
 */
#include <fmt/format.h>
#include <iostream>

int main()
{
	fmt::print("Enter two numbers:  ");
	int int1{0};
	int int2{0};
	std::cin >> int1 >> int2;

	int sum{int1 + int2};
	int product{int1 * int2};
	int difference{int1 - int2};
	int quotient{int1 / int2};

	fmt::print("Sum is {}\n", sum);
	fmt::print("Product is {}\n", product);
	fmt::print("Difference is {}\n", difference);
	fmt::print("Quotient is {}\n", quotient);
}