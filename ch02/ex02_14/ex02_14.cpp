/*
 * ex02_14.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 2.14 (Comparing Integers)
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

	if (int1 > int2) { std::cout << int1 << " is larger."; }
    if (int2 > int1) { std::cout << int2 << " is larger."; }
    if (int1 == int2) { std::cout << "These numbers are equal."; }

    std::cout << std::endl;
}