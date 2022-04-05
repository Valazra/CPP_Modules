#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "***************** Constructors *****************" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	const WrongCat* wrongCat2 = new WrongCat();

	std::cout << std::endl << "***************** Actions *****************" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	wrongMeta->makeSound();
	wrongCat->makeSound();
	wrongCat2->makeSound();

	std::cout << std::endl << "***************** Destructors *****************" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongCat;
	delete wrongCat2;
	return (0);
}
