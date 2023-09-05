/*
 * ex04_18.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.18  (Modified Triangle-Printing Program)
 *
 * les vaughn
 * Sep 5, 2023
 */

#include <iostream>

int main()
{
    int x{ 5};
    int y{ 10 };
    int a{ 1 };
    int b{ 1 };
    int g{ 3 };
    int i{ 5 };
    int j{ 4 };

    std::cout << "a)\tExpression is  !(x < 5) && !(y >= 7)\n";
    std::cout << "\tResult is:  " << (!(x < 5) && !(y >= 7));
    std::cout << "\n\tUse expression !(x < 5 || y >= 7)";
    std::cout << "\n\tResult is:  " << !((x < 5) || (y >= 7));

    std::cout << "\n\nb)\tExpression is !(a == b) || !(g != 5)\n";
    std::cout << "\tResult is:  " << !(a == b) || !(g != 5);
    std::cout << "\n\tUse expression !((a == b) && (g != 5))";
    std::cout << "\n\tResult is:  " << !((a == b) && (g != 5));

    std::cout << "\n\nc)\tExpression is !(x <= 8) && (y > 4))\n";
    std::cout << "\tResult is:  " << (!(x <= 8) && (y > 4));
    std::cout << "\n\tUse expression (!(x <= 8) || !(y > 4))";
    std::cout << "\n\tResult is:  " << (!(x <=8) || !(y > 4));

    std::cout << "\n\nd)\tExpression is !((i > 4) || (j <= 6))\n";
    std::cout << "\tResult is:  " << !((i > 4) || (j <= 6));
    std::cout << "\n\tUse expression !((i > 4) && (j <= 6))";
    std::cout << "\n\tResult is:  " << (!(i > 4) && !(j <= 6));

    std::cout << "\n";
}
