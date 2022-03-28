#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat anonymous;
		std::cout << anonymous;
		anonymous.incrementGrade();
		std::cout << anonymous;
		
	}
	catch (std::exception & e)
	{
		std::cerr << "ERROR : " << e.what()  << std::endl;
	}
	std::cout << "*****************************************" << std::endl;
	try
	{
		Bureaucrat toto("Toto", 145);
		std::cout << toto;
		for (int i = 0 ; i < 6 ; i++)
		{
			toto.decrementGrade();
			std::cout << toto;
		}
	}
	catch (std::exception & e)
	{
		std::cerr << "ERROR : " << e.what()  << std::endl;
	}
	std::cout << "*****************************************" << std::endl;
	try
	{
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
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << "ERROR : " << e.what()  << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "ERROR : " << e.what()  << std::endl;
	}
	return (0);
}
