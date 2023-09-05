/*
 * ex04_13.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.13  (Calculating Sales)
 *
 * les vaughn
 * Sep 4, 2023
 */

#include <iostream>
#include <iomanip>

int main()
{
    double totalRetailValue{ 0 };

    std::cout << "Enter the product number (-1 to end):  ";
    int prodNbr{ 0 };
    std::cin >> prodNbr;

    while (prodNbr != -1) {
        std::cout << "Enter the quantity sold:  ";
        int quantitySold{ 0 };
        std::cin >> quantitySold;

        double retailValue{ 0 };

        switch (prodNbr) {
            case 1:
                retailValue = quantitySold * 2.98;
                break;

            case 2:
                retailValue = quantitySold * 4.50;
                break;

            case 3:
                retailValue = quantitySold * 9.98;
                break;

            case 4:
                retailValue = quantitySold * 4.49;
                break;

            case 5:
                retailValue = quantitySold * 6.87;
                break;

            default:
                std::cout << "Invalid product number!" << "\n";
        }

        totalRetailValue += retailValue;

        std::cout << "Enter the product number (-1 to end):  ";
        std::cin >> prodNbr;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nThe total retail value of all products sold was $"
              << totalRetailValue << std::endl;
}
