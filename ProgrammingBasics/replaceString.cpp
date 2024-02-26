#include <string>
#include <iostream>

void replaceString(std::string& stringToReplace) {
	stringToReplace = "Other string";
}

int main() {

	std::string str("Original string");

	std::cout << str << '\n';
	replaceString(str);
	std::cout << str << '\n';

	return 0;
}
