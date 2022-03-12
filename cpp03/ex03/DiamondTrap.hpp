/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:39:22 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 13:31:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		DiamondTrap(void);
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const & src);
		~DiamondTrap(void);

		DiamondTrap & operator=(DiamondTrap const & rhs);

		void whoAmI(void);

	private :
		std::string _Name;
};

#endif
