/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:46:19 by user42            #+#    #+#             */
/*   Updated: 2022/03/09 15:11:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public :
		Weapon(std::string type);
		~Weapon(void);
		std::string& getType(void);
		void	setType(std::string type);
		
	private :
		std::string	_type;
};

#endif
