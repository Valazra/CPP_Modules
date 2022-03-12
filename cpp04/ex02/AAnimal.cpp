/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:32:36 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 16:20:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("")
{
	std::cout << "AAnimal default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal default destructor called" << std::endl;
	return ;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	_type = rhs.getType();
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (_type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Sound of an AAnimal !" << std::endl;
	return ;
}
