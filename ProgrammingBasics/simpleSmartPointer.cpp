#include <iostream>
#include <memory>

void changeValue(const std::shared_ptr<int> ptr);

int main() {

	auto ptr = std::make_shared<int>(42);

	std::cout << "Value: " << *ptr << '\n';
	changeValue(ptr);
	std::cout << "Value after: " << *ptr << '\n';

	std::cout << "Reference to pointer outside: " << ptr.use_count() << '\n';
	
	return 0;
}

void changeValue(const std::shared_ptr<int> ptr) {
	std::cout << "Size of pointer: " << sizeof(ptr) << '\n';

	*ptr = 20;

	std::cout << "Reference to pointer: " << ptr.use_count() << '\n';
}
