#include <iostream>
#include "Convert.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Bad number of arguments" << std::endl;
		return (-1);
	}
	else
	{
		if (av[1][0] == '\0')
		{
			std::cout << "Arg must not be empty" << std::endl;
			return (0);
		}
		Convert av1(av[1]);
		av1.convertType();
	}
	return (0);
}
