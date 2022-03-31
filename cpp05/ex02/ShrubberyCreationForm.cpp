#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 37), _target("Default target")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	this->setSigned(src.getSigned());
	this->_target = src.getTarget();
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	this->setSigned(rhs.getSigned());
	this->_target = rhs.getTarget();
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->checkBeforeExecute(executor);
	std::ofstream ofs((_target + "_shrubbery").c_str());
	if (ofs.is_open())
	{
		ofs << "      /\\ \n" << "     /\\*\\ \n" << "    /\\O\\*\\ \n" << "   /*/\\/\\/\\ \n" << "  /\\O\\/\\*\\/\\ \n" << " /\\*\\/\\*\\/\\/\\ \n" << "/\\O\\/\\/*/\\/O/\\ \n" << "      ||    \n"  << "      ||     \n" << "      ||     \n";
	}
	else
		throw AForm::FailToOpen();
	ofs.close();
}
