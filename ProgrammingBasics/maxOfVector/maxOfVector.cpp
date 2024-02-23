#include "maxOfVector.hpp"

int maxOfVector(const std::vector<int>& vec) {

	if (vec.size() == 0)
		return 0;

	int max = vec.front();

	for (const auto& el : vec) {
		if (el > max)
			max = el;
	}

	return (max);
}
