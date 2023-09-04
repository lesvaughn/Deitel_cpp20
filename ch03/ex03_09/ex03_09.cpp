/*
 * ex03_09.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.9  (Find the Two Largest Numbers)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    int counter{ 1 };
    int largest;
    int secondLargest;

    while (counter <= 10) {
        std::cout << "Enter a number:  ";
        int nbr{ 0 };
        std::cin >> nbr;

        if (counter == 1) {
            largest = nbr;
        }
        else if (counter == 2) {
            if (nbr > largest) {
                secondLargest = largest;
                largest = nbr;
            }
            else {
                secondLargest = nbr;
            }
        }
        else {
            if (nbr > largest) {
                secondLargest = largest;
                largest = nbr;
            }
            else {
                if (nbr > secondLargest) {
                    secondLargest = nbr;
                }
            }
        }

        ++counter;
    }

    std::cout << "The largest number entered was " << largest << std::endl;
}