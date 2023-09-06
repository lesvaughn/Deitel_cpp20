/*
 * ex04_25.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.25  (Replacing continue with a Structured Equivalent)
 *
 * les vaughn
 * Sep 5, 2023
 */

#include <iostream>
#include <format>
#include <cmath>

int main()
{
    double principal{24.00};
    std::cout << std::format("Initial principal: {:>7.2f}\n", principal);

    // display headers
    //std::cout << std::format("\n{}{:>20}\n", "Year",  "Amount on deposit");

    for (int integerRate{5}; integerRate <= 10; ++integerRate) {
        double amount{ 0 };
        double rate{ static_cast<double>(integerRate) / 100 };
        for (int year{1}; year <= 397; ++year) {
            // calculate amount on deposit at the end of the specified year
            amount = principal * pow(1.0 + rate, year);

            // display the year and the amount
            //std::cout << std::format("{:>4d}{:>20.2f}\n", year, amount);
        }

        // display the final amount
        std::cout << std::format("Interest rate:{:>5.2f}\n", rate);
        std::cout << std::format("Total amount:  {:<30.2f}\n\n", amount);
    }
}

