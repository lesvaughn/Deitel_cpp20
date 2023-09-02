/*
 * ex02_18.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 2.18 (Largest and Smallest Integers)
 *
 * les vaughn
 * Sep 2, 2023
 */

#include <iostream>

int main()
{
	std::cout << "Enter five integers:  ";
	int int1{0};
	int int2{0};
	int int3{0};
	int int4{0};
	int int5{0};
	std::cin >> int1 >> int2 >> int3 >> int4 >> int5;

	int largest{int1};
	if (int2 > largest) { largest = int2; }
	if (int3 > largest) { largest = int3; }
	if (int4 > largest) { largest = int4; }
	if (int5 > largest) { largest = int5; }

	int smallest{int1};

	if (int2 < smallest) { smallest = int2; }	
	if (int3 < smallest) { smallest = int3; }
	if (int4 < smallest) { smallest = int4; }
	if (int5 < smallest) { smallest = int5; }

	std::cout << "\nLargest is " << largest;
	std::cout << "\nSmallest is " << smallest << std::endl;
}