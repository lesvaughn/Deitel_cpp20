/******************************************************************************
 * ex06_10.cpp                                                                *
 *                                                                            *
 * Deitel - C++ How to Program 11/ed.  An Ojects-Natural Approach             *
 *                                                                            *
 * Exercise 6.10 (Random Sentences)                                           *
 *                                                                            *
 * les vaughn                                                                 *
 * Feb 17, 2024                                                               *
 *****************************************************************************/

#include <iostream>
#include <array>
#include <string>
#include <random>

int main()
{
	std::random_device rd;
	std::default_random_engine engine{rd()};
	std::uniform_int_distribution<size_t> randomTerm(0, 4); 

	using namespace std::string_literals;

	std::array article{"the"s, "a"s, "one"s, "some"s, "any"s};
	std::array noun{"boy"s, "girl"s, "dog"s, "town"s, "car"s};
	std::array verb{"drove"s, "jumped"s, "ran"s, "walked"s, "skipped"s};
	std::array preposition{"to"s, "from"s, "over"s, "under"s, "on"s};

	for (int i{1}; i <= 20; ++i) {
		size_t term = randomTerm(engine);
		std::string nounTerm = article.at(term);
		for (size_t pos = 0; pos < article.at(term).size(); ++pos) {
			if (pos == 0) {
				std::cout << static_cast<char>(std::toupper(nounTerm.at(pos)));
			}
			else {
				std::cout << article.at(term).at(pos);
			}
		}

		//std::cout << "article.at(randomTerm(engine).at(pos))";

		//std::cout << "" << article.at(randomTerm(engine)) << " ";
		std::cout << " " << noun.at(randomTerm(engine)) << " ";
		std::cout << verb.at(randomTerm(engine)) << " ";
		std::cout << preposition.at(randomTerm(engine)) << " ";
		std::cout << article.at(randomTerm(engine)) << " ";
		std::cout << noun.at(randomTerm(engine)) << ".\n";
	}
}
