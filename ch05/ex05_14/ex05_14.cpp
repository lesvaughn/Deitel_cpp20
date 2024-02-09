/******************************************************************************
 * ex05_14.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.14  (Celsius and Fahrenheit Temperatures)                       *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 8, 2023                                                                *
 *****************************************************************************/

#include <iostream>
#include <format>

/************************** Function Prototypes ******************************/
double celsius(int fahrenheit);
double fahrenheit(int celsius);
/*****************************************************************************/

int main()
{
    // print headers
    std::cout << std::format("{0}{1:>12}{2:>14}{3:>10}\n", "Celsius",
        "Fahrenheit", "Fahrenheit", "Celsius");

    for (int i{ 0 }; i <= 100; ++i) {
        std::cout << std::format("{:>7}{:>12.1f}{:>14}{:>10.1f}\n",
            i, fahrenheit(i), i + 32, celsius(i + 32));
    }

    for (int i{ 133 }; i <= 212; ++i) {
        std::cout << std::format("{:>33}{:>10.1f}\n", i, celsius(i));
    }
}

double celsius(int fahrenheit)
{
    return (static_cast<double>(fahrenheit) - 32) * 5 / 9;
}

double fahrenheit(int celsius)
{
    return static_cast<double>(celsius) * 9 / 5 + 32;
}
