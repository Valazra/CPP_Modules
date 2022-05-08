#include <iostream>
#include <stdint.h>

typedef struct	s_data
{
	std::string	login;
	int	bh;
	float	test;
	
}		Data;

void	init_data(Data *ptr)
{
	ptr->login = "vazra";
	ptr->bh = 80;
	ptr->test = 40.6;
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
	std::cout << "bh : " << data->bh << std::endl;
	std::cout << "test : " << data->test << std::endl;
	std::cout << "*************************************" << std::endl;
	uintptr_t raw = serialize(data);
	std::cout << "Raw : " << raw << std::endl;
	std::cout << "*************************************" << std::endl;
	data = deserialize(raw);
	std::cout << "login : " << data->login << std::endl;
	std::cout << "bh : " << data->bh << std::endl;
	std::cout << "test : " << data->test << std::endl;
}
