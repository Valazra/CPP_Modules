/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:53:25 by user42            #+#    #+#             */
/*   Updated: 2022/03/08 14:02:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string const name) : _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "The zombie " << _name << " has been destroyed." << std::endl;
	return ;
}

void	Zombie::announce(void) const{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
