/*
 * ex04_12.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.12  (Bar Charting Program)
 *
 * les vaughn
 * Sep 4, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter five integers between 1 and 30:  ";
    int int1{ 0 };
    int int2{ 0 };
    int int3{ 0 };
    int int4{ 0 };
    int int5{ 0 };
    std::cin >> int1 >> int2 >> int3 >> int4 >>int5;

    for (int i{ 1 }; i <= 5; ++i) {
        int max{ 0 };

        switch(i) {
            case 1:
                max = int1;
                break;

            case 2:
                max = int2;
                break;

            case 3:
                max = int3;
                break;

            case 4:
                max = int4;
                break;

            case 5:
                max = int5;
                break;

            default:
                std::cout << "Invalid case!" << "\n";
        }

        for (int col{ 1 }; col <= max; ++col) {
            std::cout << "*";
        }

        std::cout << "\n";
    }
}