/******************************************************************************
 * ex06_06.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 6.6 (Salesperson Salary Range)                                    *
 *                                                                            *
 * les vaughn                                                                 *
 * Feb 14, 2024                                                               *
 *****************************************************************************/

#include <iostream>
#include <array>
#include <format>

int main()
{
        constexpr size_t arraySize{11};
        std::array <int, arraySize> salaryRanges{};

        std::cout << "Enter the salesperson's weekly gross sales (-1 to quit):  ";
        int grossSales{0};
        std::cin >> grossSales;

        while (grossSales != -1) {
                int salary = 200 + static_cast<int>(.09 * grossSales);

                if (salary >= 1099) {
                        salary = 1000;
                }
                ++salaryRanges.at(salary / 100);

                std::cout << "Enter the salesperson's weekly gross sales (-1 to quit):  ";
                std::cin >> grossSales;
        }

        std::cout << std::format("\n{}{:>12}\n", "Salary Range", "Number");

        for (size_t range{2}; range < arraySize - 1; ++ range) {
                std::cout << std::format("{}{:>d}00-{:>d}99{:>11d}\n", "$",
                        range, range, salaryRanges.at(range));
        }

        std::cout << std::format("{}{:>5d}\n", "$1000 and over", salaryRanges.at(10));
}