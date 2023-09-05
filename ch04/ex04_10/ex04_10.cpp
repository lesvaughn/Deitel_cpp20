/*
 * ex04_10.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.10  (Modified Compount Interest Program)
 *
 * les vaughn
 * Sep 4, 2023
 */

#include <boost/multiprecision/cpp_dec_float.hpp>
#include <format>
#include <iostream>
#include "decimalformatter.h"

//using boost::multiprecision::cpp_dec_float_50;

int main()
{
    boost::multiprecision::cpp_dec_float_50 principal{ 1000 };
    boost::multiprecision::cpp_dec_float_50 rate{ "0" } ;

    for (int i{ 5 }; i <= 10; ++i) {
        rate = static_cast<double>(i) / 100;

        std::cout << std::format("\n\nInitial principal: {:>7}\n", principal)
             << std::format("    Interest rate: {:>7}\n\n", rate);

         // display headers
        std::cout << std::format("{}{:>20}\n", "Year", "Amount on deposit");

        // calculate amount on deposit for each of 10 years
        for (int year{1}; year <= 10; ++year) {
            boost::multiprecision::cpp_dec_float_50 amount{
                principal * pow(1 + rate, year)};

            std::cout << std::format("{:>4}{:>20}\n", year, amount);
        }

    }
}
