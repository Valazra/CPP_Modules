#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "***************** Constructors *****************" << std::endl;
	ClapTrap Toto("Toto");
	ScavTrap Tata("Tata");
	ScavTrap Tata2(Tata);

	std::cout << std::endl <<  "********* Actions of ClapTrap Toto *********" << std::endl;
	Toto.attack("Coco");
	Toto.takeDamage(5);
	Toto.beRepaired(3);

	std::cout << std::endl << "********* Actions of ScavTrap Tata *********" << std::endl;
	Tata.attack("Nono");
	Tata.takeDamage(10);
	Tata.beRepaired(30);
	Tata.guardGate();

	std::cout << std::endl << "***************** Destructors *****************" << std::endl;
	return (0);
}
