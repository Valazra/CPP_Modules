/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:01:25 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 13:22:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		ScavTrap & operator=(ScavTrap const & rhs);

		void	attack(const std::string& target);
		int	getGuardGate(void) const;
		void	setGuardGate(int const activated);

	private :
		int	_Guard_gate_on;
		void	guardGate(void);
		
};

#endif
