#include "Zombie.hpp"

Zombie::Zombie(const std::string name)
{
	this->_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void	Zombie::ft_announce(void) const
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
