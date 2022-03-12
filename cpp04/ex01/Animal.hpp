/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:41:23 by user42            #+#    #+#             */
/*   Updated: 2022/03/12 15:23:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public :
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);

		Animal & operator=(Animal const & rhs);

		std::string getType(void) const;

		virtual void makeSound() const;

	protected :
		std::string _type;
};

#endif
