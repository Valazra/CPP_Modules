#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("Default target")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	this->setSigned(src.getSigned());
	this->_target = src.getTarget();
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	this->setSigned(rhs.getSigned());
	this->_target = rhs.getTarget();
	return (*this);
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (_target);
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->checkBeforeExecute(executor);
	std::cout << "test3" << std::endl;
}
