/*
 * ex03_27.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 3.27  (Other Boost Multiprecision Arithmetic Operations)
 *
 * les vaughn
 * Sep 4, 2023
 */

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

int main()
{
    // initializing cpp_ints
    const boost::multiprecision::cpp_int value1{
        "100000000000000000000000000000"}; // 30 digits
    const boost::multiprecision::cpp_int value2{
        9223372036854775807LL}; // long long max
    const int value3{3};

    std::cout << "INITIAL VALUES"
    << "\ncpp_int value1: " << value1
    << "\ncpp_int value2: " << value2
    << "\n    int value3: " << value3;

    std::cout << "\n\nUSE CPP_INT OBJECTS WITH THE +, -, *, / AND % OPERATORS";
    std::cout << "\nvalue1 + value2:  " << value1 + value2;
    std::cout << "\nvalue1 - value2:  " << value1 - value2;
    std::cout << "\nvalue1 * value2:  " << value1 * value2;
    std::cout << "\nvalue1 / value2:  " << value1 / value2;
    std::cout << "\nvalue1 % value2:  " << value1 % value2;

    std::cout << "\n\nMULTIPLY A CPP_INT OBJECT BY INT VALUES";
    std::cout << "\nvalue1 * value3:  " << value1 * value3;
    std::cout << "\n    value1 * 17:  " << value1 * 17;

    std::cout << "\n\nUSING BOOST MULTIPRECISION LIBRARY FUNCTIONS "
              << "POW AND SQRT";
    std::cout << "\nvalue1 squared:  " << boost::multiprecision::pow(value1, 2);

    boost::multiprecision::cpp_int value4{
        "1000000000000000000000000000000000000" }; // 37 digits
    std::cout << "\nsquare root of value4:  "
              << boost::multiprecision::sqrt(value4) << std::endl;

}

