#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie* horde;

    horde = new Zombie[N];
    for (int count = 0; count < N; count++) {
        horde[count].setName(name);
        horde[count].announce();
    }
    return (horde);
}