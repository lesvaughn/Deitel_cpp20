/******************************************************************************
 * ex05_46.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 5.46                                                              *
 * (Computer-Assisted Instruction: Monitoring Student Performance)            *
 *                                                                            *
 * les vaughn                                                                 *
 * Sep 14, 2023                                                               *
 *****************************************************************************/

#include <iostream>
#include <random>

// Function Prototype
void generateQuestion(int& aPrt, int& bPtr);

std::random_device rd;
std::default_random_engine engine{ rd() };

int main()
{
        std::uniform_int_distribution response{ 1, 4 };
        int nbrCorrect{ 0 };
        int nbrIncorrect{ 0 };
        int nbrResponses{ 0 };

        int num1{ 0 };
        int num2{ 0 };

        while (nbrResponses < 10) {
                generateQuestion(num1, num2);
                int answer{ 0 };
                std::cin >> answer;

                while (answer != num1 * num2) {
                        ++nbrResponses;
                        ++nbrIncorrect;
                        int responseType{ response(engine) };

                        switch (responseType) 
                        {
                        case 1:
                        std::cout << "No.  Please try again\n";
                        break;

                        case 2:
                        std::cout << "Wrong.  Try once move.\n";
                        break;

                        case 3:
                        std::cout << "Don't give up!\n";
                        break;

                        case 4:
                        std::cout << "No.  Keep trying.\n";
                        break;

                        default:
                        std::cout << "Error wrong resposne type!!!\n";
                        } // end switch

                        if (nbrResponses == 10) {
                        break;
                } // end while answer 

                std::cout << "How much is " << num1 << " times " << num2 << "?  ";
                std::cin >> answer;
        } // end while nbrResponses

        ++nbrResponses;
        ++nbrCorrect;

        if (nbrResponses == 10) {
                double percentCorrect{ static_cast<double>(nbrCorrect) / nbrResponses };

                if (percentCorrect >= .75) {
                        std::cout << "Congratulations you are ready for the next "\
                        "level!\n";
                }
                else {
                        std::cout << "Please ask your teacher for extra help.\n";
        }

        break;
        } // end nbrResponses

        int responseType{ response(engine) };

        switch (responseType) 
        {
        case 1:
        std::cout << "Very good!\n";
        break;

        case 2:
        std::cout << "Excellent!\n";
        break;

        case 3:
        std::cout << "Nice work!\n";
        break;

        case 4:
        std::cout << "Keep up the good workk!\n";
        break;
        
        default:
        std::cout << "Error wrong respnse type!!!\n";
        } // end switch

        } // end while nbrResponses
} // end main

void generateQuestion(int& aPtr, int& bPtr)
{
        static std::uniform_int_distribution number{ 1, 9 };

        aPtr = number(engine);
        bPtr = number(engine);

        std::cout << "How much is " << aPtr << " times " << bPtr << "?  ";
}