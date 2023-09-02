/*
 * ex02_20.cpp
 *
 * Deitel - C++ How to Program 10/ed.
 *
 * Exercise 2.20 (Diameter, Circumference and Area of a Circle)
 * Write a program that reads in the radius of a circle as an integer and
 * prints the circle’s diameter, circumference and area. Use the constant value
 * 3.14159 for π. Do all calculations in output statements.
 *
 * les vaughn
 * Jul 29, 2023
 */
#include <iostream>
#include <fmt/format.h>

int main()
{
	float PI{3.14159};

	fmt::print("Enter the radius of a circle:  ");
	int radius{0};
	std::cin >> radius;

	fmt::print("Diameter is {}\n", radius * 2);
	fmt::print("Circumference is {}\n", 2 * PI * radius);
	fmt::print("Area is {}\n", PI * radius * radius);
}