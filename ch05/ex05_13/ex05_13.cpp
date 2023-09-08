/******************************************************************************
 * ex05_13.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.13  (Calculating Number of Seconds)                             *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 8, 2023                                                                *
 *****************************************************************************/

#include <iostream>
#include <cmath>

// Function Prototype
int nbrOfSecs(int h, int m, int s);


int main()
{
    std::cout << "Enter hours, minutes, and seconds for time 1 each " \
        "separated by spaces:  ";
    int hours1{ 0 };
    int minutes1{ 0 };
    int seconds1{ 0 };
    std::cin >> hours1 >> minutes1 >> seconds1;

    std::cout << "Enter hours, minutes, and seconds for time 2 each " \
        "by spaces:  ";
    int hours2{ 0 };
    int minutes2{ 0 };
    int seconds2{ 0 };
    std::cin >> hours2 >> minutes2 >> seconds2;

    std::cout << "The number os seconds between the two times is "
        << abs(nbrOfSecs(hours1, minutes1, seconds1)
                - nbrOfSecs(hours2, minutes2, seconds2)) << std::endl;

}

int nbrOfSecs(int h, int m, int s)
{
    return 60 * 60 * h + 60 * m + s;
}
