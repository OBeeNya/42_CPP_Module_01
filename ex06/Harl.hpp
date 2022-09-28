#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl
{

	public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);
	int		identify(std::string lvl);
	void	filter(std::string lvl);

	private:

	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);

};

struct	func_ptr
{
	void	(Harl::*f)(void);
};


#endif
