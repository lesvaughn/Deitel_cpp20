/*
 * ex03_04.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.4  (Credit Limits)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Enter account number (or -1 to quit):  ";
    int accountNumber{ 0 };
    std::cin >> accountNumber;

    while (accountNumber != -1) {
        std::cout << "Enter beginning balance:  ";
        double beginningBalance{ 0 };
        std::cin >> beginningBalance;

        std::cout << "Eneter total charges:  ";
        double totalCharges{ 0};
        std::cin >> totalCharges;

        std::cout << "Enter total credits:  ";
        double totalCredits{ 0 };
        std::cin >> totalCredits;

        std::cout << "Enter credit limit:  ";
        double creditLimit{ 0};
        std::cin >> creditLimit;

        double newBalance{ beginningBalance + totalCharges - totalCredits };
        std::cout << "New balance is " << std::fixed << std::setprecision(2)
                  << newBalance;

        if (newBalance > creditLimit) {
            std::cout << "\nAccount:\t" << accountNumber;
            std::cout << "\nCredit limit:\t" << creditLimit;
            std::cout << "\nBalance:\t" << newBalance;
            std::cout << "\nCredit Limit Exceeded";
        }

        std::cout << "\n\nEnter account number (or -1 to quit):  ";
        std::cin >> accountNumber;
    }
}