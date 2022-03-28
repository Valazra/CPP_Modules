#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap Toto("Toto");
	ScavTrap Tata("Tata");
	FragTrap Tutu("Tutu");

	Toto.attack("Coco");
	Tata.attack("Coco");
	Tutu.attack("Coco");

	Toto.takeDamage(5);
	Tata.takeDamage(10);
	Tutu.takeDamage(15);
	
	Toto.beRepaired(5);
	Tata.beRepaired(10);
	Tutu.beRepaired(15);

	return (0);
}
