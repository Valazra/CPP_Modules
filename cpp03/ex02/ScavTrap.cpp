#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_Hit_points = 100;
	_Energy_points = 50;
	_Attack_damage = 20;
	return ;
}
 
ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "ScavTrap string constructor called" << std::endl;
	_Hit_points = 100;
	_Energy_points = 50;
	_Attack_damage = 20;
	return ;
}
 
ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap default destructor called" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	ClapTrap::setName(rhs.getName());
	ClapTrap::setHitPoints(rhs.getHitPoints());
	ClapTrap::setEnergyPoints(rhs.getEnergyPoints());
	ClapTrap::setAttackDamage(rhs.getAttackDamage());
	ScavTrap::setGuardGate(rhs.getGuardGate());
	return (*this);
}
 
void	ScavTrap::attack(const std::string& target)
{
	if (this->_Hit_points > 0 && this->_Energy_points > 0)
	{
		std::cout << _Name << " attacks " << target << ", causing " << _Attack_damage << " points of damage !" << std::endl;
		this->_Energy_points -= 1;
	}
	else
		std::cout << _Name << " has no energy points or hit points" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << _Name << " is now in Gate keeper mode." << std::endl;
	_Guard_gate_on = 1;
	return ;
}

int	ScavTrap::getGuardGate(void) const
{
	return (_Guard_gate_on);
}

void	ScavTrap::setGuardGate(bool const activated)
{
	_Guard_gate_on = activated;
	return ;
}
