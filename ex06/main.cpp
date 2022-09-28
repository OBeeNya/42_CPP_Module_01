#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		harl;
	std::string	lvl;

	if (ac != 2)
	{
		std::cout << "Error" << std::endl << "This program takes one argument"
		<< std::endl;
		return (1);
	}

	lvl = av[1];
	if (!harl.identify(lvl))
	{
		std::cout << "[ Probably complaining about insignificant problems ]"
		<< std::endl;
		return (0);
	}

	harl.filter(lvl);

	return (0);
}
