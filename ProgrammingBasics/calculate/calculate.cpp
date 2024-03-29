#include "calculate.hpp"

std::string calculate(const std::string& command, int first, int second) {

	if (command == "add")
		return std::to_string(first + second);
	if (command == "subtract")
		return std::to_string(first - second);
	if (command == "multiply")
		return std::to_string(first * second);

	if (command == "divide")
	{
		if (second != 0)
			return std::to_string(first / second);
		else
			return "Division by 0";

	} else {
		return "Invalid data";
	}
}
