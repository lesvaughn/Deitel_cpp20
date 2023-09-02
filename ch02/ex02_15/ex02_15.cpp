/*
 * ex02_15.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 2.15 (Arithmetic, Smallest and Largest)
 *
 * les vaughn
 * Sep 2, 2023
 */

#include <iostream>

int main()
{
	std::cout << "Enter three integers:  ";
	int int1{0};
	int int2{0};
	int int3{0};
	std::cin >> int1 >> int2 >> int3;

	int sum{int1 + int2 + int3};
	int average{sum / 3};
	int product{int1 * int2 * int3};

	int smallest{int1};
	if (int2 < smallest) { smallest = int2; }
	if (int3 < smallest) { smallest = int3; }

	int largest{int1};
	if (int2 > largest) { largest = int2; }
	if (int3 > largest) { largest = int3; }

	std::cout << "\nSum is " << sum;
	std::cout << "\nAverage is " << average;
	std::cout << "\nProduct is " << product;
	std::cout << "\nSmallest is " << smallest;
	std::cout << "\nLargest is " << largest << std::endl;
}