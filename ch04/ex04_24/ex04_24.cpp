/*
 * ex04_24.cpp
 *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach
 *
 * Exercise 4.24  ("The Twelve Days of Christmas" Song)
 * les vaughn
 * Sep 5, 2023
 */

#include <iostream>

int main()
{
    for (int day{ 1 }; day <= 12; ++day) {
        std::cout << "\nOn the ";

        switch(day)
        {
            case 1:
                std::cout << "first ";
                break;

            case 2:
                std::cout << "second ";
                break;

            case 3:
                std::cout << "third ";
                break;

            case 4:
                std::cout << "fourth ";
                break;

            case 5:
                std::cout << "fifth ";
                break;

            case 6:
                std::cout << "sixth ";
                break;

            case 7:
                std::cout << "seventh ";
                break;

            case 8:
                std::cout << "eighth ";
                break;

            case 9:
                std::cout << "nineth ";
                break;

            case 10:
                std::cout << "tenth ";
                break;

            case 11:
                std::cout << "eleventh ";
                break;

            case 12:
                std::cout << "twelveth ";
                break;

            default:
                std::cout << "Invalid day!" << std::endl;

        } // end switch day

        std::cout << "day of Christmas my true love gave to me \n";

        switch (day)
        {
            case 12:
                std::cout << "Twelve durmmers drumming,\n";
                [[fallthrough]];

            case 11:
                std::cout << "Eleven pipers piping,\n";
                [[fallthrough]];

            case 10:
                std::cout << "Ten lords a-leaping,\n";
                [[fallthrough]];

            case 9:
                std::cout << "Nine ladies dancing,\n";
                [[fallthrough]];

            case 8:
                std::cout << "Eight maids a-milking,\n";
                [[fallthrough]];

            case 7:
                std::cout << "Seven swans a-swimming,\n";
                [[fallthrough]];

            case 6:
                std::cout << "Six geese a-laying,\n";
                [[fallthrough]];

            case 5:
                std::cout << "Five gold rings,\n";
                [[fallthrough]];

            case 4:
                std::cout << "Four calling birds,\n";
                [[fallthrough]];

            case 3:
                std::cout << "Three french hens,\n";
                [[fallthrough]];

            case 2:
                std::cout << "Two turtle doves,\n";
                std::cout << "And a partridge in a pear tree.\n\n";
                break;

            case 1:
                std::cout << "A partridge in a pear tree.\n";
                break;

            default:
                std::cout << "Invalid day!" << std::endl;

        } // end switch (day)

    } // end for (day)

} // end main