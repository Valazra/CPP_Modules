#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template < typename T >
class Array
{
	public :
		Array(void) : _array(NULL), _size(0){};
		Array(unsigned int n) : _array(new T[n]()), _size(n){};
		Array(Array const & src) : _array(new T[src.size()]()), _size(src.size())
		{
			unsigned int i;
			for (i = 0 ; i < _size ; i++)
				_array[i] = src._array[i];
		};
		~Array(void)
		{
			if (_size > 0)
				delete [] _array;
		};

		Array & operator=(Array const & rhs)
		{
			if (_size > 0)
				delete [] _array;
			_size = rhs.size();
			_array = new T[rhs.size()]();
			for (unsigned int i = 0 ; i < _size ; i++)
				_array[i] = rhs._array[i];
			return (*this);
		}

		T & operator[](unsigned int index) const
		{
			if (index < 0 || index >= _size)
				throw Array::BadIndexException();
			else
				return (_array[index]);
		}

		unsigned int size(void) const{return (_size);};

		class BadIndexException : public std::exception
		{
			public :
				virtual const char* what(void) const throw()
				{
					return ("Bad Index Exception");
				}
		};

	private :
		T* _array;
		unsigned int _size;
};

#endif
