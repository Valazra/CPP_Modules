/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:21:16 by user42            #+#    #+#             */
/*   Updated: 2022/03/11 15:22:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap Toto("Toto");
	ScavTrap Tata("Tata");

	Toto.attack("Coco");
	Toto.takeDamage(5);
	Toto.beRepaired(3);

	Tata.attack("Nono");
	Tata.takeDamage(10);
	Tata.beRepaired(30);

	return (0);
}
