/******************************************************************************
 * ex05_23.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.23  (Guess-the-Number Game Modification)                        *
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

        int nbrGuesses{ 1 };

        while (guess != number) {
            if (guess > number) {
                std::cout << "Too high.  Try again.\n";
            }
            else {
                std::cout << "Too low.  Try again.\n";
            }

            ++nbrGuesses;

            std::cout << "Enter your next guess:  ";
            std::cin >> guess;
        }

        std::cout << "Excellent!  You guessed the number!\n";

        if (nbrGuesses <= 10) {
            std::cout << "Either you know the secret or you got lucky!\n";
        }

        if (nbrGuesses == 10) {
            std::cout << "Ahah!  You know the secret!\n";
        }

        if (nbrGuesses > 10) {
            std::cout << "You should be able to do better!\n";
        }

        std::cout << "\nWould you like to play again (y or n):  ";
        std::cin >> playAgain;
    }
}