/******************************************************************************
 * ex06_08.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 6.8 (Duplicate Elimination with vector)                           *
 *                                                                            *
 * les vaughn                                                                 *
 * Feb 14, 2024                                                               *
 *****************************************************************************/

#include <iostream>
#include <vector>

int main()
{
        std::vector<int> uniqueNumbers;

        for (int cntr{1}; cntr <= 20; ++cntr) {
                std::cout << "Enter an integer between 10 and 100 inclusive:  ";
                int nbr{0};
                std::cin >> nbr;

		bool found = false;

                for (int& item : uniqueNumbers) {
                	if (item == nbr) {
                        	found = true;
                    	}
                } 

		if (found == false) {
			uniqueNumbers.push_back(nbr);
		}
        }

	for (const int& number : uniqueNumbers) {
		std::cout << number << " ";
	}

	std::cout << "\n";

}
