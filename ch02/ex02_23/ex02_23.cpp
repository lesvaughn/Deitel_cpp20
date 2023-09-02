/*
 * ex02_23.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 2.23  (Digits of an Integer)
 *
 * les vaughn
 * Sep 2, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter a five-digit integer:  ";
    int nbr{0};
    std::cin >> nbr;

    int digit1{nbr / 10000};
    int remainder{nbr % 10000};
    int digit2{remainder / 1000};
    remainder = remainder % 1000;
    int digit3{remainder / 100};
    remainder = remainder % 100;
    int digit4{remainder / 10};
    int digit5{remainder % 10};

    std::cout << digit1 << "   " << digit2 << "   " << digit3 << "   "
              << digit4 << "   " << digit5 << std::endl;
}