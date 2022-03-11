/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:27:43 by user42            #+#    #+#             */
/*   Updated: 2022/03/11 02:17:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Anonymous"), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}


ClapTrap::ClapTrap(std::string name) : _Name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "String constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_Hit_points > 0 && this->_Energy_points > 0)
	{
		std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _Attack_damage << " points of damage !" << std::endl;
		this->_Energy_points -= 1;
	}
	else
		std::cout << "No energy points or hit points" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit_points > 0 && this->_Energy_points > 0)
	{
		std::cout << "ClapTrap " << _Name << " took " << amount << " points of damage !" << std::endl;
		this->_Hit_points -= amount;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Hit_points > 0 && this->_Energy_points > 0)
	{
		std::cout << "ClapTrap " << _Name << " has been repaired for " << amount << " health points !" << std::endl;
		this->_Hit_points += amount;
		this->_Energy_points -= 1;
	}
	else
		std::cout << "No energy points or hit points" << std::endl;
	return ;
}

std::string	ClapTrap::getName(void) const
{
	return (_Name);
}

void		ClapTrap::setName(std::string const name)
{
	this->_Name = name;
	return ;
}

int		ClapTrap::getHit_Points(void) const
{
	return (_Hit_points);
}

void		ClapTrap::setHit_Points(int const hit_points)
{
	this->_Hit_points = hit_points;
	return ;
}

int		ClapTrap::getEnergy_Points(void) const
{
	return (_Energy_points);
}

void		ClapTrap::setEnergy_Points(int const energy_points)
{
	this->_Energy_points = energy_points;
	return ;
}

int		ClapTrap::getAttack_Damage(void) const
{
	return (_Attack_damage);
}

void		ClapTrap::setAttack_Damage(int const attack_damage)
{
	this->_Attack_damage = attack_damage;
	return ;
}
