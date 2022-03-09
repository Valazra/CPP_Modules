/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:48:19 by user42            #+#    #+#             */
/*   Updated: 2022/03/09 13:18:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	empty_string(std::string str)
{
	if (str.length() < 1)
	{
		std::cout << "Problem with empty string" << std::endl;
		return (1);
	}
	return (0);
}

std::string replace(std::string data_str, std::string old_str, std::string new_str)
{
	unsigned long long	i;
	unsigned long long	j;
	std::string		result;

	i = 0;
	while (i < data_str.length())
	{
		j = 0;
		while (j < old_str.length())
		{
			if (data_str[i + j] == old_str[j] && j == old_str.length() - 1)
			{
				result += new_str;
				i += old_str.length() - 1;
			}
			else if (data_str[i + j] == old_str[j])
				;
			else
			{
				result += data_str[i];
				break ;
			}
			j++;
		}
		i++;
	}
	return (result);
}

int	main(int ac, char **av)
{
	std::string	file_name;
	std::string	old_str;
	std::string	new_str;
	std::string	data_str;
	std::string	tmp;
	std::string	result;

	if (ac != 4)
	{
		std::cout << "Problem with number of args" << std::endl;
		return (1);
	}
	old_str = av[2];
	if (empty_string(old_str))
		return (1);
	new_str = av[3];
	if (empty_string(new_str))
		return (1);
	std::ifstream ifs(av[1]);
	if (!ifs.is_open())
	{
		std::cout << "Problem with ifstream open" << std::endl;
		return (1);
	}
	file_name = av[1];
	file_name +=  ".replace";
	while (getline(ifs, tmp))
	{
		data_str += tmp;
		if (!ifs.eof())
			data_str += '\n';
	}
	result = replace(data_str, old_str, new_str);
	std::ofstream ofs(file_name.c_str());
	ofs << result;
	return (0);
}
