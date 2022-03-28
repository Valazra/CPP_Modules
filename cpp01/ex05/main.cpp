#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	std::cout << "LEVEL : [DEBUG]" << std::endl;
	harl.complain("DEBUG");
	std::cout << "LEVEL : [INFO]" << std::endl;
	harl.complain("INFO");
	std::cout << "LEVEL : [WARNING]" << std::endl;
	harl.complain("WARNING");
	std::cout << "LEVEL : [ERROR]" << std::endl;
	harl.complain("ERROR");
	std::cout << "LEVEL : [TEST]" << std::endl;
	harl.complain("TEST");
	return (0);
}
