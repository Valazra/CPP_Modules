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
	Tata.takeDamage(5);
	Tutu.takeDamage(5);
	
	std::cout << std::endl << "********* Repairs *********" << std::endl;
	Toto.beRepaired(25);
	Tata.beRepaired(25);
	Tutu.beRepaired(25);

	std::cout << std::endl << "********* Special Capacity *********" << std::endl;
	Tata.guardGate();
	Tutu.highFivesGuys();

	std::cout << std::endl << "********* Status *********" << std::endl;
	std::cout << Toto.getName() << " has " << Toto.getHitPoints() << " hit points, " << Toto.getEnergyPoints() << " energy points and " << Toto.getAttackDamage() << " attack damage." << std::endl;
	std::cout << Tata.getName() << " has " << Tata.getHitPoints() << " hit points, " << Tata.getEnergyPoints() << " energy points and " << Tata.getAttackDamage() << " attack damage." << std::endl;
	std::cout << Tutu.getName() << " has " << Tutu.getHitPoints() << " hit points, " << Tutu.getEnergyPoints() << " energy points and " << Tutu.getAttackDamage() << " attack damage." << std::endl;
	std::cout << std::endl << "***************** Destructors *****************" << std::endl;

	return (0);
}
