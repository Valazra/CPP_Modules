#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const & src)
{
	(void)src;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern & Intern::operator=(Intern const & src)
{
	(void)src;
	return (*this);
}

AForm*	Intern::makeForm(std::string const form_name, std::string form_target)
{
	AForm* form_table[3] = {new ShrubberyCreationForm(form_target), new RobotomyRequestForm(form_target), new PresidentialPardonForm(form_target)};
	
	try
	{
		AForm *form_to_create = NULL;
		for (int i = 0 ; i < 3 ; i++)
		{
			if (form_name == form_table[i]->getName())
			{
				form_to_create = form_table[i];
				for (int j = 0 ; j < 3 ; j++)
				{
					if (j != i)
						delete form_table[j];
				}
				std::cout << "Intern creates " << form_name << std::endl;
				return (form_to_create);
			}
		}
		for (int i = 0 ; i < 3 ; i++)
			delete form_table[i];
		throw Intern::FormDoesntExist();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (NULL);
}
