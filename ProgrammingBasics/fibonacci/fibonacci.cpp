#include "fibonacci.hpp"

int fibonacci_iterative(int sequence)
{
	if (sequence <= 0)
		return (0);

	if (sequence == 1 || sequence == 2)
		return (1);

	int result = 0;
	int first = 1;
	int second = 1;

	for (int i = 0; i < sequence - 2; i++) {
		result = first + second;
		first = second;
		second = result;
	}

	return (result);
}

int fibonacci_recursive(int sequence)
{
	if (sequence <= 0)
		return (0);

	if (sequence == 1 || sequence == 2)
		return (1);

	return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
}
