#include <iostream>
#include <list>
#include <array>

constexpr size_t ArraySize = 10;

void printList(const std::list<short> list);
void printArray(const std::array<short, ArraySize> array);

int main() {
	std::list<short> list;

	list.insert(list.begin(), {0,1,2,3,4,5});

	printList(list);
	std::cout << "size: " << list.size() << '\n';

	//erese 3th element
	list.erase(std::next(list.begin(), 2));

	printList(list);
	std::cout << "size: " << list.size() << '\n';

	list.emplace_front(10);
	list.emplace_back(10);

	printList(list);

	list.emplace(std::next(list.begin(), 3), 20);
	printList(list);

	if (list.size() > ArraySize)
		return 1;

	std::array<short, ArraySize> array;
	array.fill(0);

	for (size_t i = 0; i < list.size(); i++) {
		array[i] = *std::next(list.begin(), i);
	}

	printList(list);
	printArray(array);

	return 0;
}

void printList(const std::list<short> list) {
	for (const auto& el : list) {
		std::cout << el << " -> ";
	}
	std::cout << "Null \n";
}

void printArray(const std::array<short, ArraySize> array) {
	for (const auto& el : array) {
		std::cout << el << " ";
	}
	std::cout << "\n";
}
