/*
 * ex05_04.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 5.4  (Rounding Numbers)
 *
 * les vaughn
 * Sep 6, 2023
 */

#include <iostream>
#include <cmath>

// function prototypes
int roundToInteger(double number);
double roundToTenths(double number);
double roundToHundredths(double number);
double roundToThousandths(double number);

int main()
{
    std::cout << "Enter a floating-point number:  ";
    double nbr{ 0 };
    std::cin >> nbr;

    std::cout << "\nOriginal number:  " << nbr;
    std::cout << "\nRounded to the nearest integer:  " << roundToInteger(nbr);
    std::cout << "\nRounded to the nearest tenths:  " << roundToTenths(nbr);
    std::cout << "\nRounded to the nearest hundredths:  "
        << roundToHundredths(nbr);
    std::cout << "\nRounded to the nearest thousandths:  "
        << roundToThousandths(nbr) << std::endl;
}

int roundToInteger(double number)
{
    return static_cast<int>(floor(number + 0.5));
}

double roundToTenths(double number)
{
    return floor(number * 10 + 0.5) / 10;
}

double roundToHundredths(double number)
{
    return floor(number * 100 + 0.5) / 100;
}

double roundToThousandths(double number)
{
    return floor(number * 1000 + 0.5) / 1000;
}