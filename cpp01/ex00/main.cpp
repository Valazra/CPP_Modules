#include "Zombie.hpp"

int	main(void)
{
	Zombie Popo("Popo");
	Popo.announce();

	Zombie Roro("Roro");
	Roro.announce();

	Zombie* Toto = newZombie("Toto");
	Toto->announce();
	delete Toto;

	Zombie* Lolo = new Zombie("Lolo");
	Lolo->announce();
	delete Lolo;

	randomChump("Coco");

	return (0);
}
