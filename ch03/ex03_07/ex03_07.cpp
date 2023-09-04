/*
 * ex03_07.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.7  (Find the Largest)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    int counter{ 1 };
    int largest{ 0 };

    while (counter <= 10) {
        std::cout << "Enter a number:  ";
        int number{ 0 };
        std::cin >> number;

        if (counter == 1) {
            largest = number;
        }
        else {
            if (number > largest) {
                largest = number;
            }
        }

        ++counter;
    }

    std::cout << "The largest number entered was " << largest << std::endl;
}