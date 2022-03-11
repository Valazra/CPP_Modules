/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:21:40 by user42            #+#    #+#             */
/*   Updated: 2022/03/11 02:03:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	public :
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);
		
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getName(void) const;
		void		setName(std::string const name);
		int		getHit_Points(void) const;
		void		setHit_Points(int const hit_points);
		int		getEnergy_Points(void) const;
		void		setEnergy_Points(int const energy_points);
		int		getAttack_Damage(void) const;
		void		setAttack_Damage(int const attack_damage);

	private :
		std::string	_Name;
		int		_Hit_points;
		int		_Energy_points;
		int		_Attack_damage;
};

#endif
