/*
 * ex04_16.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.16  (Pythagorean Triples)
 *
 * les vaughn
 * Sep 4, 2023
 */

#include <iostream>
#include <format>

int main()
{
    std::cout << std::format("{}{:>8}{:>12}\n", "Side1", "Side2", "Hypotenuse");
    for (int side1{ 1 }; side1 <= 500; ++side1) {
        for (int side2 { 1 }; side2 <= 500; ++side2) {
            for (int hypotenuse{ 1 }; hypotenuse <= 500; ++hypotenuse) {
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    std::cout << std::format("{:>5d}{:>8d}{:>12d}\n",
                        side1, side2, hypotenuse);
                }
            }
        }
    }
}