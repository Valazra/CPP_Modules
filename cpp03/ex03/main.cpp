#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "***************** Constructors *****************" << std::endl;
	DiamondTrap Titi("Titi");
	DiamondTrap Titi2(Titi);
	DiamondTrap Titi3;
	DiamondTrap Titi4 = Titi;

	std::cout << std::endl <<  "********* Attack *********" << std::endl;
	Titi.attack("Coco");
	Titi2.attack("Coco");
	Titi3.attack("Coco");
	Titi4.attack("Coco");
	
	std::cout << std::endl << "********* Special Capacity *********" << std::endl;
	Titi.whoAmI();
	Titi2.whoAmI();
	Titi3.whoAmI();
	Titi4.whoAmI();

	std::cout << std::endl << "********* Status *********" << std::endl;
	std::cout << Titi.getName() << " has " << Titi.getHitPoints() << " hit points, " << Titi.getEnergyPoints() << " energy points and " << Titi.getAttackDamage() << " attack damage." << std::endl;
	std::cout << Titi2.getName() << " has " << Titi2.getHitPoints() << " hit points, " << Titi2.getEnergyPoints() << " energy points and " << Titi2.getAttackDamage() << " attack damage." << std::endl;
	std::cout << Titi3.getName() << " has " << Titi3.getHitPoints() << " hit points, " << Titi3.getEnergyPoints() << " energy points and " << Titi3.getAttackDamage() << " attack damage." << std::endl;
	std::cout << Titi4.getName() << " has " << Titi4.getHitPoints() << " hit points, " << Titi4.getEnergyPoints() << " energy points and " << Titi4.getAttackDamage() << " attack damage." << std::endl;
	std::cout << std::endl << "***************** Destructors *****************" << std::endl;

	return (0);
}
