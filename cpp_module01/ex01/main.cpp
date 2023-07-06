#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(void)
{
    Zombie* zombieGroup;

    zombieGroup = zombieHorde(5, "Legion");
    delete [] zombieGroup;
    return (0);
}