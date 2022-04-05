#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	int nb_animals  = 8;
	Animal *table_animals[nb_animals];

	std::cout << "***************** Constructors *****************" << std::endl;
	for (int i = 0; i < nb_animals; i++)
	{
		if (i % 2)
			table_animals[i] = new Cat();
		else
			table_animals[i] = new Dog();
	}
	
	std::cout << std::endl << "***************** Actions *****************" << std::endl;
	for (int i = 0; i < nb_animals; i++)
		table_animals[i]->makeSound();

	std::cout << std::endl << "***************** Destructors *****************" << std::endl;
	for (int i = 0; i < nb_animals; i++)
		delete table_animals[i];
	std::cout << std::endl << "1**********************************" << std::endl;
	Dog basic;
	std::cout << std::endl << "2**********************************" << std::endl;
	Dog tmp = basic;
	std::cout << std::endl << "3**********************************" << std::endl;
	Dog tmp2(basic);
	std::cout << std::endl << "4**********************************" << std::endl;
	Dog tmp3;
	std::cout << std::endl << "5**********************************" << std::endl;
//	tmp3 = basic;
	std::cout << std::endl << "6**********************************" << std::endl;
	return (0);
}
