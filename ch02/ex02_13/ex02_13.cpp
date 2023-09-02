/*
 * ex02_13.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 * Exercise 2.13 (Printing)
 * 
 * les vaughn
 * Sep 2, 2023
 */

#include <iostream>

int main()
{
    std::cout << "Using one statement with one stream inseration operator.\n";
    std::cout << "1 2 3 4\n\n";

    std::cout << "Using one statement with four stream "
              << "inseration operations.\n";
    std::cout << "1 " << "2 " << "3 " << "4 \n\n";      

    std::cout << "Using four statements.\n";
    std::cout << "1 ";
    std::cout << "2 ";
    std::cout << "3 ";
    std::cout << "4 " << std::endl;     

}