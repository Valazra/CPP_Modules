#include <iostream>

int	main(int ac, char **av)
{
	int	type;

	type = -1;
	if (ac != 2)
	{
		std::cout << "Bad number of arguments" << std::endl;
		return (-1);
	}
	type = getType(av[1]);
	if (type == 0)
	{
		std::cout << "Bad type" << std::endl;
		return (-1);
	}
	else if (type == 1) //char
	{
		//deja en char *
		treat(av[1]);
	}
	else if (type == 2) // int
	{
		int	type_int;
		type_int = convert_int(av[1]);
		treat(type_int);
	}
	else if (type == 3) //float
	{
		float	type_float;
		type_float = convert_float(av[1]);
		treat(type_float);
	}
	else if (type == 4) // double
	{
		double	type_double;
		type_double = convert_double(av[1]);
		treat(type_double);
	}
	return (0);
}
