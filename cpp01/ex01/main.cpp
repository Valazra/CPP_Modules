/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:51:19 by user42            #+#    #+#             */
/*   Updated: 2022/03/08 14:22:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* horde;
	horde = zombieHorde(8, "Toto");
	for (int i = 0 ; i < 8 ; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
