/******************************************************************************
 * ex05_25.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.25  (Fibonacci Series:  Iterative Solution)                     *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 13, 2023                                                               *
 *****************************************************************************/

#include <iostream>

// Function Prototpye
int fibonacci(int x);

int main()
{
    std::cout << "Enter a number:  ";
    int nbr;
    std::cin >> nbr;

    std::cout << nbr << "! = " << fibonacci(nbr) << std::endl;
}

int fibonacci(int x)
{
    if (x == 0) {
        return 0;
    }

    if (x == 1) {
        return 1;
    }

    int fibonacci{ 0 };
    int prev_fib{ 1 };
    int second_prev_fib{ 0 };

    for (int i{ 2 }; i <= x; ++i) {
        fibonacci = prev_fib + second_prev_fib;
        second_prev_fib = prev_fib;
        prev_fib = fibonacci;
    }

    return fibonacci;
}
