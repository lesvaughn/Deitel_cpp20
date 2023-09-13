/******************************************************************************
 * ex05_22.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.22  (Guess-the-Number Game)                                     *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 10, 2023                                                               *
 *****************************************************************************/

#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::default_random_engine engine{ rd() };
    std::uniform_int_distribution randomNumber{ 1, 1000 };

    char playAgain = 'y';

    while (playAgain == 'y') {
        int number{ randomNumber(engine) };

        std::cout << "I have a number between 1 and 1000.\n";
        std::cout << "Can you guess my number?\n";
        std::cout << "Please type your first guess:  ";
        int guess{ 0 };
        std::cin >> guess;

        while (guess != number) {
            if (guess > number) {
                std::cout << "Too high.  Try again.\n";
            }
            else {
                std::cout << "Too low.  Try again.\n";
            }

            std::cout << "Enter your next guess:  ";
            std::cin >> guess;
        }

        std::cout << "Excellent!  You guessed the number!\n";
        std::cout << "Would you like to play again (y or n):  ";
        std::cin >> playAgain;
    }
}