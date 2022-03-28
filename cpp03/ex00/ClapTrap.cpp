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
