/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:29:22 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 13:26:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap & operator=(FragTrap const & rhs);

	private :
		void	highFivesGuys(void);
};

#endif
