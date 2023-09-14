/******************************************************************************
 * ex05_44.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.44  (Computer-Assisted Instruction)                             *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 14, 2023                                                               *
 *****************************************************************************/

#include <iostream>
#include <random>

// Function Prototype
void generateQuestion(int& aPrt, int& bPtr);

int main()
{
    int num1{ 0 };
    int num2{ 0 };
    char anotherQuestion = 'y';

    while (anotherQuestion == 'y') {
        generateQuestion(num1, num2);
        int answer{ 0 };
        std::cin >> answer;

        while (answer != num1 * num2) {
            std::cout << "No.  Please try again:  ";
            std::cin >> answer;
        }

        std::cout << "\nVery good!\n";
        std::cout << "Would you like another question: 'y' or 'n':  ";
        std::cin >> anotherQuestion;
    }
}

void generateQuestion(int& aPtr, int& bPtr)
{
    static std::random_device rd;
    static std::default_random_engine engine{ rd() };
    static std::uniform_int_distribution number{ 1, 9 };

    aPtr = number(engine);
    bPtr = number(engine);

    std::cout << "How much is " << aPtr << " times " << bPtr << "?  ";
}