/******************************************************************************
 * ex05_26.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.26  (Towers of Hanoi)                                           *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 13, 2023                                                               *
 *****************************************************************************/

#include <iostream>

// Function Prototype
void towersOfHanoi(int nbrPegs, int startPeg, int destPeg, int tempPeg);

int main()
{
    towersOfHanoi(3, 1, 3, 2);
}

void towersOfHanoi(int nbrPegs, int startPeg, int destPeg, int tempPeg)
{
    if (nbrPegs == 1) {
        std::cout << startPeg << " -> " << destPeg << "\n";
    }
    else {
        towersOfHanoi(nbrPegs - 1, startPeg, tempPeg, destPeg);
        std::cout << startPeg << " -> " << destPeg << "\n";
        towersOfHanoi(nbrPegs - 1, tempPeg, destPeg, startPeg);
    }
}