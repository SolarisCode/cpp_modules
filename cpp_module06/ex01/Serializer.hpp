#pragma once
#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <cstdint>
# include <sstream>
# include <string>

typedef struct 
{
	char	a;
	int		b;
}			Data;

class	Serializer
{
	public:
		static uintptr_t	serialize(Data * ptr);
		static Data *		deserialize(uintptr_t raw);
		~Serializer();

	private:
		Serializer();
		Serializer(const Serializer & other);
		Serializer &	operator=(const Serializer & other);
};
#endif