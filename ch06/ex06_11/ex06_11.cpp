/******************************************************************************
 * ex06_11.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 6.11 (Intro to Data Sceince:  Coin Tossing)                       *
 *                                                                            *
 * les vaughn                                                                 *
 * Feb 17, 2024                                                               *
 *****************************************************************************/

#include <format>
#include <iostream>
#include <array>
#include <random>

// Function prototype
void flip(int tosses);

int main() 
{
        flip(100);
        std::cout << "\n\n";
        flip(20'000);
        std::cout << "\n\n";
        flip(200'000);
}

void flip(int tosses)
{
        // set up random-number generation
        static std::random_device rd; // used to seed the default_random_engine
        static std::default_random_engine engine{rd()}; // rd() produces a seed 
        static std::uniform_int_distribution randomFlip{1, 2};
        constexpr size_t arraySize{3};

        std::array<int, arraySize> frequency{}; // initialize to 0s

        for (int flip{1}; flip <= tosses; ++flip) {
                ++frequency.at(randomFlip(engine));
        }

        std::cout << std::format("{:>5}{:>13}{:>10}\n", "Side", "Frequency", "Percent");
        double headsPercent{(static_cast<double>(frequency.at(1)) / tosses) * 100};
        double tailsPercent{(static_cast<double>(frequency.at(2)) / tosses) * 100};
        std::cout << std::format("Heads{:>13}{:>10.2f}\n", frequency.at(1), headsPercent);                 //frequency.at(1) / 60'000'000, "%");
        std::cout << std::format("Tails{:>13}{:>10.2f}\n", frequency.at(2), tailsPercent);  

}
 