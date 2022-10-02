#include <iostream>
#include <string>
#include <fstream>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

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
	struct stat	statbuf;
	stat(av[1], &statbuf);
	if (!access(av[1], F_OK) && statbuf.st_mode & S_IXUSR)
	{
		std::cout << "Error" << std::endl << "First argument is a directory." \
		<< std::endl;
		return (2);
	}
	std::ifstream	ifs(av[1]);
	if (ifs.fail())
	{
		std::cout << "Error" << std::endl << "File does not exist" << std::endl;
		return (3);
	}
	std::string s1 = av[2];
	std::string	s2 = av[3];
	if (!s1.compare(""))
	{
		std::cout << "Error" << std::endl << "Cannot replace an empty string" \
		<< std::endl;
		return (4);
	}
	while (!ifs.eof())
	{
		std::getline(ifs, line);
		end.append(line);
		end.append("\n");
	}
	end.pop_back();
	if (s1.compare(s2))
	{
		size_t	f = end.find(s1);
		while (f != std::string::npos)
		{
			end.erase(f, s1.length());
			end.insert(f, s2);
			f = end.find(s1, f + s2.length());
		}
	}
	std::ofstream	ofs(std::string(av[1]) + ".replace");
	ofs << end;
	return (0);
}
