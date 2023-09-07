/*
 * ex05_09.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 5.9  (Multiples)
 *
 * les vaughn
 * Sep 7, 2023
 */

#include <iostream>
#include <cmath>
#include <format>

// function prototype
double hypotenuse(double s1, double s2);

int main()
{
    double t1_s1{ 0 };
    double t1_s2{ 0 };
    double t2_s1{ 0 };
    double t2_s2{ 0 };
    double t3_s1{ 0 };
    double t3_s2{ 0 };

    for (int i{ 1 }; i <=3; ++i) {
        switch(i) {
            case 1:
                std::cout << "Enter the length of the two sides of the first "
                          << "triangle:  ";
                std::cin >> t1_s1 >> t1_s2;
                break;

            case 2:
                std::cout << "Enter the length of the two sides of the second "
                          << "triangle:  ";
                std::cin >> t2_s1 >> t2_s2;
                break;

            case 3:
                std::cout << "Enter the length of the two sides of the third "
                          << "triangle:  ";
                std::cin >> t3_s1 >> t3_s2;
                break;

            default:
                std::cout << "Invalid triangle number!\n";
        }

    }

    // print headers
    std::cout << std::format("{0}{1:>8}{2:>8}{3:>12}\n", "Triangle",
        "Side 1", "Side 2", "Hypotenuse");

    std::cout << std::format("{:<10}{:<8.1f}{:<8.1f}{:<8.1f}\n", "1",
        t1_s1, t1_s2, hypotenuse(t1_s1, t1_s2));
    std::cout << std::format("{:<10}{:<8.1f}{:<8.1f}{:<8.1f}\n", "1",
        t2_s1, t2_s2, hypotenuse(t2_s1, t2_s2));
    std::cout << std::format("{:<10}{:<8.1f}{:<8.1f}{:<8.1f}\n", "1",
        t3_s1, t3_s2, hypotenuse(t3_s1, t3_s2));
}

double hypotenuse(double s1, double s2)
{
    return sqrt(s1 * s1 + s2 * s2);
}