#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char **av)
{
	std::string	end = "";
	std::string	line;
	if (ac != 4)
	{
		std::cout << "Error" << std::endl << "This program takes 3 arguments" \
		<< std::endl;
		return (1);
	}
	std::ifstream	ifs(av[1]);
	if (ifs.fail())
	{
		std::cout << "Error" << std::endl << "File does not exist" << std::endl;
		return (1);
	}
	while (!ifs.eof())
	{
		std::getline(ifs, line);
		end.append(line);
		end.append("\n");
	}
	end.pop_back();
	std::string s1 = av[2];
	std::string	s2 = av[3];
	size_t	f = end.find(s1);
	while (f != std::string::npos)
	{
		end.erase(f, s1.length());
		end.insert(f, s2);
		f = end.find(s1);
	}
	std::ofstream	ofs(std::string(av[1]) + ".replace");
	ofs << end;
	return (0);
}
