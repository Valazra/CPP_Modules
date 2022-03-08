/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:53:01 by user42            #+#    #+#             */
/*   Updated: 2022/03/08 14:56:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public :
		Zombie(std::string const name);
		~Zombie(void);
		void announce(void) const;
	private :
		std::string const _name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif
