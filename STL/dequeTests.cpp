#include <iostream>
#include <deque>

void printDeque(const std::deque<short> deque);

int main() {
	std::deque<short> deque;

	deque.insert(deque.begin(), {1,2,3,4,5});
	printDeque(deque);

	deque.erase(std::next(deque.begin(), 1));
	deque.erase(std::next(deque.begin(), 2));

	deque.push_back(30);
	deque.push_front(30);

	printDeque(deque);

	deque.insert(std::next(deque.begin(), 3), 20);

	printDeque(deque);

	return 0;
}

void printDeque(const std::deque<short> deque) {
	for (auto& el : deque) {
		std::cout << el << " ";
	}
	std::cout << '\n';
}
