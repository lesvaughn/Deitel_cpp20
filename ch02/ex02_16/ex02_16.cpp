/*
 * ex02_16.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 2.16 (Arithmetic, Smallest and Largest)
 *
 * les vaughn
 * Sep 2, 2023
 */

#include <iostream>

int main()
{
	double PI{3.14159};

	std::cout << "Enter the radius of a circle:  ";
	int radius{0};
	std::cin >> radius;

	std::cout << "\nDiameter is " <<  radius * 2;
	std::cout << "\nCircumference is " <<  2 * PI * radius;
	std::cout << "\nArea is " << PI * radius * radius << std::endl;
}