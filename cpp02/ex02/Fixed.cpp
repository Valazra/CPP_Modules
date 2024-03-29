#include "Fixed.hpp"

Fixed::Fixed(void) : _value_nb(0)
{
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
	return ;
}

Fixed::Fixed(int const n)
{
	_value_nb = n << _scaling_factor;
	return ;
}

Fixed::Fixed(float const f)
{
	_value_nb = roundf(f * (1 << _scaling_factor));
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

int	Fixed::getRawBits(void) const
{
	return (this->_value_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value_nb = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)(_value_nb) / (1 << _scaling_factor));
}

int	Fixed::toInt(void) const
{
	return (_value_nb / (1 << _scaling_factor));
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_value_nb = rhs.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

Fixed & Fixed::operator++(void)
{
	_value_nb++;
	return (*this);
}

Fixed & Fixed::operator--(void)
{
	_value_nb--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_value_nb++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_value_nb--;
	return (tmp);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	return (a < b ? a : b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	return (a < b ? b : a);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	return (a < b ? a : b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	return (a < b ? b : a);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
