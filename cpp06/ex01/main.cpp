#include <iostream>
#include <stdint.h>

typedef struct	s_data
{
	std::string	login;
	int	int_test;
	float	float_test;
	
}		Data;

void	init_data(Data *ptr)
{
	ptr->login = "vazra";
	ptr->int_test = 80;
	ptr->float_test = 40.6;
}

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data* data = new Data;
	init_data(data);
	std::cout << "login : " << data->login << std::endl;
	std::cout << "int_test : " << data->int_test << std::endl;
	std::cout << "float_test : " << data->float_test << std::endl;
	std::cout << "*************************************" << std::endl;
	uintptr_t raw = serialize(data);
	std::cout << "Raw : " << raw << std::endl;
	std::cout << "*************************************" << std::endl;
	data = deserialize(raw);
	std::cout << "login : " << data->login << std::endl;
	std::cout << "int_test : " << data->int_test << std::endl;
	std::cout << "float_test : " << data->float_test << std::endl;
	return (0);
}
