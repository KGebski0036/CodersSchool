#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
	std::vector<std::shared_ptr<int>> result(count);

	int val = 0;
	for (auto& el : result) {
		el = std::make_shared<int>(val++);
	}

	return result;
}

void print(const std::vector<std::shared_ptr<int>>& vec) {
	for (const auto& el : vec) {
		std::cout << *el << " ";
	}
	std::cout << '\n';
}

void add10(const std::vector<std::shared_ptr<int>>& vec) {
	for (auto& el : vec) {
		*el += 10;
	}
}

void sub10(const std::vector<std::shared_ptr<int>>& vec) {
	for (auto& el : vec) {
		sub10(el.get());
	}
}

void sub10(int* const ptr) {
	*ptr -= 10;
}
