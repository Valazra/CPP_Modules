/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:53:01 by user42            #+#    #+#             */
/*   Updated: 2022/03/08 14:55:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public :
		Zombie(void);
		Zombie(std::string const name);
		~Zombie(void);
		void	announce(void) const;
		void	setName(std::string const name);

	private :
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
