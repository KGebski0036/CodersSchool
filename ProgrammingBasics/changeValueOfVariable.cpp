#include <iostream>

void changePointer(int* const value);
void changeReference(int& value);

int main() {
	int number = 0;

	std::cout << number << '\n';
	changePointer(&number);
	std::cout << number << '\n';
	changeReference(number);
	std::cout << number << '\n';

	return 0;
}

void changePointer(int* const value) {
	*value = 10;
}

void changeReference(int& value) {
	value = 20;
}
