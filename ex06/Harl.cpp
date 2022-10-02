#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my " << \
	"7XL-double-cheese-triple-pickle-special ketchup burger. I really do !" \
	<< std::endl;
	return ;
}

void	Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. " << \
	"You didn’t put enough bacon in my burger ! If you did, I wouldn’t be " \
	<< "asking for more !" << std::endl;
	return ;
}

void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. " << \
	"I’ve been coming for years whereas you started working here since last " \
	<< "month." << std::endl;
	return ;
}

void	Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." \
	<< std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	func_ptr	funcs[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, \
							&Harl::_error};

	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == lvls[i])
		{
			(this->*(funcs[i].f))();
			return ;
		}
	}

	return ;
}

int	Harl::identify(std::string lvl)
{
	if (!lvl.compare("DEBUG") || !lvl.compare("WARNING")
		|| !lvl.compare("INFO") || !lvl.compare("ERROR"))
		return (1);
	return (0);
}

void	Harl::filter(std::string lvl)
{
	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i = 0;
	while (lvl.compare(lvls[i]))
		i++;

	switch (i)
	{
		case 0:
			this->complain(lvls[0]);
		case 1:
			this->complain(lvls[1]);
		case 2:
			this->complain(lvls[2]);
		case 3:
			this->complain(lvls[3]);
	}

}
