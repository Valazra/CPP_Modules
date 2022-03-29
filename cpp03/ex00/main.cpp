#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Toto("Toto");
	ClapTrap Random;
	ClapTrap Toto2(Toto);
	
	std::cout << Toto.getName() << " has " << Toto.getHitPoints() << " hit points, " << Toto.getEnergyPoints() << " energy points and " << Toto.getAttackDamage() << " attack damage." << std::endl;
	std::cout << Random.getName() << " has " << Random.getHitPoints() << " hit points, " << Random.getEnergyPoints() << " energy points and " << Random.getAttackDamage() << " attack damage." << std::endl;
	std::cout << Toto2.getName() << " has " << Toto2.getHitPoints() << " hit points, " << Toto2.getEnergyPoints() << " energy points and " << Toto2.getAttackDamage() << " attack damage." << std::endl;
	Random = Toto;
	std::cout << Random.getName() << " has " << Random.getHitPoints() << " hit points, " << Random.getEnergyPoints() << " energy points and " << Random.getAttackDamage() << " attack damage." << std::endl;
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
