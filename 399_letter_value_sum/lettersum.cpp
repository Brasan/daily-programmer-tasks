#include <iostream>
#include <string>
#include <algorithm>
#include <map>

int main() {
	
	const std::string alphabet = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	std::string input;
	std::cout << "Enter a word" << '\n';
	std::cin >> input;
	std::map<char, int> letterValues{};
	int sum = 0;
	std::cin.get();
	for (size_t i = 0; i < alphabet.length(); i++)
	{
		int value = i / 2 + 1;
		letterValues[alphabet[i]] = value;

	} 
	while (!std::all_of(std::begin(input), std::end(input), std::isalpha)) {
		std::cout << "Invalid input. Please only input a string of letters" << '\n';
		std::cin >> input;
	}

	for (char letter : input) {
		sum += letterValues[letter];
	}
	
	std::cout << "Your word is worth " << sum << " points!" << '\n';
	std::cin.get();

	return 0;
}