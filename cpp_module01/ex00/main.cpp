#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main(void)
{
	Zombie* zombieHeap;

	zombieHeap = newZombie("Max");
	zombieHeap->announce();
    randomChump("Yara");
    delete  zombieHeap;
    return (0);
}