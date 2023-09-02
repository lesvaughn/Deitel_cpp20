/*
 * ex02_22.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 2.22  (Integer Equivalent of a Character)
 *
 * les vaughn
 * Sep 2, 2023
 */

#include <iostream>

int main()
{
    std::cout << "A - " << static_cast<int>('A');
    std::cout << "\nB - " << static_cast<int>('B');
    std::cout << "\nC - " << static_cast<int>('C');
    std::cout << "\na - " << static_cast<int>('a');
    std::cout << "\nb - " << static_cast<int>('b');
    std::cout << "\nc - " << static_cast<int>('c');
    std::cout << "\n1 - " << static_cast<int>('1');
    std::cout << "\n2 - " << static_cast<int>('2');
    std::cout << "\n3 - " << static_cast<int>('3');
    std::cout << "\n! - " << static_cast<int>('!');
    std::cout << "\n  - " << static_cast<int>(' ');
    std::cout << "\n$ - " << static_cast<int>('$') << std::endl;

}