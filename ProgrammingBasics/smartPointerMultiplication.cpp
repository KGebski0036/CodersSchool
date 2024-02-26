#include <iostream>
#include <memory>

std::shared_ptr<int> smartPointerMultiplication(const int a, const int b);

int main() {

	auto ptr = smartPointerMultiplication(2, 21);

	std::cout << "Pointer value: " << *ptr << ", references to pointer: " << ptr.use_count() << '\n';

	return 0;
}

std::shared_ptr<int> smartPointerMultiplication(const int a, const int b) {
	auto result = std::make_shared<int>(a * b);

	std::cout << "Referneces to pointer inside function: " << result.use_count() << '\n';

	return result;
}
