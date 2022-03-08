/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:52:32 by user42            #+#    #+#             */
/*   Updated: 2022/03/08 13:31:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie Popo("Popo");
	Popo.announce();

	Zombie Roro("Roro");
	Roro.announce();

	Zombie* Toto = newZombie("Toto");
	Toto->announce();
	delete Toto;

	Zombie* Lolo = new Zombie("Lolo");
	Lolo->announce();
	delete Lolo;

	randomChump("Coco");

	return (0);
}
