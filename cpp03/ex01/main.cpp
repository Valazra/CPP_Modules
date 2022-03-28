#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "***************** Constructors *****************" << std::endl;
	ClapTrap Toto("Toto");
	ScavTrap Monster("Monster");
	ScavTrap Monster2(Monster);

	std::cout << std::endl <<  "********* Actions of ClapTrap Toto *********" << std::endl;
	Toto.attack("Coco");
	Toto.takeDamage(5);
	Toto.beRepaired(3);

	std::cout << std::endl << "********* Actions of ScavTrap Monster *********" << std::endl;
	Monster.attack("Nono");
	Monster.takeDamage(10);
	Monster.beRepaired(30);
	Monster.guardGate();

	std::cout << std::endl << "***************** Destructors *****************" << std::endl;
	return (0);
}
