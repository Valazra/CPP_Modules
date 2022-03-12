/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:44:15 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 16:07:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	int	i;

	i = 0;
	std::cout << "Brain default constructor called" << std::endl;
	while (i < 100)
	{
		this->_ideas[i] = "OMG I HAVE AN IDEA";
		i++;
	}
	return ;
}

Brain::Brain(Brain const & src)
{
	int	i;

	i = 0;
	std::cout << "Brain copy constructor called" << std::endl;
	while (i < 100)
	{
		this->_ideas[i] = src._ideas[i];
		i++;
	}
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain default destructor called" << std::endl;
	return ;
}

Brain & Brain::operator=(Brain const & rhs)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = rhs._ideas[i];
		i++;
	}
	return (*this);
}
