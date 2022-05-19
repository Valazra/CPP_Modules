#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <stdexcept>
# include <list>
# include <algorithm>

class NbMissingException : public std::exception
{
	public :
		virtual const char * what() const throw()
		{
			return ("The number was not found.");
		}
};

template < typename T >
typename T::const_iterator	easyfind(T const container, int const nb)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), nb);
	if (it == container.end())
		throw NbMissingException();
	else
		return (it);
}

#endif
