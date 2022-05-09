#include "iter.hpp"

int	main(void)
{
	int	int_tab[3] = {1, 2, 3};
	float	float_tab[3] = {1.5, 2.6, -3.7};
	char	char_tab[3] = {'a', 'b', 'c'};
	std::string string_tab[3] = {"aaa", "bbb", "ccc"};

	iter(int_tab, 3, print_value);
	std::cout << "**********************************" << std::endl;
	iter(float_tab, 3, print_value);
	std::cout << "**********************************" << std::endl;
	iter(char_tab, 3, print_value);
	std::cout << "**********************************" << std::endl;
	iter(string_tab, 3, print_value);
}
