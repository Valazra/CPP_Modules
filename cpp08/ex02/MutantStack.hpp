#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template < typename T >
class MutantStack : public std::stack<T>
{
	public : 

		MutantStack(void);
		MutantStack(MutantStack<T> const & src);
		~MutantStack(void);

		MutantStack & operator=(MutantStack<T> const & src);

		typedef typename std::stack<T>::container_type::iterator it;
		typedef typename std::stack<T>::container_type::const_iterator itc;

		it begin();
		itc begin() const;
		it end();
		itc end() const;
};

template < typename T >
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
}

template < typename T >
MutantStack<T>::MutantStack(MutantStack<T> const & src)
{
	*this = src;
}

template < typename T >
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const & src)
{
	this->c = src.c;
	return (*this);
}

template < typename T >
MutantStack<T>::~MutantStack(void)
{
}

template < typename T >
typename MutantStack<T>::it MutantStack<T>::begin()
{
	return (this->c.begin());
}

template < typename T >
typename MutantStack<T>::itc MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template < typename T >
typename MutantStack<T>::it MutantStack<T>::end()
{
	return (this->c.end());
}

template < typename T >
typename MutantStack<T>::itc MutantStack<T>::end() const
{
	return (this->c.end());
}

#endif
