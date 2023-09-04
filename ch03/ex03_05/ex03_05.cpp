/*
 * ex03_05.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.5  (Sales-Commission Calculator)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Enter sales in dollars (-1 to end):  ";
    double sales{ 0 };
    std::cin >> sales;

    while (static_cast<int>(sales) != -1) {
        double salary{ 200 + .09 * sales };
 
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Salary is:  $" << salary;

        std::cout << "\n\nEnter sales in dollars (-1 to end):  ";
        std::cin >> sales;
    }
}