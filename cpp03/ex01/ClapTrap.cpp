/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:27:43 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 13:24:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Anonymous"), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}


ClapTrap::ClapTrap(std::string name) : _Name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "ClapTrap string constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap default destructor called" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	_Name = rhs.getName();
	_Hit_points = rhs.getHitPoints();
	_Energy_points = rhs.getEnergyPoints();
	_Attack_damage = rhs.getAttackDamage();
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_Hit_points > 0 && this->_Energy_points > 0)
	{
		std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _Attack_damage << " points of damage !" << std::endl;
		this->_Energy_points -= 1;
	}
	else
		std::cout << "ClapTrap " << _Name << " has no energy points or hit points" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit_points > 0)
	{
		std::cout << "ClapTrap " << _Name << " took " << amount << " points of damage !" << std::endl;
		this->_Hit_points -= amount;
	}
	else
		std::cout << "ClapTrap " << _Name << " is already dead." << std::endl;
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
		std::cout << "ClapTrap " << _Name << " has no energy points or hit points" << std::endl;
	return ;
}

std::string	ClapTrap::getName(void) const
{
	return (_Name);
}

int		ClapTrap::getHitPoints(void) const
{
	return (_Hit_points);
}

int		ClapTrap::getEnergyPoints(void) const
{
	return (_Energy_points);
}

int		ClapTrap::getAttackDamage(void) const
{
	return (_Attack_damage);
}

void		ClapTrap::setName(std::string const name)
{
	this->_Name = name;
	return ;
}

void		ClapTrap::setHitPoints(int const hitPoints)
{
	this->_Hit_points = hitPoints;
	return ;
}

void		ClapTrap::setEnergyPoints(int const energyPoints)
{
	this->_Energy_points = energyPoints;
	return ;
}

void		ClapTrap::setAttackDamage(int const attackDamage)
{
	this->_Attack_damage = attackDamage;
	return ;
}
