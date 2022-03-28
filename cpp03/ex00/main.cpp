#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Toto("Toto");
	
	std::cout << Toto.getName() << " has " << Toto.getHitPoints() << " hit points, " << Toto.getEnergyPoints() << " energy points and " << Toto.getAttackDamage() << " attack damage." << std::endl;
	std::cout << "**************** Toto attacks ************" << std::endl;
	Toto.attack("Coco");
	std::cout << Toto.getName() << " has " << Toto.getHitPoints() << " hit points, " << Toto.getEnergyPoints() << " energy points and " << Toto.getAttackDamage() << " attack damage." << std::endl;
	std::cout << "**************** Toto takes damages ************" << std::endl;
	Toto.takeDamage(5);
	std::cout << Toto.getName() << " has " << Toto.getHitPoints() << " hit points, " << Toto.getEnergyPoints() << " energy points and " << Toto.getAttackDamage() << " attack damage." << std::endl;
	std::cout << "**************** Toto repairs himself ************" << std::endl;
	Toto.beRepaired(3);
	std::cout << Toto.getName() << " has " << Toto.getHitPoints() << " hit points, " << Toto.getEnergyPoints() << " energy points and " << Toto.getAttackDamage() << " attack damage." << std::endl;

	return (0);
}
