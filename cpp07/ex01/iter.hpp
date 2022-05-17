#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template < typename T >
void	iter(T tab[], int sizeTab, void (*f)(T const & value))
{
	for (int i = 0 ; i < sizeTab ; i++)
		(f)(tab[i]);
}

template < typename T >
void	print_value(T & value)
{
	std::cout << value << std::endl;
}

#endif
