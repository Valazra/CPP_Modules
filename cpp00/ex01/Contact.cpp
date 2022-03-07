/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:10:06 by user42            #+#    #+#             */
/*   Updated: 2022/03/07 23:40:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::add_contact(void)
{
	std::cout << "first name : ";
	std::getline(std::cin, this->_first_name);
	std::cout << "last name : ";
	std::getline(std::cin, this->_last_name);
	std::cout << "nickname : ";
	std::getline(std::cin, this->_nickname);
	std::cout << "phone number : ";
	std::getline(std::cin, this->_phone_number);
	std::cout << "darkest secret : ";
	std::getline(std::cin, this->_darkest_secret);
	std::cout << this->_first_name << " has been added successfully" << std::endl;
}

void	Contact::display_columns(void) const
{
	if (this->_first_name.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << this->_first_name[i];
		std::cout << '.';
	}
	else
	{
		int i = 0;
		int size = this->_first_name.length();
		while (i < 10 - size)
		{
			std::cout << ' ';
			i++;
		}
		std::cout << this->_first_name;
	}
	std::cout << '|';
	if (this->_last_name.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << this->_last_name[i];
		std::cout << '.';
	}
	else
	{
		int i = 0;
		int size = this->_last_name.length();
		while (i < 10 - size)
		{
			std::cout << ' ';
			i++;
		}
		std::cout << this->_last_name;
	}
	std::cout << '|';
	if (this->_nickname.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << this->_nickname[i];
		std::cout << '.';
	}
	else
	{
		int i = 0;
		int size = this->_nickname.length();
		while (i < 10 - size)
		{
			std::cout << ' ';
			i++;
		}
		std::cout << this->_nickname;
	}
}

void	Contact::display_one_contact(void) const
{
	std::cout << "first name : " << this->_first_name << std::endl;
	std::cout << "last name : " << this->_last_name << std::endl;
	std::cout << "nickname : " << this->_nickname << std::endl;
	std::cout << "phone number : " << this->_phone_number << std::endl;
	std::cout << "darkest secret : " << this->_darkest_secret << std::endl;
}
