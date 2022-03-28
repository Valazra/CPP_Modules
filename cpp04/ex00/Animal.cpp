#include "Animal.hpp"

Animal::Animal(void) : _type("")
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal default destructor called" << std::endl;
	return ;
}

Animal & Animal::operator=(Animal const & rhs)
{
	_type = rhs.getType();
	return (*this);
}

std::string Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Sound of an Animal !" << std::endl;
	return ;
}
