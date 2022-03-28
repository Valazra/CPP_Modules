#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	_type = rhs.getType();
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Sound of a WrongAnimal !" << std::endl;
	return ;
}
