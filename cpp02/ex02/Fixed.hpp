/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:57:17 by user42            #+#    #+#             */
/*   Updated: 2022/03/27 13:57:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public :
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const n);
		Fixed(float const f);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);
		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;
		bool operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);


		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;
		static Fixed & min(Fixed & a, Fixed & b);
		static Fixed & max(Fixed & a, Fixed & b);
		static Fixed const & min(Fixed const & a, Fixed const & b);
		static Fixed const & max(Fixed const & a, Fixed const & b);

	private :
		int			_value_nb;
		static const int	_scaling_factor = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
