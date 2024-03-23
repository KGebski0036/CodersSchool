#include "vowel.hpp"

const std::string vowels = "aeiouyAEIOUY";

void removeVowels(std::vector<std::string>& vector) {
	for(auto& str : vector) {
		for(auto& chr : str) {
			size_t index = vowels.find(chr);
			if (index != std::string::npos)
			{
				str.erase(std::next(str.begin(), index));
			}
		}
	}
}
