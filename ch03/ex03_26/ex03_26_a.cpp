/*
 * ex03_26_a.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.26 a)  (Enforcing Privacy with Cryptography)
 *
 * les vaughn
 * Sep 4, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter a four-digit integer:  ";
    int nbr{ 0 };
    std::cin >> nbr;

    int digit1{ nbr / 1000 };
    int remainder{ nbr % 1000};
    int digit2{ remainder / 100 };
    remainder %= 100;
    int digit3{ remainder / 10 };
    int digit4{ remainder % 10 };

    std::cout << digit1 << digit2 << digit3 << digit4 << std::endl;

    digit1 = (digit1 + 7) % 10;
    digit2 = (digit2 + 7) % 10;
    digit3 = (digit3 + 7) % 10;
    digit4 = (digit4 + 7) % 10;

     std::cout << digit1 << digit2 << digit3 << digit4 << std::endl;
    // swap first digit with third and second digit with fourth
    int e_nbr{ digit3 * 1000 + digit4 * 100 + digit1 * 10 + digit2 };

    std::cout << "The number encrypted is " << e_nbr << std::endl;
}



