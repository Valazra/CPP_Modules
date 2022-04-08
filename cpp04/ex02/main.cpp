#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	std::cout << "***************** Classics Constructors *****************" << std::endl;
//	AAnimal	aanimal;
	Dog	dog1;
	Cat	cat;
	
	std::cout << std::endl << "***************** Tests copys *****************" << std::endl;
	Dog dog2;
	Dog tmp(dog2);
	dog1 = dog2;

	std::cout << std::endl << "***************** Destructors *****************" << std::endl;
	return (0);
}
