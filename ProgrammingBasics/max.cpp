#include <iostream>

int max(int a, int b, int c);

int main() {
	std::cout << "max(1,2,3): " << max(1,2,3) << std::endl;
	std::cout << "max(2,3,1): " << max(2,3,1) << std::endl;
	std::cout << "max(3,1,2): " << max(3,1,2) << std::endl;
}

int max(int a, int b, int c) {

	if (a >= b && a >= c)
		return a;
	if (b >= a && b >= c)
		return b;
	else
		return c;
}
