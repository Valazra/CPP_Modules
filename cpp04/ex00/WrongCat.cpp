/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:45:13 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 15:32:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat default destructor called" << std::endl;
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	_type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong miaou miaou" << std::endl;
	return ;
}
