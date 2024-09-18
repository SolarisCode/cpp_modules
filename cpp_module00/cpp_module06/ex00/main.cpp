#include "ScalarConverter.hpp"
#include <exception>

int main(int ac, char **av) {
	if (ac == 2) {
		try {
			ScalarConvert::convert(av[1]);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		return EXIT_SUCCESS;
	}
	std::cout << "Wrong parameters" << std::endl;
	std::cout << "Usage: ./convert <number>" << std::endl;
	return EXIT_SUCCESS;
}
