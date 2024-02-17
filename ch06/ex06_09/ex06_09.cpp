/******************************************************************************
 * ex06_09.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 6.9 (Two-Dimensional array Initialization)                        *
 *                                                                            *
 * les vaughn                                                                 *
 * Feb 17, 2024                                                               *
 *****************************************************************************/

#include <iostream>
#include <array>

int main()
{
	constexpr size_t rows{3};
	constexpr size_t cols{5};
	std::array<std::array<int, cols>, rows> sales{};

	for (size_t row{0}; row < sales.size(); ++row) {
		for (size_t col{0}; col < sales[row].size(); ++ col) {
			sales[row][col] = 0;
			std::cout << "row - " << row << "   col - " << col << "\n";
		}
	}
}