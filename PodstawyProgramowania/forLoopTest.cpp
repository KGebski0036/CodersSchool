#include <iostream>

constexpr size_t tab_size = 100;

int main() {
	int tab[tab_size];

	for (int i = 0; i < tab_size; i++) {
		tab[i] = (i * 2) + 1;
	}

	for (int i = 0; i < tab_size; i++) {
		std::cout << tab[i] << std::endl;
	}

}
