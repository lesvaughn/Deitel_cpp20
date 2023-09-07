/*
 * ex05_07.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 5.7  (Random Numbers)
 *
 * les vaughn
 * Sep 7, 2023
 */

#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::default_random_engine engine{ rd() };
    std::uniform_int_distribution random{ 1, 5 };

    std::cout << "\na)\t2, 4, 6, 8, 10\n";
    std::cout << "\t" << random(engine) * 2;

    std::cout << "\nb)\t3, 5, 7, 9, 11\n";
    std::cout << "\t" << random(engine) * 2 + 1;

    std::cout << "\nc)\t6, 10, 14, 18, 22\n";
    std::cout << "\t" << (random(engine) * 2 + 1) * 2;

    std::cout << std::endl;
}