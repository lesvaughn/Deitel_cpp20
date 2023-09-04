/*
 * ex03_17.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.17  (Palindromes)
 *
 * les vaughn
 * Sep 3, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter a five-digit integer:  ";
    int nbr{ 0};
    std::cin >> nbr;

    int digit1{ nbr / 10000 };
    int remainder{ nbr % 10000 };
    int digit2{ remainder / 1000 };
    remainder %= 100;
    int digit4{ remainder / 10 };
    int digit5{ remainder % 10 };

    if (digit1 == digit5) {
        if (digit2 == digit4) {
            std::cout << nbr << " is a palindrome.\n";
        }
        else {
            std::cout << nbr << " is not a palindrome.\n";
        }
    }
    else {
        std::cout << nbr << " is not a palindrome.\n";
    }
}