#include "Span.hpp"

Span::Span(void)
{
	return ;
}

Span::Span(unsigned int const size)
{
	_max_size = size;
	return ;
}

Span::Span(Span const & src)
{
	_container = src._container;
	_max_size = src._max_size;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span & Span::operator=(Span const & src)
{
	_container = src._container;
	_max_size = src._max_size;
	return (*this);
}

void Span::addNumber(int nb)
{
	if (_container.size() >= _max_size)
		throw Span::ContainerFullException();
	else
		_container.push_back(nb);
}

void Span::addNumber2(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
	if (_container.size() >= _max_size)
		throw Span::ContainerFullException();
	else
		_container.insert(_container.end(), it, ite);
	if (_container.size() > _max_size)
		throw Span::ContainerFullException();
}

unsigned int Span::shortestSpan(void)
{
	unsigned int shortestSpan = UINT_MAX;
	unsigned int tmp = UINT_MAX;

	if (_container.size() <= 1)
		throw Span::TooFewNumberStockedException();
	std::vector<int>::iterator it = _container.begin();
	std::vector<int>::iterator it2;
	while (it != _container.end())
	{
		it2 = it + 1;
		while (it2 != _container.end())
		{
			tmp = std::abs(*it - *it2);
			if (tmp < shortestSpan)
				shortestSpan = tmp;
			it2++;
		}
		it++;
	}
	return (shortestSpan);
}

unsigned int Span::longestSpan(void)
{
	if (_container.size() <= 1)
		throw Span::TooFewNumberStockedException();
	std::vector<int>::iterator min = std::min_element(_container.begin(), _container.end());
	std::vector<int>::iterator max = std::max_element(_container.begin(), _container.end());
	return (*max - *min);
}
