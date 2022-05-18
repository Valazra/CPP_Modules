#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template < typename T >
class Array
{
	public :
		Array(void);
		Array(unsigned int n);

	private :
		T* _array;
		unsigned int _size;
};

#endif
