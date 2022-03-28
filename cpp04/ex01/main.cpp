#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	int nb_animals  = 8;
	Animal *table_animals[nb_animals];


	for (int i = 0; i < nb_animals; i++)
	{
		if (i % 2)
			table_animals[i] = new Cat();
		else
			table_animals[i] = new Dog();
	}
	for (int i = 0; i < nb_animals; i++)
		table_animals[i]->makeSound();

	for (int i = 0; i < nb_animals; i++)
		delete table_animals[i];
	return (0);
}
