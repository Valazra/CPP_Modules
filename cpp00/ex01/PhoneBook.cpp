/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:03:47 by user42            #+#    #+#             */
/*   Updated: 2022/03/23 14:45:48 by vazra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		i++;
	}
	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result);
}

void	search(Contact repertory[8], int index, int full)
{
	std::string	buffer;
	int	num;

	if (full == 0)
	{
		if (index == 0)
		{
			std::cout << "No contact in repertory" << std::endl;
			return ;
		}
		else
		{
			std::cout << "All Contacts : " << std::endl;
			std::cout << "     index|first_name| last_name|  nickname" << std::endl;
			for (int i = 0 ; i < index ; i++)
			{
				std::cout << "         " << i << '|';
				repertory[i].Contact::display_columns();
				std::cout << std::endl;
			}
		}
	}
	else
	{
		std::cout << "All Contacts : " << std::endl;
		std::cout << "     index|first_name| last_name|  nickname" << std::endl;
		for (int i = 0 ; i < 8 ; i++)
		{
			std::cout << "         " << i << '|';
			repertory[i].Contact::display_columns();
			std::cout << std::endl;
		}
	}
	std::cout << "You can choose an index to display the contact's informations" << std::endl;
	std::getline(std::cin, buffer);
	const char *cstr = buffer.c_str();
	num = ft_atoi(cstr);
	if (full == 0)
	{
		if (num < index && num >= 0)
			repertory[num].Contact::display_one_contact();
		else
			std::cout << "Bad index" << std::endl;
	}
	else
	{
		if (num >= 0 && num < 8)
			repertory[num].Contact::display_one_contact();
		else
			std::cout << "Bad index" << std::endl;
	}
}

int	PhoneBook::start(void)
{
	std::string buffer;
	int	index;
	int	full;

	index = 0;
	full = 0;
	std::cout << "PhoneBook has been started : Please enter one of these commands : ADD / SEARCH / EXIT" << std::endl;
	while (std::getline(std::cin, buffer))
	{
		if (buffer == "ADD")
		{
			if (index == 8)
			{
				full = 1;
				index = 0;
			}
			_repertory[index].add_contact();
			index++;
		}
		else if (buffer == "SEARCH")
			search(_repertory, index, full);
		else if (buffer == "EXIT")
		{
			std::cout << "Phone has been disconnected successfully." << std::endl;
			return (0);
		}
		else
			std::cout << "Bad command : ";
		std::cout << "Please enter one of these commands : ADD / SEARCH / EXIT" << std::endl;
	}
	return (0);
}
