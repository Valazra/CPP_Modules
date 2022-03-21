/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:30:31 by user42            #+#    #+#             */
/*   Updated: 2022/03/21 16:51:29 by vazra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int ac, char **av)
{
	(void)av;
	PhoneBook phonebook;

	if (ac == 1)
		phonebook.start();
	else
		std::cout << "Bad number of args" << std::endl;
	return (0);
}
