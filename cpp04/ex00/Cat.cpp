#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat default destructor called" << std::endl;
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	_type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou miaou" << std::endl;
	return ;
}
