#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	AForm *shrub_form = new ShrubberyCreationForm("Shrub_target");
	std::cout << *shrub_form;
	AForm *robot_form = new RobotomyRequestForm("Robot_target");
	std::cout << *robot_form;
	AForm *pres_form = new PresidentialPardonForm("Pres_target");
	std::cout << *pres_form;

	Bureaucrat bur1("bur1", 3);
	std::cout << bur1;

	std::cout << std::endl << "**********************************" << std::endl << std::endl;

	bur1.signForm(*shrub_form);
	std::cout << *shrub_form;
	bur1.executeForm(*shrub_form);

	std::cout << std::endl << "**********************************" << std::endl << std::endl;

	bur1.signForm(*robot_form);
	std::cout << *robot_form;
	bur1.executeForm(*robot_form);

	std::cout << std::endl << "**********************************" << std::endl << std::endl;

	bur1.signForm(*pres_form);
	std::cout << *pres_form;
	bur1.executeForm(*pres_form);

	delete shrub_form;
	delete robot_form;
	delete pres_form;

	return (0);
}
