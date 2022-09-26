#ifndef HUMANA_HPP
# define HUMAN_CPP

# include "Weapon.hpp"

class	HumanA
{

	public:

	HumanA::HumanA(Weapon weapon);
	HumanA::~HumanA(void);

	void	attack(void) const;

	private:

	Weapon		_weapon;
	std::string	name;

};

#endif