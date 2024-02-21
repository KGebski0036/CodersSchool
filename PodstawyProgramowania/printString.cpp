#include <iostream>

void printString(std::string str, size_t multiplicator);

int main() {

	printString("Hello", 5);
	std::cout << "\n";

	printString("AbC", 2);
	std::cout << "\n";

	printString("HiHi", 6);
	std::cout << "\n";
	return 0;
}

void printString(std::string str, size_t multiplicator) {
	for (size_t i = 0; i < multiplicator; i++)
		std::cout << str;
}
