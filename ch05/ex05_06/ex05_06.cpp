/*
 * ex05_06.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 5.6  (Random Numbers)
 *
 * les vaughn
 * Sep 7, 2023
 */

#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::default_random_engine engine{ rd() };


    std::cout << "\na)  1 <= n <= 2\n";
    std::uniform_int_distribution random_a{ 1, 2 };
    std::cout << random_a(engine);

    std::cout << "\n\nb)  1 <= n <= 100\n";
    std::uniform_int_distribution random_b{ 1, 100 };
    std::cout << random_b(engine);

    std::cout << "\n\nc)  0 <= n <= 9\n";
    std::uniform_int_distribution random_c{ 0, 9 };
    std::cout << random_c(engine);

    std::cout << "\n\nd) 1000 <= n <= 1112\n";
    std::uniform_int_distribution random_d{ 1000, 1112 };
    std::cout << random_d(engine);

    std::cout << "\n\ne)  -1 <= n <= 1\n";
    std::uniform_int_distribution random_e{ -1, 1 };
    std::cout << random_e(engine);

    std::cout << "\n\ne)  -3 <= n <= 11\n";
    std::uniform_int_distribution random_f{ -3, 11 };
    std::cout << random_f(engine);

    std::cout << std::endl;

}