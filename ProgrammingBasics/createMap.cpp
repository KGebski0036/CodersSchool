#include <list>
#include <map>
#include <vector>
#include <iostream>
#include <string>

std::map<int, std::string> createMap(const std::vector<int>& keys, const std::list<std::string>& values);

int main () {
	std::vector<int> keys = {1,2,9,4,5};
	std::list<std::string> values = {
		"One", "Two", "Apple", "Four", "Five"
	};

	auto map = createMap(keys, values);

	for (const auto& [key, value] : map) {
		std::cout << "[" << key << "] -> " << value << '\n';
	}

	return 0;
}

std::map<int, std::string> createMap(const std::vector<int>& keys, const std::list<std::string>& values) {
	std::map<int, std::string> result;

	if (keys.size() != values.size())
		return result;

	auto listElement = values.begin();

	for (size_t i = 0; i < keys.size(); i++)
	{
		result[keys[i]] = *listElement;
		listElement++;
	}

	return result;
}
