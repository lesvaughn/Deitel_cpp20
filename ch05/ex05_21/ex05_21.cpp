/******************************************************************************
 * ex05_21.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.21  (Coin Tossing)                                              *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 8, 2023                                                                *
 *****************************************************************************/

#include <iostream>
#include <random>

// Function Prototype
int flip();

int main()
{
    int nbrTails{ 0 };
    int nbrHeads{ 0 };

    for (int i{ 1 }; i <= 100; ++i) {
        if (flip() == 0) {
            ++nbrTails;
            std::cout << "Tails\n";
        }
        else {
            ++nbrHeads;
            std::cout << "Heads\n";
        }
    }

    std::cout << "Tails - " << nbrTails << "\tHeads - " << nbrHeads << "\n";
}

int flip()
{
    static std::random_device rd;
    static std::default_random_engine engine{ rd() };
    static std::uniform_int_distribution randomFlip(0, 1);

    return randomFlip(engine);
}