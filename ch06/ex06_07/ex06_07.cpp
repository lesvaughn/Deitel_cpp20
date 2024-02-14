/******************************************************************************
 * ex06_07.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 6.7 (Duplicate Elimination with array)                            *
 *                                                                            *
 * les vaughn                                                                 *
 * Feb 14, 2024                                                               *
 *****************************************************************************/

#include <iostream>
#include <array>

int main()
{
        constexpr size_t size{20};
        std::array <int, size> uniqueNumbers{};

        for (int cntr{1}; cntr <= 20; ++cntr) {
                std::cout << "Enter an integer between 10 and 100 inclusive:  ";
                int nbr{0};
                std::cin >> nbr;

                for (size_t pos{0}; pos < size; ++pos) {
                        if (uniqueNumbers.at(pos) == nbr) {
                                break;
                        }

                        if (uniqueNumbers.at(pos) == 0) {
                                uniqueNumbers.at(pos) = nbr;
                                break;
                        }
                }
        }

        for (const int& item : uniqueNumbers) {
                if (item == 0) {
                        break;
                }

                std::cout << item << "\n";
        }
}