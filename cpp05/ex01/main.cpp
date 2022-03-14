/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:50:54 by user42            #+#    #+#             */
/*   Updated: 2022/03/14 01:04:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat toto("Toto", 1);
	Bureaucrat coco("Coco", 50);
	Bureaucrat nono("Nono", 150);
	Form formulaire1("Formulaire1", 25, 25);
	std::cout << toto;
	std::cout << coco;
	std::cout << nono;
	std::cout << formulaire1;
	std::cout << "*****************************************" << std::endl;
	try
	{
		toto.signForm(formulaire1);
		coco.signForm(formulaire1);
		nono.signForm(formulaire1);
	}
	catch (std::exception & e)
	{
		std::cout << "ERROR : " << e.what() << std::endl;
	}
	return (0);
}
