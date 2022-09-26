#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *zombie;

    zombie = new Zombie[N];
    while (N--)
        zombie[N].setName(name);
    return (zombie);
}
