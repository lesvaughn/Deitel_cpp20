/*
 * ex03_03.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.3  (Table)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    int totalMilesDriven{ 0 };
    int totalGallonsUsed{ 0 } ;
 
    std::cout << "Enter miles driven (-1 to quit):  ";
    int milesDriven{0};
    std::cin >> milesDriven;

    while (milesDriven != -1) {
        totalMilesDriven += milesDriven;

        std::cout << "Enter gallons used:  ";
        int gallonsUsed{0};
        std::cin >> gallonsUsed;

        totalGallonsUsed += gallonsUsed;

        std::cout << "MPG this trip:  " 
                  << static_cast<double>(milesDriven) / gallonsUsed;
        std::cout << "\nTotal MPG:  " 
                  << static_cast<double>(totalMilesDriven) / totalGallonsUsed
                  << "\n" << std::endl;

        std::cout << "Enter miles driven (-1 to quit):  ";
        std::cin >> milesDriven;
    }
}