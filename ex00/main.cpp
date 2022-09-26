#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	zombie = newZombie("Foo");
	zombie->ft_announce();
	delete zombie;

	randomChump("Bar");
	
	return (0);
}
