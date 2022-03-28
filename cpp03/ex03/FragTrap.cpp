#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_Hit_points = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
	return ;
}

FragTrap::FragTrap(std::string const name)
{
	std::cout << "FragTrap string constructor called" << std::endl;
	_Name = name;
	_Hit_points = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap default destructor called" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::setName(rhs.getName());
	ClapTrap::setHitPoints(rhs.getHitPoints());
	ClapTrap::setEnergyPoints(rhs.getEnergyPoints());
	ClapTrap::setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _Name << " wants to high fives !" << std::endl;
	return ;
}
