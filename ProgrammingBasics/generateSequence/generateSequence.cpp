#include "generateSequence.hpp"

std::vector<int> generateSequence(int count, int step) {
	std::vector<int> result;

	if (count < 0)
		return result;

	result.resize(count);

	int value = 0;
	for (auto& el : result) {
		value += step;
		el = value;
	}

	return (result);
}
