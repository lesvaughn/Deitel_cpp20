/*
 * ex02_19.cpp
 *
 * Deitel - C++ How to Program 10/ed.
 *
 * Exercise 2.19 (Arithmetic, Smallest and Largest)
 * Write a program that inputs three integers from the keyboard and prints the
 * sum, average, product, smallest and largest of these numbers.
 *
 * les vaughn
 * Jul 29, 2023
 */
#include <iostream>
#include <fmt/format.h>

int main()
{
	fmt::print("Enter three integers:  ");
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

	fmt::print("Sum is {}\n", sum);
	fmt::print("Average is {}\n", average);
	fmt::print("Product is {}\n", product);
	fmt::print("Smallest is {}\n", smallest);
	fmt::print("Largest is {}\n", largest);
}