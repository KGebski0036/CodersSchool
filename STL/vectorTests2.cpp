#include <iostream>
#include <vector>

int main() {
	std::vector<short> vec;

	std::cout << "size: " << vec.size() << '\n';
	std::cout << "capasity: " << vec.capacity() << '\n';

	vec.reserve(10);
	vec.insert(vec.begin(), 10, 5);

	std::cout << "size: " << vec.size() << '\n';
	std::cout << "capasity: " << vec.capacity() << '\n';

	vec.reserve(20);

	std::cout << "size: " << vec.size() << '\n';
	std::cout << "capasity: " << vec.capacity() << '\n';

	vec.shrink_to_fit();

	std::cout << "size: " << vec.size() << '\n';
	std::cout << "capasity: " << vec.capacity() << '\n';
	return 0;
}
