#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(const std::string name) : _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name + ":  BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(const std::string name)
{
	this->_name = name;
	return ;
}
