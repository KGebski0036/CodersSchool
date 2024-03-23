#include <iostream>
#include <forward_list>
#include <array>

constexpr size_t ArraySize = 10;

void printList(const std::forward_list<short> list);
void printArray(const std::array<short, ArraySize> array);

int main() {
	std::forward_list<short> list = {0,1,2,3,4,5};


	printList(list);

	//erese 3th element
	list.erase_after(std::next(list.begin(), 1), std::next(list.begin(), 3));

	printList(list);

	list.insert_after(list.before_begin(), 10);
	list.insert_after(std::next(list.begin(), 5), 10);

	printList(list);

	list.insert_after(std::next(list.begin(), 3), 20);
	printList(list);


	return 0;
}

void printList(const std::forward_list<short> list) {
	for (const auto& el : list) {
		std::cout << el << " -> ";
	}
	std::cout << "Null \n";
}


