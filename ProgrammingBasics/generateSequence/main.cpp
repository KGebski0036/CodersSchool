#include "generateSequence.hpp"
#include <iostream>

int	main(void)
{
	for (const int element : generateSequence(10, 5))
		std::cout << element << " | ";
	return (0);
}
