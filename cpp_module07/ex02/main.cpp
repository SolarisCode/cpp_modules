#include "Array.hpp"

int main()
{
	Array <int> arr(5);
	Array <int> const arr2(4);
	arr2[0] = 1;
	arr2[1] = 2;
	arr2[2] = 3;
	arr2[3] = 4;
	std::cout << arr2[0] << "\n";
	std::cout << arr2[1] << "\n";
	std::cout << arr2[2] << "\n";
	try
	{
		std::cout << arr2[-2] << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << arr2[10] << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "SIZE :" << arr2.size() << "\n";
	arr = arr2;
	std::cout << arr[0] << "\n";
	std::cout << arr[1] << "\n";
	std::cout << arr[2] << "\n";
	try
	{
		std::cout << arr[-2] << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << arr[10] << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "SIZE : " << arr.size();
	return (0);
}