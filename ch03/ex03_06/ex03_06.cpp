/*
 * ex03_06.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.6  (Salary Calculator)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Enter hours worked (-1 to end):  ";
    int hoursWorked{ 0 };
    std::cin >> hoursWorked;

    while (hoursWorked != -1) {
        std::cout << "Enter the hourly rate of the employee:  ";
        double hourlyRate{ 0 };
        std::cin >> hourlyRate;

        double salary{ 0 };

        if (hoursWorked <= 40) {
            salary = hoursWorked * hourlyRate;
        }
        else {
            salary = (40 * hourlyRate) + 
                     ((hoursWorked - 40) * hourlyRate * 1.5);
        }

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Salary is $" << salary;

        std::cout << "\n\nEnter hours worked (-1 to end):  ";
        std::cin >> hoursWorked;

    }


}