#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int ac, char **av)
{
	(void)av;
	PhoneBook phonebook;

	if (ac == 1)
		phonebook.start();
	else
		std::cout << "Bad number of args" << std::endl;
	return (0);
}
