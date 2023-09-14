/******************************************************************************
 * ex05_37.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.37  (Pass-by-Value vs. Pass-by-Reference)                       *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 14, 2023                                                               *
 *****************************************************************************/

#include <iostream>

// Function Prototypes
int tripleByValue(int count);
int tripleByReference(int& countRef);

int main()
{
    std::cout << "Enter an integer:  ";
    int nbr{ 0 };
    std::cin >> nbr;

    std::cout << "Using tripleByValue:     " << tripleByValue(nbr);
    std::cout << "\nUsing tripleByReference: " << tripleByReference(nbr)
              << std::endl;
}

int tripleByValue(int count)
{
    return count * count * count;
}

int tripleByReference(int& countRef)
{
    return countRef * countRef * countRef;
}