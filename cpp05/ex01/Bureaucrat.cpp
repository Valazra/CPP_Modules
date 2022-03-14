/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:18:01 by user42            #+#    #+#             */
/*   Updated: 2022/03/14 01:05:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Anonymous"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name("Copy")
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	_grade = rhs.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int		Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void		Bureaucrat::incrementGrade(void)
{
	if (_grade <= 1) 
		throw Bureaucrat::GradeTooHighException();
	_grade--;
	std::cout << _name << " grade incremented" << std::endl;
	return ;
}

void		Bureaucrat::decrementGrade(void)
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
	std::cout << _name << " grade decremented" << std::endl;
	return ;
}

void		Bureaucrat::signForm(Form & formulaire)
{
	try
	{
		formulaire.beSigned(*this);
		std::cout << _name << " signed " << formulaire.getName() << std::endl;
	}
	catch (Form::GradeTooHighException & e)
	{
		std::cout << _name << " couldn't sign " << formulaire.getName() << " because " << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << _name << " couldn't sign " << formulaire.getName() << " because " << e.what() << std::endl;
	}
	return ;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return (o);
}
