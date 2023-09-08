/*
 * ex05_11.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 5.11  (Multiples)
 *
 * les vaughn
 * Sep 7, 2023
 */

#include <iostream>

// function prototype
bool isEven(int x);

int main()
{
    std::cout << "Ener an integer (-1 to quit):  ";
    int nbr{ 0 };
    std::cin >> nbr;

    while (nbr != -1) {
        if (isEven(nbr)) {
            std::cout << nbr << " is even." << std::endl;
        }
        else {
            std::cout << nbr << " is odd." << std::endl;
        }

        std::cout << "Enter an integer (-1 to quit):  ";
        std::cin >> nbr;
    }
}

bool isEven(int x)
{
    if (x % 2 == 0) {
        return true;
    }

    return false;
}
