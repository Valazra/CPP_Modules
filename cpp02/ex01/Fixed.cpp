/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:12:40 by user42            #+#    #+#             */
/*   Updated: 2022/03/28 15:08:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value_nb(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	_value_nb = n << _scaling_factor;
	return ;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	_value_nb = roundf(f * (1 << _scaling_factor));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	return (this->_value_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value_nb = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)(_value_nb) / (1 << _scaling_factor));
}

int	Fixed::toInt(void) const
{
	return (_value_nb >> _scaling_factor);
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value_nb = rhs.getRawBits();
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
