#include <iostream>
#include "Convert.hpp"

int	main(int ac, char **av)
{
//penser à un arg vide ""
	if (ac != 2)
	{
		std::cout << "Bad number of arguments" << std::endl;
		return (-1);
	}
	Convert av1(av[1]);
	av1.convertType();
	return (0);
}
