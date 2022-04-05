#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_dog_brain = new Brain();
	return ;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	delete _dog_brain;
	std::cout << "Dog default destructor called" << std::endl;
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	_type = rhs.getType();
	_dog_brain = rhs._dog_brain;
	std::cout << "Dog assignement operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf ouaf" << std::endl;
	return ;
}
