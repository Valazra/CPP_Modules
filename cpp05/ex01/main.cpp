#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat toto("Toto", 1);
		std::cout << toto;
		Bureaucrat coco("Coco", 50);
		std::cout << coco;
		Bureaucrat nono("Nono", 150);
		std::cout << nono;
		Form formulaire1("Formulaire1", 25, 60);
		std::cout << formulaire1;
		Form formulaire2("Formulaire2", 153, 0);
	
		std::cout << std::endl << "*****************************************" << std::endl << std::endl;

		toto.signForm(formulaire1);
		std::cout << formulaire1;
		coco.signForm(formulaire1);
		nono.signForm(formulaire1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
