#include <list>
#include <iostream>
#include <random>
#include <vector>
#include <chrono>
#include <algorithm>

using namespace std::chrono;

constexpr size_t randomElements = 10'000;

std::list<int> createSortedList(const std::vector<int>& vec);

int main() {

	std::vector<int> vec(randomElements);
	std::random_device random;

	std::default_random_engine randomEngine(random());
	std::uniform_int_distribution<int> uniform_dist(1, 100);

	for (auto& el : vec)
	{
		el = uniform_dist(randomEngine);
	}

	std::list<int> list = createSortedList(vec);

	auto start = high_resolution_clock::now();
	std::sort(vec.begin(), vec.end());
	auto stop = high_resolution_clock::now();

	auto duration = duration_cast<microseconds>(stop - start);

	std::cout << "Random vector of " << randomElements << " elements sorted in " << duration.count() << "μs" << '\n';

	return (0);
}

std::list<int> createSortedList(const std::vector<int>& vec) {
	std::list<int> result;

	result.insert(result.begin(), vec.begin(), vec.end());

	auto start = high_resolution_clock::now();
	result.sort();
	auto stop = high_resolution_clock::now();

	auto duration = duration_cast<microseconds>(stop - start);

	std::cout << "Random list of " << randomElements << " elements sorted in " << duration.count() << "μs" << '\n';

	return (result);
}
