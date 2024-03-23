#include <iostream>
#include <array>

constexpr int ArraySize = 10;

void printArray(const std::array<short, ArraySize> array);

int main() {
	std::array<short, ArraySize> array;

	array.fill(5);
	array.at(3) = 3;

	std::array<short, ArraySize> arrayNew;

	std::swap(array, arrayNew);

	printArray(array);
	printArray(arrayNew);

	return 0;
}

void printArray(const std::array<short, ArraySize> array) {
	for (auto& el : array) {
		std::cout << el << " ";
	}
	std::cout << '\n';
}
