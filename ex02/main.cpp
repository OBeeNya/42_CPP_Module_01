#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "string address in memory: " << &str << std::endl;
	std::cout << "address stored in stringPTR: " << stringPTR << std::endl;
	std::cout << "address stored in stringREF : " << &stringREF << std::endl;

	std::cout << "string value: " << str << std::endl;
	std::cout << "value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed by stringREF: " << stringREF << std::endl;

	return (0);
}