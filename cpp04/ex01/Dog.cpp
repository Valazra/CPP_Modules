#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_dog_brain = new Brain();
	return ;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_dog_brain = new Brain(*src._dog_brain);
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
	delete _dog_brain;
	this->_type = rhs.getType();
	_dog_brain = new Brain(*rhs._dog_brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf ouaf" << std::endl;
	return ;
}

Brain*	Dog::getBrain(void) const
{
	return (_dog_brain);
}
