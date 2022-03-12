/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:45:13 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 14:42:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat default destructor called" << std::endl;
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	_type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou miaou" << std::endl;
	return ;
}
