/*
 * ex02_18.cpp
 *
 * Deitel - C++ How to Program 10/ed.
 *
 * Exercise 2.18 (Comparing Integers)
 * Write a program that asks the user to enter two integers, obtains the
 * numbers from the user, then prints the larger number followed by the words
 * "is larger." If the numbers are equal, print the message "These numbers are
 * equal . "
 *
 * les vaughn
 * Jul 29, 2023
 */
#include <iostream>
#include <fmt/format.h>

int main()
{
	fmt::print("Enter two integers:  ");
	int int1{0};
	int int2{0};
	std::cin >> int1 >> int2;

	if (int1 > int2)	{ fmt::print("{} is larger.\n", int1); }
	if (int2 > int1)	{ fmt::print("{} is larger.\n", int2); }
	if (int1 == int2)	{ fmt::print("These numbers are equal.\n"); }
}