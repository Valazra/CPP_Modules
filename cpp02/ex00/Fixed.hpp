/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:39:53 by user42            #+#    #+#             */
/*   Updated: 2022/03/10 13:34:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public :
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);
		
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	private :
		int			_value_nb;
		static const int	_nb_bits = 8;
};

#endif