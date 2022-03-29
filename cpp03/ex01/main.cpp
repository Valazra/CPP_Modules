#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "***************** Constructors *****************" << std::endl;
	ClapTrap Toto("Toto");
	ScavTrap Tata("Tata");
	ScavTrap Tata2(Tata);

	std::cout << std::endl << "********* Actions of ScavTrap Tata *********" << std::endl;
	std::cout << Tata.getName() << " has " << Tata.getHitPoints() << " hit points, " << Tata.getEnergyPoints() << " energy points and " << Tata.getAttackDamage() << " attack damage." << std::endl;
	Tata.attack("Nono");
	Tata.takeDamage(10);
	Tata.beRepaired(30);
	Tata.guardGate();
	std::cout << std::endl << Tata.getName() << " has " << Tata.getHitPoints() << " hit points, " << Tata.getEnergyPoints() << " energy points and " << Tata.getAttackDamage() << " attack damage." << std::endl;

	std::cout << std::endl << "***************** Destructors *****************" << std::endl;
	return (0);
}
