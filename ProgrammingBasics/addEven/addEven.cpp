#include "addEven.hpp"

int addEven(const std::vector<int>& numbers) {
	int result = 0;

	for(const auto& el : numbers)
	{
		if (el % 2 == 0)
			result += el;
	}

	return result;
}
