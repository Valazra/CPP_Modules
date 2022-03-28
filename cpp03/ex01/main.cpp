#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap Toto("Toto");
	ScavTrap Tata("Tata");

	Toto.attack("Coco");
	Toto.takeDamage(5);
	Toto.beRepaired(3);

	Tata.attack("Nono");
	Tata.takeDamage(10);
	Tata.beRepaired(30);
	
	Tata.guardGate();

	return (0);
}
