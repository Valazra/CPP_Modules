#include "Convert.hpp"

Convert::Convert(void) : _av1("")
{
	return ;
}

Convert::Convert(std::string av1) : _av1(av1)
{
	return ;
}

Convert::Convert(Convert const & src)
{
	*this = src;
	return ;
}

Convert::~Convert(void)
{
	return ;
}

Convert & Convert::operator=(Convert const & rhs)
{
	_av1 = rhs.getAv1();
	_type = rhs.getType();
	return (*this);
}

std::string	Convert::getAv1(void) const
{
	return (this->_av1);
}

std::string	Convert::getType(void) const
{
	return (this->_type);
}

void	Convert::convertType(void)
{
	return ;
}
