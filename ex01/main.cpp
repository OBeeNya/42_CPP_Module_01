#include "Zombie.hpp"

int	main(void)
{
	int		N;
	Zombie	*zombie;

	N = 10;
	zombie = zombieHorde(N, "Foo");
	while (N--)
		zombie[N].announce();
	delete [] zombie;

	return (0);
}
