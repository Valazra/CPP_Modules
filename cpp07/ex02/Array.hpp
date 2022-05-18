#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template < typename T >
class Array
{
	public :
		Array(void) : _array(NULL), _size(0){};
		Array(unsigned int n) : _size(n){};
		Array(Array const & src);
		~Array(void);

		Array & operator=(Array const & rhs);

		unsigned int size(void);

		class BadIndexException : public std::exception
		{
			public :
				virtual const char* what(void) const throw()
				{
					return ("Array : Bad Index");
				}
		}

	private :
		T* _array;
		unsigned int _size;
};

#endif
