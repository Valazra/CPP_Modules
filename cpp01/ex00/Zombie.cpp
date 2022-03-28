#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Anonymous")
{
	std::cout << "The zombie " << _name << " has been created." << std::endl;
	return ;
}

Zombie::Zombie(std::string const name) : _name(name)
{
	std::cout << "The zombie " << _name << " has been created." << std::endl;
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
