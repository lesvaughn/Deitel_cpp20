/******************************************************************************
 * ex05_20.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.20  (Quality Points for Numeric Grades)                         *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 8, 2023                                                                *
 *****************************************************************************/

#include <iostream>

// Function Prototype
int qualityPoints(int average);

int main()
{
    std::cout << "Enter the student's average:  ";
    int average{ 0 };
    std::cin >> average;

    std::cout << "Quaility points earned is " << qualityPoints(average)
              << std::endl;
}

int qualityPoints(int average)
{
    if (average >= 90) {
        return 4;
    }

    if (average >= 80) {
        return 3;
    }
    
    if (average >= 70) {
        return 2;
    }
    
    if (average >= 60) {
        return 1;
    }
    
    return 0;
}