#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
	std::cout << std::endl << "Creating a vector of 10 elements\n";
	std::vector<int> tab;
	std::cout << "Filling the vector with { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
		tab.push_back(i);

	std::cout << "Trying to find 8 : " << std::endl;
	try {
		easyfind(tab, 8);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "Trying to find 10 :" << std::endl;
	try
	{ easyfind(tab, 10); }
		catch (std::exception &e) { std::cout << EX << e.what() << std::endl; }
	return 0;
}