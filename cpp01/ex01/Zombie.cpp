#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "The zombie has been created." << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "The zombie " << _name << " has been destroyed." << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	std::cout << "Function setName has been called" << std::endl;
	return ;
}
