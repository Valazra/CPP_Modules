#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat bad_bur1("bad_bur1", 155);
	std::cout << bad_bur1;
	Bureaucrat bad_bur2("bad_bur2", 0);
	std::cout << bad_bur2;

	std::cout << std::endl << "*****************************************" << std::endl << std::endl;

	Bureaucrat anonymous;
	std::cout << anonymous;
	anonymous.incrementGrade();
	std::cout << anonymous;
	anonymous.decrementGrade();
	std::cout << anonymous;
	anonymous.decrementGrade();
	std::cout << anonymous;

	std::cout << std::endl << "*****************************************" << std::endl << std::endl;

	Bureaucrat toto("Toto", 145);
	std::cout << toto;
	for (int i = 0 ; i < 6 ; i++)
	{
		toto.decrementGrade();
		std::cout << toto;
	}

	std::cout << std::endl << "*****************************************" << std::endl << std::endl;

	Bureaucrat coco("Coco", 3);
	Bureaucrat nono("Nono", 148);
	std::cout << coco;
	std::cout << nono;
	for (int i = 0 ; i < 3 ; i++)
	{
		coco.incrementGrade();
		std::cout << coco;
		nono.decrementGrade();
		std::cout << nono;
	}
	return (0);
}
