/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:50:41 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 16:15:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	int nb_animals  = 8;
	Animal *table_animals[nb_animals];


	for (int i = 0; i < nb_animals; i++)
	{
		if (i % 2)
			table_animals[i] = new Cat();
		else
			table_animals[i] = new Dog();
	}
	for (int i = 0; i < nb_animals; i++)
		table_animals[i]->makeSound();

	for (int i = 0; i < nb_animals; i++)
		delete table_animals[i];
	return (0);
}
