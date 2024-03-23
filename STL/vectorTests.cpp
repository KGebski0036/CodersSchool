#include <iostream>
#include <vector>
#include <algorithm>

void printVector(const std::vector<short> vec);

int main() {
	std::vector<short> vec = {1,2,3,4,5};

	vec.erase(vec.begin());

	printVector(vec);
	std::cout << "capasity: " << vec.capacity() << "\n\n";

	vec.push_back(5);

	printVector(vec);
	std::cout << "capasity: " << vec.capacity() << "\n\n";

	vec.emplace(vec.begin(), 12);

	printVector(vec);
	std::cout << "capasity: " << vec.capacity() << "\n\n";

	vec.erase(vec.begin(), vec.end());

	printVector(vec);
	std::cout << "capasity: " << vec.capacity() << "\n\n";

	vec.shrink_to_fit();

	printVector(vec);
	std::cout << "capasity: " << vec.capacity() << "\n\n";


	std::cout << "max vector size: " << vec.max_size() << " elements" << '\n';

	return 0;
}

void printVector(const std::vector<short> vec) {
	for (auto& el : vec) {
		std::cout << el << " ";
	}
	std::cout << '\n';
}
