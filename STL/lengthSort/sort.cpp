#include "sort.hpp"

void insertElement(std::deque<std::string>& result, const std::string listElement);
void lexicalSort(std::deque<std::string>& result, const std::string listElement, std::deque<std::string>::iterator& it);

std::deque<std::string> lengthSort(const std::forward_list<std::string> list) {
	std::deque<std::string> result;

	for (const auto& listElement : list) {

		if (result.size() == 0)
		{
			result.emplace_back(listElement);
			continue;
		}
		insertElement(result, listElement);
	}

	result.shrink_to_fit();

	return (result);
}

void insertElement(std::deque<std::string>& result, const std::string listElement) {
	for (auto it = result.begin(); it != result.end(); it++) {

		if ((*it).size() > listElement.size())
		{
			result.insert(it, listElement);
			break;
		}

		if ((*it).size() == listElement.size())
		{
			lexicalSort(result, listElement, it);
			break;
		}
	}
}

void lexicalSort(std::deque<std::string>& result, const std::string listElement, std::deque<std::string>::iterator& it) {
	while (it != result.end())
	{
		if (*it >= listElement || (*it).size() > listElement.size())
		{
			result.insert(it, listElement);
			break;
		}
		it++;
	}

	if (it == result.end())
		result.insert(it, listElement);
}
