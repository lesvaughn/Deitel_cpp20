/******************************************************************************
 * ex05_40.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.40  (Function Template maximum)                                 *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 14, 2023                                                               *
 *****************************************************************************/

#include <iostream>

// Function template maximum header
template <typename T>
T maximum(T value1, T value2)
{
    T maximum = value1;

    if (value2 > maximum) {
        maximum = value2;
    }

    return maximum;
}

int main()
{
    std::cout << "Enter two integers separated by a space:  ";
    int int1{ 0 };
    int int2{ 0 };
    std::cin >> int1 >> int2;
    std::cout << "The minimum value is " << maximum(int1, int2);

    std::cout << "\n\nEnter two characters separated by a space:  ";
    char ch1;
    char ch2;
    std::cin >> ch1 >> ch2;
    std::cout << "The minimum value is " << maximum(ch1, ch2);

    std::cout << "\n\nEnter two floating-point numbers separated by a space:  ";
    double fp1;
    double fp2;
    std::cin >> fp1 >> fp2;
    std::cout << "The minimum value is " << maximum(fp1, fp2);

    std::cout << std::endl;
}