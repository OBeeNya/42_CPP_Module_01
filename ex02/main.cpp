#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "adresse de la string en mémoire : " << &str << std::endl;
	std::cout << "adresse stockée dans stringPTR : " << stringPTR << std::endl;
	std::cout << "adresse stockée dans stringREF : " << &stringREF << std::endl;

	std::cout << "valeur de la string : " << str << std::endl;
	std::cout << "valeur pointée par stringPTR : " << *stringPTR << std::endl;
	std::cout << "valeur pointée par stringREF : " << stringREF << std::endl;

	return (0);
}