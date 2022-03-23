/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:02:12 by user42            #+#    #+#             */
/*   Updated: 2022/03/23 02:48:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		harl;
	std::string	level_tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		i;

	if (ac != 2)
	{
		std::cout << "Error : bad number of args" << std::endl;
		return (1);
	}
	for (i = 0 ; i < 4 && level_tab[i] != av[1] ; i++)
		;
	switch(i)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
