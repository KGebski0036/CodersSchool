#include <string>
#include <iostream>
#include <vector>
#include <chrono>

using namespace std::chrono;

std::vector<int> concatinateVectors(const std::vector<int>& vecFirst, const std::vector<int>& vecSecond);
std::vector<int> concatinateVectorsOptimized(const std::vector<int>& vecFirst, const std::vector<int>& vecSecond);

int main() {
	std::vector<int> vecFirst {1, 2, 3, 4, 5};
	std::vector<int> vecSecond {11, 12, 13, 14, 15};

	auto start = high_resolution_clock::now();
	auto result = concatinateVectors(vecFirst, vecSecond);
	auto stop = high_resolution_clock::now();

	auto startOptimized = high_resolution_clock::now();
	auto resultOptimized = concatinateVectorsOptimized(vecFirst, vecSecond);
	auto stopOptimized = high_resolution_clock::now();

	for (const auto& el : result) {
		std::cout << el << '\n';
	}


	auto duration = duration_cast<microseconds>(stop - start);
	auto durationOptimized = duration_cast<microseconds>(stopOptimized - startOptimized);

	std::cout << "Vector capacity: " << result.capacity() << " time: " << duration.count() << "μs" << '\n';
	std::cout << "Optimized vector capacity: " << resultOptimized.capacity() << " time: " << durationOptimized.count() << "μs"<< '\n';

	return (0);
}

std::vector<int> concatinateVectors(const std::vector<int>& vecFirst, const std::vector<int>& vecSecond) {

	std::vector<int> result;

	for(auto el : vecFirst) {
		result.push_back(el);
	}

	for(auto el : vecSecond) {
		result.push_back(el);
	}

	return (result);
}

std::vector<int> concatinateVectorsOptimized(const std::vector<int>& vecFirst, const std::vector<int>& vecSecond) {
	std::vector<int> result;

	result.reserve(vecFirst.size() + vecSecond.size());

	result.insert(result.begin(), vecFirst.begin(), vecFirst.end());
	result.insert(result.end(), vecSecond.begin(), vecSecond.end());

	return (result);
}

