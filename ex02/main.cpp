#include <iostream>
#include <string>

int	main(void)
{
	std::string str;
	std::string	*stringPTR;
	std::string	&stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;

	std::cout << "adresse de la string en mémoire : " << &str << std::endl;
	std::cout << "adresse stockée dans stringPTR : " << stringPTR << std::endl;
	std::cout << "adresse stockée dans stringREF : " << &stringREF << std::endl;

	std::cout << "valeur de la string : " << str << std::endl;
	std::cout << "valeur pointée par stringPTR : " << *stringPTR << std::endl;
	std::cout << "valeur pointée par stringREF : " << stringREF << std::endl;

	return (0);
}