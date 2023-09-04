/*
 * ex03_10.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.10  (Validating User Input)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    int passes{0};
    int failures{0};
    int studentCounter{1};

    while (studentCounter <= 10) {
        std::cout << "Enter result (1 = pass, 2 = fail): ";
        int result;
        std::cin >> result;

        if (result == 1) {
            ++passes;
            ++studentCounter;
        }
        else if (result == 2) {
            ++failures;
            ++studentCounter;
        }
        else {
            std::cout << "Invalid input - try again.\n";
        }
    }

    std::cout << "Passed: " << passes << "\nFailed: " << failures << "\n";

    if (passes > 8) {
        std::cout << "Bonus to instructor!\n";
    }

}
