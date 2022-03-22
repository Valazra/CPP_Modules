/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:53:25 by user42            #+#    #+#             */
/*   Updated: 2022/03/22 18:48:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Anonymous")
{
	std::cout << "The zombie " << _name << " has been created." << std::endl;
	return ;
}

Zombie::Zombie(std::string const name) : _name(name)
{
	std::cout << "The zombie " << _name << " has been created." << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "The zombie " << _name << " has been destroyed." << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
