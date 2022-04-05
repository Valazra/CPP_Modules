#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_cat_brain = new Brain();
	return ;
}

Cat::Cat(Cat const & src) : AAnimal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_cat_brain = new Brain(*src._cat_brain);
	return ;
}

Cat::~Cat(void)
{
	delete _cat_brain;
	std::cout << "Cat default destructor called" << std::endl;
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	delete _cat_brain;
	this->_type = rhs.getType();
	_cat_brain = new Brain(*rhs._cat_brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou miaou" << std::endl;
	return ;
}
