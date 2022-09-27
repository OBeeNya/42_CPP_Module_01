#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char **av)
{
	std::string	s = "";
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
	std::string s1 = av[2];
	std::string	s2 = av[3];
	while (!ifs.eof())
	{
		std::getline(ifs, line);
		for (int i = 0; i < line.length(); i++)
		{
			int j = 0;
			if (line[i] == s1[j] && i + s1.length() <= line.length())
			{
				int	k;
				for (k = i; k < i + s1.length(); k++)
				{
					if (line[k] != s1[j])
						break ;
					j++;
				}
				if (k == i + s1.length())
				{
					s.append(s2);
					i = k - 1;
				}
				else
					s.push_back(line[i]);
			}
			else
				s.push_back(line[i]);
		}
	}
	std::ofstream	ofs(av[1]);
	ofs << s;
	return (0);
}
