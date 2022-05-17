#include <iostream>
#include "Base.hpp"
#include <ctime>
#include <cstdlib>

Base *generate(void)
{
	srand(time(NULL));
	int r = rand() % 3;
	switch(r)
	{
		case 0:
			std::cout << "Class A created" << std::endl;
			return (new A);

		case 1:
			std::cout << "Class B created" << std::endl;
			return (new B);

		case 2:
			std::cout << "Class C created" << std::endl;
			return (new C);
	}
	return (NULL);
}

void	identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	if (a == NULL)
		;
	else
		std::cout << "Pointer : A" << std::endl;
	B *b = dynamic_cast<B*>(p);
	if (b == NULL)	
		;
	else
		std::cout << "Pointer : B" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if (c == NULL)
		;
	else
		std::cout << "Pointer : C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A & tmp = dynamic_cast<A &>(p);
		(void) tmp;
		std::cout << "Reference : A" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}

	try
	{
		B & tmp = dynamic_cast<B &>(p);
		(void) tmp;
		std::cout << "Reference : B" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	
	try
	{
		C & tmp = dynamic_cast<C &>(p);
		(void) tmp;
		std::cout << "Reference : C" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
}

int	main(void)
{
	Base *p = generate();
	identify(p);
	identify(*p);
	return (0);
}
