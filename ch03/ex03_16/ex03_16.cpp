/*
 * ex03_16.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.16  (Square of Asterisks)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter the size of a square's side (1 - 20):  ";
    int size{ 0 };
    std::cin >> size;

    int row{ 1 };

    while (row <= size) {
        if (row == 1) {
            int col{ 1 };
            while (col <= size) {
                std::cout << "*";
                ++col;
            }
        }
        else if (row == size) {
            int col{ 1 };
            while (col <= size) {
                std::cout << "*";
                ++col;
            }
        }
        else{
            int col{ 1 };
            while (col <= size) {
                if (col == 1) {
                    std::cout << "*";
                }
                else if (col == size) {
                    std::cout << "*";
                }
                else {
                    std::cout << " ";
                }

                ++col;
            }
        }

        std::cout << std::endl;
        ++row;
    }
}