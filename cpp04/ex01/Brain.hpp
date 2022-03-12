/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:35:44 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 16:08:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public :
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);

		Brain & operator=(Brain const & rhs);

	protected :
		std::string _ideas[100];
};

#endif
