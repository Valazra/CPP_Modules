#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void) const
{
	if (!this->_weapon)
		std::cout << _name << " has no weapon.." << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
	return ;
}
