#include <iostream>

int multiply(auto a, int b);

int main () {
	std::cout << "4 * 5 = " << multiply(4, 5) << std::endl;
	std::cout << "5 * 10 = " << multiply(5, 10) << std::endl;
	std::cout << "-5 * 5 = " << multiply(-5, 5) << std::endl;

	return 0;
}

int multiply(auto a, int b) {
	return a * b;
}
