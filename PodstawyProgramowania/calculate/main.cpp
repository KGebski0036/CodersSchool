#include "calculate.hpp"

int main() {
	std::cout << "2 + 2 = " << calculate("add", 2, 2) << std::endl;
	std::cout << "2 - 4 = " << calculate("subtract", 2, 4) << std::endl;
	std::cout << "2 * 4 = " << calculate("multiply", 2, 4) << std::endl;
	std::cout << "3 / 2 = " << calculate("divide", 3, 2) << std::endl;

	std::cout << "3 hello 2 = " << calculate("hello", 3, 2) << std::endl;
	std::cout << "3 / 0 = " << calculate("divide", 3, 0) << std::endl;
}
