#include <string>
#include <iostream>
#include <vector>

using StringVector = std::vector<std::string>;

void printVector(const StringVector& stringVector);

int main() {
	StringVector vec = {
		"Bish",
		"Bash",
		"Bosh"
	};

	printVector(vec);

	return (0);
}

void printVector(const StringVector& stringVector) {
	for (const auto& el: stringVector) {
		std::cout << el << '\n';
	}
}

