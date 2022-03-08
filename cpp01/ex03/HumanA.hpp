/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:52:34 by user42            #+#    #+#             */
/*   Updated: 2022/03/08 15:01:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);
		void	attack(void);

	private :
		Weapon		_weapon;
		std::string	_name;
};

#endif
