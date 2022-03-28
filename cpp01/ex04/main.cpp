#include <iostream>
#include <fstream>
#include <string>

int	empty_string(std::string str)
{
	if (str.length() < 1)
	{
		std::cout << "Problem with empty string" << std::endl;
		return (1);
	}
	return (0);
}

void replace_line(std::string &line, std::string old_str, std::string new_str)
{
	size_t	actual_pos = 0;
	size_t	pos_to_change;

	while ((pos_to_change = line.find(old_str, actual_pos)) != std::string::npos)
	{
		line.erase(pos_to_change, old_str.length());
		line.insert(pos_to_change, new_str);
		actual_pos = pos_to_change + new_str.length();
	}
}

int	main(int ac, char **av)
{
	std::string	file_name;
	std::string	old_str;
	std::string	new_str;
	std::string	line;

	if (ac != 4)
	{
		std::cout << "Problem with number of args" << std::endl;
		return (1);
	}
	old_str = av[2];
	if (empty_string(old_str))
		return (1);
	new_str = av[3];
	std::ifstream ifs(av[1]);
	if (!ifs.is_open())
	{
		std::cout << "Problem with ifstream open" << std::endl;
		return (1);
	}
	file_name = av[1];
	file_name +=  ".replace";
	std::ofstream ofs(file_name.c_str());
	if (!ofs.is_open())
	{
		std::cout << "Problem with ofstream open" << std::endl;
		ifs.close();
		return (1);
	}
	while (getline(ifs, line))
	{
		replace_line(line, old_str, new_str);
		ofs << line << std::endl;
	}
	return (0);
}
