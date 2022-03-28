#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "***************** Constructors *****************" << std::endl;
	DiamondTrap Titi("Titi");
	DiamondTrap Titi2 = Titi;
	DiamondTrap Titi3(Titi2);
	DiamondTrap Titi4;

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

	std::cout << std::endl << "***************** Destructors *****************" << std::endl;

	return (0);
}
