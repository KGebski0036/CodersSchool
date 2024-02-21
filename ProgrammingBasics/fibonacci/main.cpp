#include "fibonacci.hpp"

int main() {
	std::cout << "iter [1]: " << fibonacci_iterative(1) << std::endl;
	std::cout << "recu [1]: " << fibonacci_recursive(1) << std::endl;

	std::cout << "iter [0]: " << fibonacci_iterative(0) << std::endl;
	std::cout << "recu [0]: " << fibonacci_recursive(0) << std::endl;

	std::cout << "iter [2]: " << fibonacci_iterative(2) << std::endl;
	std::cout << "recu [2]: " << fibonacci_recursive(2) << std::endl;

	std::cout << "iter [3]: " << fibonacci_iterative(3) << std::endl;
	std::cout << "recu [3]: " << fibonacci_recursive(3) << std::endl;

	std::cout << "iter [8]: " << fibonacci_iterative(8) << std::endl;
	std::cout << "recu [8]: " << fibonacci_recursive(8) << std::endl;

	std::cout << "iter [20]: " << fibonacci_iterative(20) << std::endl;
	std::cout << "recu [20]: " << fibonacci_recursive(20) << std::endl;
}
