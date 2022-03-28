#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "***************** Constructors *****************" << std::endl;
	ClapTrap Toto("Toto");
	ScavTrap Tata("Tata");
	FragTrap Tutu("Tutu");
	DiamondTrap Titi("Titi");

	std::cout << std::endl <<  "********* Attack *********" << std::endl;
	Toto.attack("Coco");
	Tata.attack("Coco");
	Tutu.attack("Coco");
	Titi.attack("Coco");

	std::cout << std::endl << "********* Take damages *********" << std::endl;
	Toto.takeDamage(5);
	Tata.takeDamage(10);
	Tutu.takeDamage(15);
	Titi.takeDamage(15);
	
	std::cout << std::endl << "********* Repairs *********" << std::endl;
	Toto.beRepaired(5);
	Tata.beRepaired(10);
	Tutu.beRepaired(15);
	Titi.beRepaired(15);

	std::cout << std::endl << "********* Special Capacity *********" << std::endl;
	Tata.guardGate();
	Tutu.highFivesGuys();
	Titi.guardGate();
	Titi.highFivesGuys();
	Titi.whoAmI();

	std::cout << std::endl << "***************** Destructors *****************" << std::endl;

	return (0);
}
