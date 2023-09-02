/*
 * ex02_11.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 * Exercise 2.11  
 * 
 * les vaughn
 * Sep 2, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Enter three integers:  ";
    int int1{0};
    int int2{0};
    int int3{0};
    std::cin >> int1 >> int2 >> int3;

    int product{int1 * int2 * int3};

    std::cout << "The product of three integers is " << product << std::endl;
}