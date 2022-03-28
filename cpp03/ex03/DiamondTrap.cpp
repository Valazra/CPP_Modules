#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::_Name += "_clap_name";
	DiamondTrap::_Hit_points = FragTrap::_Hit_points;
	DiamondTrap::_Energy_points = ScavTrap::_Energy_points;
	DiamondTrap::_Attack_damage = FragTrap::_Attack_damage;
	return ;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap string constructor called" << std::endl;
	this->_Name = name;
	DiamondTrap::_Hit_points = FragTrap::_Hit_points;
	DiamondTrap::_Energy_points = ScavTrap::_Energy_points;
	DiamondTrap::_Attack_damage = FragTrap::_Attack_damage;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap default destructor called" << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	ClapTrap::setName(rhs.getName());
	ClapTrap::setHitPoints(rhs.getHitPoints());
	ClapTrap::setEnergyPoints(rhs.getEnergyPoints());
	ClapTrap::setAttackDamage(rhs.getAttackDamage());
	ScavTrap::setGuardGate(rhs.getGuardGate());
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name = " << this->_Name << std::endl;
	std::cout << "ClapTrap name = " << this->ClapTrap::_Name << std::endl;
}
