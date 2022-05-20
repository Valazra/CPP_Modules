#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <climits>
# include <ctime>
# include <vector>
# include <algorithm>

class Span
{
	public :
		Span(unsigned int const size);
		Span(Span const & src);
		~Span(void);
		Span & operator=(Span const & src);

		void addNumber(int nb);
		void addNumber2(std::vector<int>::iterator it, std::vector<int>::iterator ite);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);

		class ContainerFullException : public std::exception
		{
			public :
				virtual const char * what(void) const throw()
				{
					return ("Container is full");
				}
		};

		class TooFewNumberStockedException : public std::exception
		{
			public :
				virtual const char * what(void) const throw()
				{
					return ("Container has only 0 or 1 number");
				}
		};

	private :
		Span(void);
		std::vector<int> _container;
		unsigned int _max_size;

};

#endif
