#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "***************** Constructors *****************" << std::endl;
	ClapTrap Toto("Toto");
	ScavTrap Tata("Tata");
	FragTrap Tutu("Tutu");

	std::cout << std::endl <<  "********* Attack *********" << std::endl;
	Toto.attack("Coco");
	Tata.attack("Coco");
	Tutu.attack("Coco");

	std::cout << std::endl << "********* Take damages *********" << std::endl;
	Toto.takeDamage(5);
	Tata.takeDamage(10);
	Tutu.takeDamage(15);
	
	std::cout << std::endl << "********* Repairs *********" << std::endl;
	Toto.beRepaired(5);
	Tata.beRepaired(10);
	Tutu.beRepaired(15);

	std::cout << std::endl << "********* Special Capacity *********" << std::endl;
	Tata.guardGate();
	Tutu.highFivesGuys();

	std::cout << std::endl << Tutu.getName() << " has " << Tutu.getHitPoints() << " hit points, " << Tutu.getEnergyPoints() << " energy points and " << Tutu.getAttackDamage() << " attack damage." << std::endl;
	std::cout << std::endl << "***************** Destructors *****************" << std::endl;

	return (0);
}
