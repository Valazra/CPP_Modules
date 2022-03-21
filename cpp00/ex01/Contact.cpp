/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:10:06 by user42            #+#    #+#             */
/*   Updated: 2022/03/21 16:45:12 by vazra            ###   ########.fr       */
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

std::string	Contact::getFirstName(void)
{
	return (_first_name);
}

std::string	Contact::getLastName(void)
{
	return (_last_name);
}

std::string	Contact::getNickname(void)
{
	return (_nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return (_phone_number);
}

std::string	Contact::getDarkestSecret(void)
{
	return (_darkest_secret);
}

void	Contact::add_contact(void)
{
	std::string	buffer1;
	std::string	buffer2;
	std::string	buffer3;
	std::string	buffer4;
	std::string	buffer5;

	std::cout << "first name : ";
	std::getline(std::cin, buffer1);
	while (buffer1.length() == 0)
	{
		std::cout << "It can't be empty" << std::endl;
		std::cout << "first name : ";
		std::getline(std::cin, buffer1);
	}
	std::cout << "last name : ";
	std::getline(std::cin, buffer2);
	while (buffer2.length() == 0)
	{
		std::cout << "It can't be empty" << std::endl;
		std::cout << "last name : ";
		std::getline(std::cin, buffer2);
	}
	std::cout << "nickname : ";
	std::getline(std::cin, buffer3);
	while (buffer3.length() == 0)
	{
		std::cout << "It can't be empty" << std::endl;
		std::cout << "nickname : ";
		std::getline(std::cin, buffer3);
	}
	std::cout << "phone number : ";
	std::getline(std::cin, buffer4);
	while (buffer4.length() == 0)
	{
		std::cout << "It can't be empty" << std::endl;
		std::cout << "phone number : ";
		std::getline(std::cin, buffer4);
	}
	std::cout << "darkest secret : ";
	std::getline(std::cin, buffer5);
	while (buffer5.length() == 0)
	{
		std::cout << "It can't be empty" << std::endl;
		std::cout << "darkest secret : ";
		std::getline(std::cin, buffer5);
	}
	this->_first_name = buffer1;
	this->_last_name = buffer2;
	this->_nickname = buffer3;
	this->_phone_number = buffer4;
	this->_darkest_secret = buffer5;
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
