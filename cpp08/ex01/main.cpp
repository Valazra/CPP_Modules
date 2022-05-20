#include "Span.hpp"

int main(void)
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl << "*************************************" << std::endl << std::endl;

	Span sp2(10000);
	unsigned int i = 1;

	while (i <= 10000)
	{
		sp2.addNumber(i * 2);
		i++;
	}

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	std::cout << std::endl << "*************************************" << std::endl << std::endl;

	std::cout << "Let's test some exceptions :" << std::endl << "addNumber a 6th number in a span(5) :" << std::endl << std::endl;

	try
	{
		sp.addNumber(25);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "use shortestSpan() in a Span with only one element : " << std::endl << std::endl;

	try
	{
		Span sp3(1);

		sp3.addNumber(55);

		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "*************************************" << std::endl << std::endl;

	std::cout << "Let's use a range of iterators with function addNumber2 :" << std::endl << std::endl;

	try
	{
		Span sp4 = Span(1000);
		std::vector<int> tmp;
		srand(time(NULL));
		unsigned int rand;
		int j = 0;

		while (j < 1000)
		{
			rand = std::rand();
			tmp.push_back(rand);
			j++;
		}

		std::vector<int>::iterator it = tmp.begin();
		std::vector<int>::iterator ite = tmp.end();
		sp4.addNumber2(it, ite);
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "*************************************" << std::endl << std::endl;

	return (0);
}
