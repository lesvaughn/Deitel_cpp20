/*
 * ex03_26_b.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.26 b)  (Enforcing Privacy with Cryptography)
 *
 * les vaughn
 * Sep 4, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter an encrypted number:  ";
    int e_nbr{ 0 };
    std::cin>> e_nbr;

    int digit1{ e_nbr / 1000 };
    int remainder{ e_nbr % 1000 };
    int digit2{ remainder / 100 };
    remainder %= 100;
    int digit3{ remainder / 10 };
    int digit4{ remainder % 10 };

    digit1 = (digit1 + 3) % 10;
    digit2 = (digit2 + 3) % 10;
    digit3 = (digit3 + 3) % 10;
    digit4 = (digit4 + 3) % 10;

    // swap the first digit with the thrird the second with the fourth
    int d_nbr{ digit3 * 1000 + digit4 * 100 + digit1 * 10 + digit2 };

    std::cout << "The number decrypted is " << d_nbr << std::endl;
}
