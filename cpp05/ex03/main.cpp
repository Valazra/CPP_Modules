#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	intern;
	AForm *shrub_form = NULL;
	AForm *robot_form = NULL;
	AForm *pres_form = NULL;
	AForm *bad_form = NULL;

	shrub_form = intern.makeForm("ShrubberyCreationForm", "Shrub_target");
	robot_form = intern.makeForm("RobotomyRequestForm", "Robot_target");
	pres_form = intern.makeForm("PresidentialPardonForm", "Pres_target");
	bad_form = intern.makeForm("BadForm", "Bad_target");

	std::cout << std::endl << "**********************************" << std::endl << std::endl;

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
	delete bad_form;

	return (0);
}
