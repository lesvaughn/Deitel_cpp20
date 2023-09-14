/******************************************************************************
 * ex05_35.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.35  (Craps Game Modification)                                   *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 13, 2023                                                               *
 *****************************************************************************/

#include <format>
#include <iostream>
#include <random>

// Function Prototype
int playGame();
int rollDice();

enum class Status { keepRolling, won, lost };

int main()
{
    int bankBalance{ 1000 };
    char playAgain = 'y';

    std::cout << "Your bank balance is $" << bankBalance << "\n";

    while (playAgain == 'y') {

        std::cout << "Enter your wager:  ";
        int wager{ 0 };
        std::cin >> wager;

        if (wager > bankBalance) {
            std::cout << "Wage cannot be greater than your bank account\n";
            continue;
        }

        if (wager == bankBalance) {
            std::cout << "Oh, you're goint for broke, huh?\n";
        }

        if (wager <= .1 * bankBalance) {
            std::cout << "Aw comon, take a chance!\n";
        }


        std::cout << "\n";

        if (playGame() == static_cast<int>(Status::won)) {
            bankBalance += wager;
        }
        else {
            bankBalance -= wager;
        }

        if (bankBalance > 0) {
            std::cout << "\nYour bank balance is $" << bankBalance;

            if (bankBalance >= 5000) {
                std::cout << "\nYou're up big.  Now's the time to cash in ";
                std::cout << "your chips\n";
            }

            std::cout << "\nWould you like to play again ('y' or 'n'):  ";
            std::cin >> playAgain;
        }
        else {
            std::cout << "Sorry.  You are busted!\n";
            playAgain = 'n';
        }
    }
}

int playGame()
{
    int myPoint{ 0 };
    Status gameStatus{ Status::keepRolling };

    switch (const int sumOfDice{ rollDice() }) {
        case 7:
        case 11:
            gameStatus = Status::won;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = Status::lost;
            break;
        default:
            myPoint = sumOfDice;
            std::cout << std::format("Point is {}\n", myPoint);
            break;
    }

    // while game is not complete
    while (Status::keepRolling == gameStatus) {
        if (const int sumOfDice{rollDice()}; sumOfDice == myPoint) {
            gameStatus = Status::won;
        }
        else if (sumOfDice == 7) {
            gameStatus = Status::lost;
        }
    }

    if (Status::won == gameStatus) {
        std::cout << "Player wins\n";
        return static_cast<int>(Status::won);
    }
    else {
        std::cout << "Player loses\n";
        return static_cast<int>(Status::lost);
    }
}

int rollDice() {
    // set up random-number generation
    static std::random_device rd;
    static std::default_random_engine engine{ rd() };
    static std::uniform_int_distribution randomDie{ 1, 6} ;

    const int die1{ randomDie(engine) };
    const int die2{ randomDie(engine) };
    const int sum{ die1 + die2 };

    std::cout << std::format("Player rolled {} + {} = {}\n", die1, die2, sum);

    return sum;
}
