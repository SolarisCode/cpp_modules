#include "Serializer.hpp"

#include <iostream>
#include <iomanip>

int	main()
{
	Data *	strct = new Data();

	std::cout << "----- ----- ----- ----- ----- ----- -----" << std::endl;

	std::cout << "Creating packet:" << std::endl;
	std::cout << "a: \'c\'\nb: 3" << std::endl;

	strct->a = 'c';
	strct->b = 3;

	std::cout << "Serialising packet..." << std::endl;

	uintptr_t raw = Serializer::serialize(strct);

	delete strct;

	std::cout << "Deserialising packet..." << std::endl;

	Data * rcv = Serializer::deserialize(raw);

	std::cout << "Received contents:" << std::endl;
	std::cout << "a: " << "\'" << rcv->a << "\'" << std::endl;
	std::cout << "b: " << rcv->b << std::endl;
	
	std::cout << "----- ----- ----- ----- ----- ----- -----" << std::endl;
	
	return (0);
}