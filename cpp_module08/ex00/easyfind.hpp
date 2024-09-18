#pragma once
#include <iostream>
#include <algorithm>

template<typename T>
void easyfind(T &a, int len) {
	typename T::iterator it = std::find(a.begin(), a.end(), len);
	if (it != a.end())
		std::cout << SYS_MSG << GREEN << "Element found at position " << std::distance(a.begin(), it) << E;
	else {
		std::cout << SYS_MSG << RED << "Element not found" << E;
		throw std::exception();
	}
}